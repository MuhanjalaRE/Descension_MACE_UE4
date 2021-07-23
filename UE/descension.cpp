#include "pch.h"

#define TRIGGERBOT

using namespace std;
using namespace CG;
static const DWORD64 uworld_offset = 0x5390D98;
static const DWORD64 processevent_offset = 0xEE57C0;
static DWORD64 base_address = NULL;

class UWorldProxy {
   public:
    class UWorld* world;
} world_proxy;

class Timer {
   private:
    std::chrono::steady_clock::time_point previous_tick_time_;
    float period_in_ms_;

   public:
    void SetPeriod(float period_in_ms) {
        this->period_in_ms_ = period_in_ms;
    }

    void SetFrequency(float frequency) {
        this->period_in_ms_ = 1000 * (1.0 / frequency);
    }

    Timer(void) {
        // Tick();
        this->previous_tick_time_ = std::chrono::steady_clock::time_point();
        SetPeriod(1000);
    }

    // Timer(float period_in_ms) : Timer() {
    //    SetPeriod(period_in_ms);
    //}

    Timer(float frequency) : Timer() {
        SetFrequency(frequency);
    }

    bool IsReady(void) {
        std::chrono::steady_clock::time_point now = std::chrono::steady_clock::now();
        float delta = std::chrono::duration<float>(now - previous_tick_time_).count() * 1000.0;
        if (delta > period_in_ms_) {
            Tick(now);
            return true;
        }
        return false;
    }

    void Tick(void) {
        previous_tick_time_ = std::chrono::steady_clock::now();
    }

    void Tick(std::chrono::steady_clock::time_point now) {
        previous_tick_time_ = now;
    }

    void Reset(void) {
        previous_tick_time_ = std::chrono::steady_clock::time_point();
    }

    void Restart(void) {
        previous_tick_time_ = std::chrono::steady_clock::now();
    }
};

// Literally just copypasta'd garbage from UE4 source for DLs aimbot
namespace FMath {

/*-----------------------------------------------------------------------------
Floating point constants.
-----------------------------------------------------------------------------*/

#undef PI
#define PI (3.1415926535897932f) /* Extra digits if needed: 3.1415926535897932384626433832795f */
#define SMALL_NUMBER (1.e-8f)
#define KINDA_SMALL_NUMBER (1.e-4f)
#define BIG_NUMBER (3.4e+38f)
#define EULERS_NUMBER (2.71828182845904523536f)
#define UE_GOLDEN_RATIO (1.6180339887498948482045868343656381f) /* Also known as divine proportion, golden mean, or golden section - related to the Fibonacci Sequence = (1 + sqrt(5)) / 2 */

// Copied from float.h
#define MAX_FLT 3.402823466e+38F

// Aux constants.
#define INV_PI (0.31830988618f)
#define HALF_PI (1.57079632679f)

// Common square roots
#define UE_SQRT_2 (1.4142135623730950488016887242097f)
#define UE_SQRT_3 (1.7320508075688772935274463415059f)
#define UE_INV_SQRT_2 (0.70710678118654752440084436210485f)
#define UE_INV_SQRT_3 (0.57735026918962576450914878050196f)
#define UE_HALF_SQRT_2 (0.70710678118654752440084436210485f)
#define UE_HALF_SQRT_3 (0.86602540378443864676372317075294f)

// Magic numbers for numerical precision.
#define DELTA (0.00001f)

/**
 * Lengths of normalized vectors (These are half their maximum values
 * to assure that dot products with normalized vectors don't overflow).
 */
#define FLOAT_NORMAL_THRESH (0.0001f)

//
// Magic numbers for numerical precision.
//
#define THRESH_POINT_ON_PLANE (0.10f) /* Thickness of plane for front/back/inside test */
#define THRESH_POINT_ON_SIDE (0.20f) /* Thickness of polygon side's side-plane for point-inside/outside/on side test */
#define THRESH_POINTS_ARE_SAME (0.00002f) /* Two points are same if within this distance */
#define THRESH_POINTS_ARE_NEAR (0.015f) /* Two points are near if within this distance and can be combined if imprecise math is ok */
#define THRESH_NORMALS_ARE_SAME (0.00002f) /* Two normal points are same if within this distance */
#define THRESH_UVS_ARE_SAME (0.0009765625f) /* Two UV are same if within this threshold (1.0f/1024f) */
/* Making this too large results in incorrect CSG classification and disaster */
#define THRESH_VECTORS_ARE_NEAR (0.0004f) /* Two vectors are near if within this distance and can be combined if imprecise math is ok */
/* Making this too large results in lighting problems due to inaccurate texture coordinates */
#define THRESH_SPLIT_POLY_WITH_PLANE (0.25f) /* A plane splits a polygon in half */
#define THRESH_SPLIT_POLY_PRECISELY (0.01f) /* A plane exactly splits a polygon */
#define THRESH_ZERO_NORM_SQUARED (0.0001f) /* Size of a unit normal that is considered "zero", squared */
#define THRESH_NORMALS_ARE_PARALLEL (0.999845f) /* Two unit vectors are parallel if abs(A dot B) is greater than or equal to this. This is roughly cosine(1.0 degrees). */
#define THRESH_NORMALS_ARE_ORTHOGONAL (0.017455f) /* Two unit vectors are orthogonal (perpendicular) if abs(A dot B) is less than or equal this. This is roughly cosine(89.0 degrees). */

#define THRESH_VECTOR_NORMALIZED (0.01f) /** Allowed error for a normalized vector (against squared magnitude) */
#define THRESH_QUAT_NORMALIZED (0.01f) /** Allowed error for a normalized quaternion (against squared magnitude) */

typedef signed int int32;
#define CONSTEXPR constexpr

static FORCEINLINE float Sqrt(float Value) {
    return sqrtf(Value);
}

/** Computes absolute value in a generic way */
template <class T>
static CONSTEXPR FORCEINLINE T Abs(const T A) {
    return (A >= (T)0) ? A : -A;
}

/**
 *	Checks if two floating point numbers are nearly equal.
 *	@param A				First number to compare
 *	@param B				Second number to compare
 *	@param ErrorTolerance	Maximum allowed difference for considering them as 'nearly equal'
 *	@return					true if A and B are nearly equal
 */
static FORCEINLINE bool IsNearlyEqual(float A, float B, float ErrorTolerance = SMALL_NUMBER) {
    return Abs<float>(A - B) <= ErrorTolerance;
}

static CONSTEXPR FORCEINLINE int32 TruncToInt(float F) {
    return (int32)F;
}
/** Returns higher value in a generic way */
template <class T>
static CONSTEXPR FORCEINLINE T Max(const T A, const T B) {
    return (A >= B) ? A : B;
}

/** Returns lower value in a generic way */
template <class T>
static CONSTEXPR FORCEINLINE T Min(const T A, const T B) {
    return (A <= B) ? A : B;
}

static FORCEINLINE int32 Rand() {
    return rand();
}

/** Seeds global random number functions Rand() and FRand() */
static FORCEINLINE void RandInit(int32 Seed) {
    srand(Seed);
}

static FORCEINLINE float FRand() {
    return Rand() / (float)RAND_MAX;
}

/** Helper function for rand implementations. Returns a random number in [0..A) */
static FORCEINLINE int32 RandHelper(int32 A) {
    // Note that on some platforms RAND_MAX is a large number so we cannot do ((rand()/(RAND_MAX+1)) * A)
    // or else we may include the upper bound results, which should be excluded.
    return A > 0 ? Min(TruncToInt(FRand() * A), A - 1) : 0;
}

/** Helper function for rand implementations. Returns a random number >= Min and <= Max */
static FORCEINLINE int32 RandRange(int32 Min, int32 Max) {
    const int Range = (Max - Min) + 1;
    return Min + RandHelper(Range);
}

}  // namespace FMath

namespace imgui {

namespace visuals {
static enum MarkerStyle { kNone, kDot, kCircle, kFilledSquare, kSquare };
static const char* marker_labels[] = {"None", "Dot", "Circle", "Filled square", "Square"};

struct Marker {
    MarkerStyle marker_style = MarkerStyle::kSquare;
    int marker_size = 5;
    int marker_thickness = 2;
    ImColor marker_colour = {255, 255, 255, 255};
};

static struct AimbotVisualSettings : Marker {
    bool scale_by_distance = true;
    int distance_for_scaling = 5000;
    int minimum_marker_size = 3;
    AimbotVisualSettings(void) {
        marker_style = MarkerStyle::kSquare;
        marker_size = 8;
        marker_thickness = 2;
        marker_colour = {255, 255, 0, 200};
    }
} aimbot_visual_settings;

static struct RadarVisualSettings : Marker {
    ImColor enemy_marker_colour = {255, 0, 0, 1 * 255};
    ImColor friendly_marker_colour = {0, 255, 0, 1 * 255};
    ImColor enemy_flag_marker_colour = {255, 255, 0, 255};
    ImColor friendly_flag_marker_colour = {0, 255, 255, 255};
    ImColor window_background_colour = {25, 25, 25, 25};
    bool draw_axes = true;

    float zoom_ = 0.004;
    float zoom = 1;
    int window_size = 300 * 1.25;
    ImVec2 window_location = {100, 100};
    float border = 5;
    int axes_thickness = 1;
    RadarVisualSettings(void) {
        marker_style = MarkerStyle::kDot;
        marker_size = 3;
        marker_thickness = 1;
    }
} radar_visual_settings;

static struct ESPVisualSettings {
    struct BoundingBoxSettings {
        int box_thickness = 2;
        ImColor enemy_player_box_colour = {0, 255, 255, 1 * 125};
        ImColor friendly_player_box_colour = {0, 255, 0, 1 * 125};
    } bounding_box_settings;

    struct LineSettings {
        int line_thickness = 1;
        ImColor enemy_player_line_colour = {255, 255, 255, 65};
    } line_settings;
} esp_visual_settings;

static struct CrosshairSettings : Marker {
    bool enabled = true;

    CrosshairSettings(void) {
        marker_style = MarkerStyle::kDot;
        marker_size = 3;
        marker_thickness = 1;
        marker_colour = {255, 0, 255, 255};
    }
} crosshair_settings;

void DrawMarker(MarkerStyle marker_style, ImVec2 center, ImColor marker_colour, int marker_size, int marker_thickness) {
    ImDrawList* imgui_draw_list = ImGui::GetWindowDrawList();
    switch (marker_style) {
        case visuals::MarkerStyle::kDot:
            imgui_draw_list->AddCircleFilled(center, marker_size, marker_colour);
            break;
        case visuals::MarkerStyle::kCircle:
            imgui_draw_list->AddCircle(center, marker_size, marker_colour, 0, marker_thickness);
            break;
        case visuals::MarkerStyle::kFilledSquare:
            imgui_draw_list->AddRectFilled({center.x - marker_size, center.y - marker_size}, {center.x + marker_size, center.y + marker_size}, marker_colour, 0);
            break;
        case visuals::MarkerStyle::kSquare:
            imgui_draw_list->AddRect({center.x - marker_size, center.y - marker_size}, {center.x + marker_size, center.y + marker_size}, marker_colour, 0, 0, marker_thickness);
            break;
        default:
            break;
    }
}

}  // namespace visuals
namespace imgui_menu {}

static struct ImGuiSettings { } imgui_settings; }  // namespace imgui

namespace hooks {
namespace processevent {
#define PROCESSEVENT_HOOK_FUNCTION(x) void x(UObject* object, UFunction* function, void* params)
typedef int(__fastcall* _ProcessEvent)(UObject*, UFunction*, void*);
_ProcessEvent original_processevent = NULL;
int ProcessEvent(UObject* object, UFunction* function, void* params);
unordered_map<UFunction*, vector<_ProcessEvent>> processevent_hooks;

bool AddProcessEventHook(UFunction* function, _ProcessEvent hook) {
    if (processevent_hooks.find(function) == processevent_hooks.end()) {
        processevent_hooks[function] = vector<_ProcessEvent>();
    }
    processevent_hooks[function].push_back(hook);
    return true;
}

}  // namespace processevent
}  // namespace hooks

namespace validate {
bool IsValid(AMACharacter* character) {
    return character && character->PlayerState && character->Mesh && character->GetHealth() > 0;
}
}  // namespace validate

namespace math {
#define M_PI 3.14159265358979323846
#define M_PI_F ((float)(M_PI))
#define PI M_PI
#define DEG2RAD(x) ((float)(x) * (float)(M_PI_F / 180.f))
#define RAD2DEG(x) ((float)(x) * (float)(180.f / M_PI_F))
#define INV_PI (0.31830988618f)
#define HALF_PI (1.57079632679f)

void SinCos(float* ScalarSin, float* ScalarCos, float Value) {
    // Map Value to y in [-pi,pi], x = 2*pi*quotient + remainder.
    float quotient = (INV_PI * 0.5f) * Value;
    if (Value >= 0.0f) {
        quotient = (float)((int)(quotient + 0.5f));
    } else {
        quotient = (float)((int)(quotient - 0.5f));
    }
    float y = Value - (2.0f * PI) * quotient;

    // Map y to [-pi/2,pi/2] with sin(y) = sin(Value).
    float sign;
    if (y > HALF_PI) {
        y = PI - y;
        sign = -1.0f;
    } else if (y < -HALF_PI) {
        y = -PI - y;
        sign = -1.0f;
    } else {
        sign = +1.0f;
    }

    float y2 = y * y;

    // 11-degree minimax approximation
    *ScalarSin = (((((-2.3889859e-08f * y2 + 2.7525562e-06f) * y2 - 0.00019840874f) * y2 + 0.0083333310f) * y2 - 0.16666667f) * y2 + 1.0f) * y;

    // 10-degree minimax approximation
    float p = ((((-2.6051615e-07f * y2 + 2.4760495e-05f) * y2 - 0.0013888378f) * y2 + 0.041666638f) * y2 - 0.5f) * y2 + 1.0f;
    *ScalarCos = sign * p;
}

FVector RotatorToVector(FRotator rotation) {
    float CP, SP, CY, SY;
    SinCos(&SP, &CP, DEG2RAD(rotation.Pitch));
    SinCos(&SY, &CY, DEG2RAD(rotation.Yaw));
    FVector V = FVector(CP * CY, CP * SY, SP);

    return V;
}

FRotator VectorToRotator(FVector v) {
    FRotator rotator;
    rotator.Yaw = RAD2DEG(atan2(v.Y, v.X));
    rotator.Pitch = RAD2DEG(atan2(v.Z, sqrt((v.X * v.X) + (v.Y * v.Y))));
    rotator.Roll = 0;  // No roll

    return rotator;
}

FVector CrossProduct(FVector U, FVector V) {
    return FVector(U.Y * V.Z - U.Z * V.Y, U.Z * V.X - U.X * V.Z, U.X * V.Y - U.Y * V.X);
}

bool IsVectorToRight(FVector base_vector, FVector vector_to_check) {
    FVector right = CrossProduct(base_vector, {0, 0, 1});

    if (right.Dot(vector_to_check) < 0) {
        return true;
    } else {
        return false;
    }
}

// Angle on the X-Y plane
float AngleBetweenVector(FVector a, FVector b) {
    // a.b = |a||b|cosx
    a.Z = 0;
    b.Z = 0;

    float dot = a.Dot(b);
    float denom = a.Magnitude() * b.Magnitude();
    float div = dot / denom;
    return acos(div);
}

}  // namespace math

namespace game_data {
static ULocalPlayer* local_player = NULL;
static AMAPlayerController* local_player_controller = NULL;
static AMACharacter* local_player_character = NULL;

static FVector2D screen_size = FVector2D();
static FVector2D screen_center = FVector2D();

enum class Weapon { none, disk, cg, gl, blaster, plasma, unknown };
enum class WeaponType { kHitscan, kProjectileLinear, kProjectileArching };

namespace information {

static struct WeaponSpeeds {
    struct Weapon {
        float bullet_speed;
        float inheritence;
    };

    struct Disk : Weapon {
        Disk() {
            bullet_speed = 6500;  //(5850 + 6050) / 2;  // 5850 //6500 IS THE REAL IN GAME SPEED
            inheritence = 0.5;    // 0.5 IS THE REAL INHERITENCE
        }
    } disk;

    struct Chaingun : Weapon {
        Chaingun() {
            bullet_speed = 52500;  // 37500;  // 52500 IS THE REAL IN GAME SPEED
            inheritence = 1;       // 1 IS THE REAL INHERITENCE
        }
    } chaingun;

    struct Grenadelauncher : Weapon {
        Grenadelauncher() {
            bullet_speed = 4700;  // 6502.13;  // 4700 IS THE REAL IN GAME SPEED
            inheritence = 0.75;   // 0.5;       // 0.75 IS THE REAL INHERITENCE
        }
    } grenadelauncher;

    struct Plasma : Weapon {
        Plasma() {
            bullet_speed = 4800;  // 4800 IS THE REAL SPEED
            inheritence = 0.5;    // 0.5 IS THE REAL INHERITENCE
        }
    } plasma;

    struct Blaster : Weapon {
        Blaster() {
            bullet_speed = 15000;  // 15000 IS THE REAL IN GAME SPEED  // GRAVITY IS -750
            inheritence = 1;       // 1 IS THE REAL INHERITENCE
        }
    } blaster;
} weapon_speeds;

struct GameActor {
   public:
    int team_id_ = -1;
    FVector location_;
    FRotator rotation_;
    FVector velocity_;
    FVector forward_vector_;
    FVector acceleration_;

    bool IsSameTeam(GameActor* actor) {
        return this->team_id_ == actor->team_id_;
    }
};

struct Player : public GameActor {
   public:
    ABP_BaseCharacter_C* character_ = NULL;

    int player_id_ = -1;
    float health_ = 0;
    float energy_ = 0;

    bool is_valid_ = false;
    Weapon weapon_ = Weapon::none;
    WeaponType weapon_type_ = WeaponType::kHitscan;

    void Reset(void) {
        character_ = NULL;
        is_valid_ = false;
    }

    void Setup(ABP_BaseCharacter_C* character) {
        Reset();
        if (!character)
            return;

        AMAPlayerState* player_state = (AMAPlayerState*)character->PlayerState;
        if (!player_state)
            return;

        health_ = character->GetHealth();
        energy_ = character->GetEnergy();

        if (health_ > 0) {
            is_valid_ = true;
        } else {
            is_valid_ = false;
        }

        player_id_ = character->PlayerState->PlayerId;
        if (player_state->TeamState)
            team_id_ = player_state->TeamState->TeamId;

        location_ = player_state->PawnPrivate->K2_GetActorLocation();

        location_ = character->K2_GetActorLocation();
        rotation_ = character->K2_GetActorRotation();
        velocity_ = character->GetVelocity();
        forward_vector_ = math::RotatorToVector(rotation_).Unit();

        character_ = character;
    }
};

class Flag : public GameActor {
   public:
    AMACarriedObject* flag_;
    AMACarriedObjectBase* base_;
    bool is_held_ = false;
    bool is_valid_ = false;

    Flag(AMACarriedObjectBase* base) {}

    Flag(AMACarriedObject* flag) {
        if (!flag)
            return;
        flag_ = flag;
        base_ = flag->HomeBase;
        location_ = flag->K2_GetActorLocation();
        is_held_ = !flag->IsHome();
        if (flag->TeamState) {
            team_id_ = flag->TeamState->TeamId;
        }
        is_valid_ = true;
    }
};

}  // namespace information

static class GameData {
   public:
    information::Player my_player_information;
    vector<information::Player> players;
    vector<information::Flag> flags;
    vector<APlayerController*> player_controllers;

    GameData(void) {
        ;
    }

    void Reset(void) {
        players.clear();
        flags.clear();
        my_player_information.weapon_ = Weapon::none;
        my_player_information.weapon_type_ = WeaponType::kHitscan;
        my_player_information.is_valid_ = false;  // Invalidate the player every frame
    }

} game_data;
static game_data::information::Player& my_player = game_data::game_data.my_player_information;

static Timer get_player_controllers_timer(0.1 * 5);

void GetPlayers(void) {
    local_player_character = local_player_controller->GetControlledCharacter();
    bool my_player_character_found = false;

    AMAGameState* game_state = ((AMAGameState*)world_proxy.world->GameState);

    if (game_state->IsA(AMACTFGameState::StaticClass())) {
        AMACTFGameState* ctf_game_state = ((AMACTFGameState*)world_proxy.world->GameState);
        for (int i = 0; i < ctf_game_state->FlagBases.Num(); i++) {
            AMACTFFlagBase* flag_base = ctf_game_state->FlagBases[i];
            if (flag_base && flag_base->CarriedObject) {
                game_data.flags.push_back(information::Flag(flag_base->CarriedObject));
            }
        }
    }

    static information::Player player_information;

    TArray<APlayerState*>& player_states = game_state->PlayerArray;
    for (int i = 0; i < player_states.Num(); i++) {
        AMAPlayerState* player_state = (AMAPlayerState*)player_states[i];
        AMACharacter* character_ = (AMACharacter*)player_state->PawnPrivate;
        ABP_LightCharacter_C* character = (ABP_LightCharacter_C*)character_;

        player_information.Setup((ABP_BaseCharacter_C*)character);

        if (player_information.is_valid_) {
            if (character != local_player_character) {
                game_data.players.push_back(player_information);  // game_data.players does not include ourselves
            } else if (character == local_player_character) {
                my_player_character_found = true;
                my_player.Setup((ABP_BaseCharacter_C*)character);
            }
        }
    }

    if (!my_player_character_found) {
        my_player.forward_vector_ = math::RotatorToVector(local_player_controller->K2_GetActorRotation()).Unit();
        my_player.is_valid_ = false;
    }

    return;
}

void GetGameData(void);

}  // namespace game_data

namespace game_functions {
bool InLineOfSight(AActor* actor) {
    return game_data::local_player_controller->LineOfSightTo(actor, FVector(), false);
}
bool IsSameTeam(AActor* a, AActor* b) {
    return ((AMAGameState*)world_proxy.world->GameState)->OnSameTeam(a, b);
}

FVector2D Project(FVector location) {
    FVector2D projection;
    game_data::local_player->PlayerController->ProjectWorldLocationToScreen(location, &projection, false);
    return projection;
}

bool IsInFieldOfView(FVector enemy_location) {
    FVector rotation_vector = game_data::my_player.forward_vector_;
    FVector difference_vector = enemy_location - game_data::my_player.location_;
    double dot = rotation_vector.X * difference_vector.X + rotation_vector.Y * difference_vector.Y;
    if (dot <= 0)      // dot is > 0 if vectors face same direction, 0 if vectors perpendicular, negative if facing oppposite directions
        return false;  // we want to ensure the vectors face in the same direction
    return true;
}

bool IsInHorizontalFieldOfView(FVector enemy_location, double horizontal_fov) {
    FVector rotation_vector = game_data::my_player.forward_vector_;
    FVector difference_vector = enemy_location - game_data::my_player.location_;
    double dot = rotation_vector.X * difference_vector.X + rotation_vector.Y * difference_vector.Y;
    if (dot <= 0)      // dot is > 0 if vectors face same direction, 0 if vectors perpendicular, negative if facing oppposite directions
        return false;  // we want to ensure the vectors face in the same direction

    double dot_sq = dot * dot;  // squaring the dot loses the negative sign, so we cant tell from this point onwards
                                // if the enemy is in front or behind us if using dot_sq
    double denom = (rotation_vector.X * rotation_vector.X + rotation_vector.Y * rotation_vector.Y) * (difference_vector.X * difference_vector.X + difference_vector.Y * difference_vector.Y);
    double angle_sq = dot_sq / denom;
    double v = pow(cos(DEG2RAD(horizontal_fov)), 2);

    if (angle_sq < v)
        return false;
    return true;
}

FVector GetMuzzleOffset(void) {
    return game_data::my_player.character_->Weapon->FireOffset;
}

}  // namespace game_functions

namespace other {
static struct OtherSettings {
} other_settings;

void Tick(void) {}
}  // namespace other

namespace esp {

static struct ESPSettings {
    bool enabled = true;
    int poll_frequency = 60 * 5;
    bool show_friendlies = false;
    int player_height = 100;
    int player_width = 0;
    float width_to_height_ratio = 0.5;
    bool show_lines = true;
} esp_settings;

static Timer get_esp_data_timer(esp_settings.poll_frequency);

struct ESPInformation {
    FVector2D projection;  // center
    float height;          // height for box/rectangle
    bool is_friendly = false;
};

vector<ESPInformation> esp_information;

void Tick(void) {
    if (!esp_settings.enabled || !get_esp_data_timer.IsReady())
        return;

    esp_information.clear();

    if (!game_data::my_player.is_valid_)
        ;  // return;

    // bool is_my_player_alive = game_data::my_player.is_valid_;
    for (vector<game_data::information::Player>::iterator player = game_data::game_data.players.begin(); player != game_data::game_data.players.end(); player++) {
        if (!player->is_valid_) {
            continue;
        }

        game_data::information::Player* p = (game_data::information::Player*)&*player;
        bool same_team = game_data::my_player.IsSameTeam(p);

        if ((same_team && !esp_settings.show_friendlies) || !game_functions::IsInFieldOfView(player->location_))
            continue;

        if (!game_functions::IsInFieldOfView(player->location_))
            continue;

        FVector2D center_projection = game_functions::Project(player->location_);
        player->location_.Z += esp_settings.player_height;  // this is HALF the height in reality
        FVector2D head_projection = game_functions::Project(player->location_);
        player->location_.Z -= esp_settings.player_height;  // this is HALF the height in reality
        float height = abs(head_projection.Y - center_projection.Y);
        float width = esp_settings.width_to_height_ratio * height;
        esp_information.push_back({center_projection, height, same_team});
    }
}
}  // namespace esp

namespace aimbot {

// Overshooting means the weapon bullet speed is too low
// Undershooting means the weapon bullet speed is too high

enum AimbotMode { kClosestDistance, kClosestXhair };
static const char* mode_labels[] = {"Closest distance", "Closest to crosshair"};
static bool enabled = true;

static struct AimbotSettings {
    AimbotMode aimbot_mode = AimbotMode::kClosestXhair;

    bool enabled = true;          // enabling really just enables aimassist, this isnt really an aimbot
    bool target_everyone = true;  // if we want to do prediction on every single player

    float tempest_ping_in_ms = 0;   //-90
    float chaingun_ping_in_ms = 0;  //-50
    float grenadelauncher_ping_in_ms = 0;
    float plasmagun_ping_in_ms = 0;
    float blaster_ping_in_ms = 0;

    bool stay_locked_to_target = true;
    bool auto_lock_to_new_target = true;

    float aimbot_horizontal_fov_angle = 90;         // 30;
    float aimbot_horizontal_fov_angle_cos = 0;      // 0.86602540378;
    float aimbot_horizontal_fov_angle_cos_sqr = 0;  // 0.75;

    bool friendly_fire = false;
    bool need_line_of_sight = true;

    int aimbot_poll_frequency = 60 * 5;

#ifdef TRIGGERBOT
    struct TriggerbotSettings {
        bool enabled = false;
        bool use_for_tempest = true;
        bool use_for_chaingun = false;
        bool use_for_grenadelauncher = false;
        bool use_for_blaster = true;
        bool use_for_plasma = true;
    } triggerbot_settings;
#endif
} aimbot_settings;

static Timer aimbot_poll_timer(aimbot_settings.aimbot_poll_frequency);

static game_data::information::Player target_player;

vector<FVector2D> projections_of_predictions;

struct AimbotInformation {
    float distance_;
    FVector2D projection_;
    float height;
};

vector<AimbotInformation> aimbot_information;

bool PredictAimAtTarget(game_data::information::Player* target_player, FVector* output_vector, FVector offset) {
    float projectileSpeed;
    float inheritence;
    float ping;

    switch (game_data::my_player.weapon_) {
        using namespace game_data::information;
        case game_data::Weapon::disk:
            projectileSpeed = weapon_speeds.disk.bullet_speed;
            inheritence = weapon_speeds.disk.inheritence;
            ping = aimbot::aimbot_settings.tempest_ping_in_ms;
            break;
        case game_data::Weapon::cg:
            projectileSpeed = weapon_speeds.chaingun.bullet_speed;
            inheritence = weapon_speeds.chaingun.inheritence;
            ping = aimbot::aimbot_settings.chaingun_ping_in_ms;
            break;
        case game_data::Weapon::gl:
            projectileSpeed = weapon_speeds.grenadelauncher.bullet_speed;
            inheritence = weapon_speeds.grenadelauncher.inheritence;
            ping = aimbot::aimbot_settings.grenadelauncher_ping_in_ms;
            break;
        case game_data::Weapon::plasma:
            projectileSpeed = weapon_speeds.plasma.bullet_speed;
            inheritence = weapon_speeds.plasma.inheritence;
            ping = aimbot::aimbot_settings.plasmagun_ping_in_ms;
            break;
        case game_data::Weapon::blaster:
            projectileSpeed = weapon_speeds.blaster.bullet_speed;
            inheritence = weapon_speeds.blaster.inheritence;
            ping = aimbot::aimbot_settings.blaster_ping_in_ms;
            break;
        case game_data::Weapon::none:
        case game_data::Weapon::unknown:
        default:
            return false;
    }

    if (game_data::my_player.weapon_type_ == game_data::WeaponType::kHitscan) {
        *output_vector = target_player->location_;
        return true;
    }

    if (game_data::my_player.weapon_type_ != game_data::WeaponType::kProjectileArching && game_data::my_player.weapon_type_ != game_data::WeaponType::kProjectileLinear)
        return false;

    FVector muzzlePosition = game_data::my_player.location_ + offset;
    FVector targetPosition = target_player->location_ + (target_player->velocity_ * ping / 1000.0);
    FVector targetVelocity = target_player->velocity_;

    // Copy pasted from this point
    float projectileSpeedSq = projectileSpeed * projectileSpeed;
    float targetSpeedSq = targetVelocity.Magnitude() * targetVelocity.Magnitude();  // doing this instead of self-multiply for maximum accuracy
    float targetSpeed = targetVelocity.Magnitude();
    FVector targetToMuzzle = muzzlePosition - targetPosition;
    float targetToMuzzleDistSq = targetToMuzzle.Magnitude() * targetToMuzzle.Magnitude();  // doing this instead of self-multiply for maximum accuracy
    float targetToMuzzleDist = targetToMuzzle.Magnitude();
    FVector targetToMuzzleDir = targetToMuzzle;
    targetToMuzzleDir = targetToMuzzleDir.Unit();

    // Law of Cosines: A*A + B*B - 2*A*B*cos(theta) = C*C
    // A is distance from muzzle to target (known value: targetToMuzzleDist)
    // B is distance traveled by target until impact (targetSpeed * t)
    // C is distance traveled by projectile until impact (projectileSpeed * t)
    float cosTheta = (targetSpeedSq > 0) ? targetToMuzzleDir.Dot(targetVelocity.Unit()) : 1.0f;

    bool validSolutionFound = true;
    float t;
    if (FMath::IsNearlyEqual(projectileSpeedSq, targetSpeedSq)) {
        // a = projectileSpeedSq - targetSpeedSq = 0
        // We want to avoid div/0 that can result from target and projectile traveling at the same speed
        // We know that C and B are the same length because the target and projectile will travel the same distance to impact
        // Law of Cosines: A*A + B*B - 2*A*B*cos(theta) = C*C
        // Law of Cosines: A*A + B*B - 2*A*B*cos(theta) = B*B
        // Law of Cosines: A*A - 2*A*B*cos(theta) = 0
        // Law of Cosines: A*A = 2*A*B*cos(theta)
        // Law of Cosines: A = 2*B*cos(theta)
        // Law of Cosines: A/(2*cos(theta)) = B
        // Law of Cosines: 0.5f*A/cos(theta) = B
        // Law of Cosines: 0.5f * targetToMuzzleDist / cos(theta) = targetSpeed * t
        // We know that cos(theta) of zero or less means there is no solution, since that would mean B goes backwards or leads to div/0 (infinity)
        if (cosTheta > 0) {
            t = 0.5f * targetToMuzzleDist / (targetSpeed * cosTheta);
        } else {
            validSolutionFound = false;
            t = FMath::RandRange(1, 5);
        }
    } else {
        // Quadratic formula: Note that lower case 'a' is a completely different derived variable from capital 'A' used in Law of Cosines (sorry):
        // t = [ -b +- Sqrt( b*b - 4*a*c ) ] / (2*a)
        float a = projectileSpeedSq - targetSpeedSq;
        float b = 2.0f * targetToMuzzleDist * targetSpeed * cosTheta;
        float c = -targetToMuzzleDistSq;
        float discriminant = b * b - 4.0f * a * c;

        if (discriminant < 0) {
            // Square root of a negative number is an imaginary number (NaN)
            // Special thanks to Rupert Key (Twitter: @Arakade) for exposing NaN values that occur when target speed is faster than or equal to projectile speed
            validSolutionFound = false;
            t = FMath::RandRange(1, 5);
        } else {
            // a will never be zero because we protect against that with "if (Mathf.Approximately(projectileSpeedSq, targetSpeedSq))" above
            float uglyNumber = FMath::Sqrt(discriminant);
            float t0 = 0.5f * (-b + uglyNumber) / a;
            float t1 = 0.5f * (-b - uglyNumber) / a;
            // Assign the lowest positive time to t to aim at the earliest hit
            t = FMath::Min(t0, t1);
            if (t < SMALL_NUMBER) {
                t = FMath::Max(t0, t1);
            }

            if (t < SMALL_NUMBER) {
                // Time can't flow backwards when it comes to aiming.
                // No real solution was found, take a wild shot at the target's future location
                validSolutionFound = false;
                t = FMath::RandRange(1, 5);
            }
        }
    }

    // Vb = Vt - 0.5*Ab*t + [(Pti - Pbi) / t]
    FVector projectileVelocity = targetVelocity + (targetToMuzzle * -1 / t);
    if (!validSolutionFound) {
        // PredictiveAimWildGuessAtImpactTime gives you a t that will not result in impact
        // Which means that all that math that assumes projectileSpeed is enough to impact at time t breaks down
        // In this case, we simply want the direction to shoot to make sure we
        // don't break the gameplay rules of the cannon's capabilities aside from gravity compensation
        projectileVelocity = projectileVelocity.Unit() * projectileSpeed;
        return false;
    }

    // The output vector is a vector that is pointing in the direction to aim, the output vector is not the actual predicted location
    *output_vector = (muzzlePosition + projectileVelocity.Unit() * t * projectileSpeed) - (game_data::my_player.velocity_ * inheritence * t);

    return true;
}

void Enable(void) {
    enabled = true;
}

void Reset(void) {
    target_player.Reset();
    Enable();
}

void Disable(void) {
    Reset();
    enabled = false;
}

void Toggle(void) {
    aimbot_settings.enabled = !aimbot_settings.enabled;
    if (!aimbot_settings.enabled) {
        Reset();
    }
    return;

    if (enabled) {
        Disable();
    } else {
        Enable();
    }
}

bool FindTarget(void) {
    ABP_BaseCharacter_C* current_target_character = target_player.character_;
    target_player.Setup(current_target_character);

    bool need_to_find_target = true;  //! aimbot_settings.target_everyone;

    if (aimbot_settings.stay_locked_to_target) {
        if (!target_player.is_valid_) {
            if (!aimbot_settings.auto_lock_to_new_target && current_target_character != NULL) {
                Disable();
                return false;
            }
        } else {
            need_to_find_target = false;
        }
    }

    if (need_to_find_target) {
        current_target_character = NULL;
        FVector rotation_vector = game_data::my_player.forward_vector_;
        for (vector<game_data::information::Player>::iterator player = game_data::game_data.players.begin(); player != game_data::game_data.players.end(); player++) {
            if (!player->is_valid_) {
                continue;
            }

            game_data::information::Player* p = (game_data::information::Player*)&*player;
            bool same_team = game_data::my_player.IsSameTeam(p);
            bool line_of_sight = game_functions::InLineOfSight(player->character_);
            if ((same_team && !aimbot_settings.friendly_fire) || (!game_functions::IsInFieldOfView(player->location_) && aimbot_settings.aimbot_mode == AimbotMode::kClosestXhair) || (!line_of_sight && aimbot_settings.need_line_of_sight))
                continue;

            switch (aimbot_settings.aimbot_mode) {
                case AimbotMode::kClosestXhair: {
                    static double distance = 0;
                    FVector enemy_location = player->location_;

                    if (!game_functions::IsInHorizontalFieldOfView(player->location_, aimbot_settings.aimbot_horizontal_fov_angle))
                        continue;

                    FVector2D projection_vector = game_functions::Project(enemy_location);
                    if (!current_target_character) {
                        current_target_character = player->character_;
                        distance = (projection_vector - game_data::screen_center).MagnitudeSqr();
                    } else {
                        double current_distance = (projection_vector - game_data::screen_center).MagnitudeSqr();
                        if (current_distance < distance) {
                            current_target_character = player->character_;
                            distance = current_distance;
                        }
                    }
                } break;

                case AimbotMode::kClosestDistance: {
                    static double distance = 0;
                    if (!current_target_character) {
                        current_target_character = player->character_;
                        distance = (game_data::my_player.location_ - player->location_).MagnitudeSqr();
                    } else {
                        double current_distance = (game_data::my_player.location_ - player->location_).MagnitudeSqr();
                        if (current_distance < distance) {
                            current_target_character = player->character_;
                            distance = current_distance;
                        }
                    }
                } break;
            }
        }
    }

    target_player.Setup(current_target_character);

    return current_target_character != NULL;
}

#ifdef TRIGGERBOT
void SendLeftMouseClick(void) {
    INPUT inputs[2];
    ZeroMemory(inputs, sizeof(inputs));

    inputs[0].type = INPUT_MOUSE;
    inputs[0].mi.dwFlags = MOUSEEVENTF_LEFTDOWN;

    inputs[1].type = INPUT_MOUSE;
    inputs[1].mi.dwFlags = MOUSEEVENTF_LEFTUP;

    UINT uSent = SendInput(ARRAYSIZE(inputs), inputs, sizeof(INPUT));
}
#endif

void Tick(void) {
    if (!aimbot_settings.enabled /*|| !enabled*/ || !aimbot_poll_timer.IsReady())
        return;

    projections_of_predictions.clear();
    aimbot_information.clear();

    if (!game_data::my_player.is_valid_ || game_data::my_player.weapon_ == game_data::Weapon::none || game_data::my_player.weapon_ == game_data::Weapon::unknown)
        return;

    static FVector prediction;
    FVector muzzle_offset = game_functions::GetMuzzleOffset();

    if (!aimbot_settings.target_everyone) {
        if (enabled && FindTarget() /*&& target_player.character_*/) {
            bool result = PredictAimAtTarget(&target_player, &prediction, muzzle_offset);

            if (result) {
                FVector2D projection = game_functions::Project(prediction);
                float height = -1;

                projections_of_predictions.push_back(projection);
                aimbot_information.push_back({(prediction - game_data::my_player.location_).Magnitude(), projection, height});

#ifdef TRIGGERBOT
                if (aimbot_settings.triggerbot_settings.enabled && projection.X > 0 && projection.Y > 0) {
                    bool los = game_functions::InLineOfSight(target_player.character_);
                    if (los) {
                        FVector2D center_projection = game_functions::Project(target_player.location_);
                        target_player.location_.Z += esp::esp_settings.player_height;  // this is HALF the height in reality
                        FVector2D head_projection = game_functions::Project(target_player.location_);
                        target_player.location_.Z -= esp::esp_settings.player_height;  // this is HALF the height in reality
                        height = abs(head_projection.Y - center_projection.Y);
                        float width = esp::esp_settings.width_to_height_ratio * height;

                        // if (imgui::visuals::aimbot_visual_settings.show_triggerbot_bounds) {
                        //    triggerbot_esp_information.push_back({projection, height, same_team, ""});
                        //}

                        if (abs(game_data::screen_center.X - projection.X) < width && abs(game_data::screen_center.Y - projection.Y) < height) {
                            if ((game_data::my_player.weapon_ == game_data::Weapon::disk && aimbot_settings.triggerbot_settings.use_for_tempest) || (game_data::my_player.weapon_ == game_data::Weapon::blaster && aimbot_settings.triggerbot_settings.use_for_blaster) || (game_data::my_player.weapon_ == game_data::Weapon::plasma && aimbot_settings.triggerbot_settings.use_for_plasma)) {
                                SendLeftMouseClick();
                            }
                        }
                    }
                }
#endif
            }
        }
    } else {
        for (vector<game_data::information::Player>::iterator player = game_data::game_data.players.begin(); player != game_data::game_data.players.end(); player++) {
            if (!player->is_valid_ || player->character_ == game_data::my_player.character_) {
                continue;
            }

            game_data::information::Player* p = (game_data::information::Player*)&*player;
            bool same_team = game_data::my_player.IsSameTeam(p);
            bool line_of_sight = game_functions::InLineOfSight(player->character_);

            if ((same_team && !aimbot_settings.friendly_fire) || (!game_functions::IsInFieldOfView(player->location_) && aimbot_settings.aimbot_mode == AimbotMode::kClosestXhair) || (!line_of_sight && aimbot_settings.need_line_of_sight))
                continue;

            if (!game_functions::IsInHorizontalFieldOfView(player->location_, aimbot_settings.aimbot_horizontal_fov_angle))
                continue;

            bool result = PredictAimAtTarget(&*p, &prediction, muzzle_offset);

            if (result) {
                FVector2D projection = game_functions::Project(prediction);
                float height = -1;

                projections_of_predictions.push_back(projection);
                aimbot_information.push_back({(prediction - game_data::my_player.location_).Magnitude(), projection, height});

#ifdef TRIGGERBOT
                if (aimbot_settings.triggerbot_settings.enabled && projection.X > 0 && projection.Y > 0) {
                    bool los = game_functions::InLineOfSight(player->character_);
                    if (los) {
                        FVector2D center_projection = game_functions::Project(player->location_);
                        player->location_.Z += esp::esp_settings.player_height;  // this is HALF the height in reality
                        FVector2D head_projection = game_functions::Project(player->location_);
                        player->location_.Z -= esp::esp_settings.player_height;  // this is HALF the height in reality
                        height = abs(head_projection.Y - center_projection.Y);
                        float width = esp::esp_settings.width_to_height_ratio * height;

                        // if (imgui::visuals::aimbot_visual_settings.show_triggerbot_bounds) {
                        //    triggerbot_esp_information.push_back({projection, height, same_team, ""});
                        //}

                        if (abs(game_data::screen_center.X - projection.X) < width && abs(game_data::screen_center.Y - projection.Y) < height) {
                            if (game_data::my_player.weapon_ == game_data::Weapon::disk || game_data::my_player.weapon_ == game_data::Weapon::gl || game_data::my_player.weapon_ == game_data::Weapon::plasma || game_data::my_player.weapon_ == game_data::Weapon::blaster) {
                                SendLeftMouseClick();
                            }
                        }
                    }
                }
#endif
            }
        }
    }
}

}  // namespace aimbot

namespace radar {
static struct RadarSettings {
    bool enabled = true;
    int radar_poll_frequency = 60 * 5;
    bool show_friendlies = false;
    bool show_flags = true;
} radar_settings;

static Timer get_radar_data_timer(radar_settings.radar_poll_frequency);

struct RadarLocation {  // polar coordinates
    float r = 0;
    float theta = 0;
    bool right = 0;

    /*
    void Clear(void) {
        r = 0;
        theta = 0;
        right = 0;
    }
    */
};

struct RadarInformation : RadarLocation {
    bool is_friendly = false;
};

static vector<RadarInformation> player_locations;
static vector<RadarInformation> flag_locations;

void Tick(void) {
    if (!radar_settings.enabled || !get_radar_data_timer.IsReady())
        return;

    player_locations.clear();
    flag_locations.clear();

    if (!game_data::my_player.is_valid_)
        ;  // return;

    for (vector<game_data::information::Player>::iterator player = game_data::game_data.players.begin(); player != game_data::game_data.players.end(); player++) {
        if (!player->is_valid_) {
            continue;
        }

        game_data::information::Player* p = (game_data::information::Player*)&*player;
        bool same_team = game_data::my_player.IsSameTeam(p);
        if (same_team && !radar_settings.show_friendlies) {
            continue;
        }

        FVector difference_vector = player->location_ - game_data::my_player.location_;
        float angle = math::AngleBetweenVector(game_data::my_player.forward_vector_, difference_vector);
        float magnitude = difference_vector.Magnitude();
        bool right = math::IsVectorToRight(game_data::my_player.forward_vector_, difference_vector);
        RadarInformation radar_information = {magnitude, angle, right, same_team};

        float delta = magnitude * imgui::visuals::radar_visual_settings.zoom_ * imgui::visuals::radar_visual_settings.zoom;
        if (delta > imgui::visuals::radar_visual_settings.window_size / 2 - imgui::visuals::radar_visual_settings.border) {
            continue;
        }

        player_locations.push_back(radar_information);
    }

    if (radar_settings.show_flags) {
        for (vector<game_data::information::Flag>::iterator flag = game_data::game_data.flags.begin(); flag != game_data::game_data.flags.end(); flag++) {
            if (!flag->is_valid_)
                continue;

            FVector difference_vector = flag->location_ - game_data::my_player.location_;
            float angle = math::AngleBetweenVector(game_data::my_player.forward_vector_, difference_vector);
            float magnitude = difference_vector.Magnitude();
            bool right = math::IsVectorToRight(game_data::my_player.forward_vector_, difference_vector);

            game_data::information::Flag* f = (game_data::information::Flag*)&*flag;
            bool same_team = game_data::my_player.IsSameTeam(f);

            RadarInformation radar_information = {magnitude, angle, right, same_team};

            float delta = magnitude * imgui::visuals::radar_visual_settings.zoom_ * imgui::visuals::radar_visual_settings.zoom;
            if (delta > imgui::visuals::radar_visual_settings.window_size / 2 - imgui::visuals::radar_visual_settings.border) {
                continue;
            }

            flag_locations.push_back(radar_information);
        }
    }
}

}  // namespace radar

namespace imgui {
namespace imgui_menu {
enum LeftMenuButtons { kAimAssist, kESP, kRadar, kOther, kAimTracker, kInformation };
static const char* button_text[] = {"Aim assist", "ESP", "Radar", "Other", "-", "Information"};
static const int buttons_num = sizeof(button_text) / sizeof(char*);
static int selected_index = LeftMenuButtons::kInformation;  // LeftMenuButtons::kAimAssist;
static float item_width = -150;

void DrawInformationMenuNew(void) {
    static ImGuiTableFlags flags = ImGuiTableFlags_SizingFixedFit | ImGuiTableFlags_Resizable | (ImGuiTableFlags_ContextMenuInBody & 0) | (ImGuiTableFlags_NoBordersInBody & 0) | ImGuiTableFlags_BordersOuter;
    if (ImGui::BeginTable("descensiontable", 1, flags, ImVec2(0, ImGui::GetContentRegionAvail().y))) {
        ImGui::TableSetupColumn("descension", ImGuiTableColumnFlags_WidthStretch);
        ImGui::TableHeadersRow();
        ImGui::TableNextRow();
        ImGui::TableSetColumnIndex(0);
        ImGui::PushItemWidth(item_width);
        ImGui::Indent();
        const char* info0 =
            "descension v1.0 (Public)\n"
            "Released: 24/05/2020\n"
            "Game version: 1.9.1.12285";

        const char* info1 =
            "https://github.com/MuhanjalaRE\n"
            "https://twitter.com/Muhanjala\n"
            "https://dll.rip";
        ImGui::Text(info0);
        ImGui::Separator();
        ImGui::Text(info1);

        ImGui::Unindent();
        ImGui::EndTable();
    }
}

void DrawAimAssistMenuNew(void) {
    static ImGuiTableFlags flags = ImGuiTableFlags_SizingFixedFit | ImGuiTableFlags_Resizable | (ImGuiTableFlags_ContextMenuInBody & 0) | (ImGuiTableFlags_NoBordersInBody & 0) | ImGuiTableFlags_BordersOuter;
    if (ImGui::BeginTable("aimassisttable", 1, flags, ImVec2(0, ImGui::GetContentRegionAvail().y))) {
        ImGui::TableSetupColumn("Aim assist", ImGuiTableColumnFlags_WidthStretch);
        ImGui::TableHeadersRow();
        ImGui::TableNextRow();
        ImGui::TableSetColumnIndex(0);
        ImGui::PushItemWidth(item_width);
        if (ImGui::CollapsingHeader("General settings")) {
            ImGui::Indent();
            ImGui::Checkbox("Enable aim assist", &aimbot::aimbot_settings.enabled);
            ImGui::Combo("Mode##aim_assist_mode_combo", (int*)&aimbot::aimbot_settings.aimbot_mode, aimbot::mode_labels, IM_ARRAYSIZE(aimbot::mode_labels));

            if (aimbot::aimbot_settings.aimbot_mode == aimbot::AimbotMode::kClosestXhair) {
                ImGui::SliderFloat("Horizontal FOV", &aimbot::aimbot_settings.aimbot_horizontal_fov_angle, 1, 89);
                aimbot::aimbot_settings.aimbot_horizontal_fov_angle_cos = cos(aimbot::aimbot_settings.aimbot_horizontal_fov_angle * PI / 180.0);
                aimbot::aimbot_settings.aimbot_horizontal_fov_angle_cos_sqr = pow(aimbot::aimbot_settings.aimbot_horizontal_fov_angle_cos, 2);
            }

            if (ImGui::SliderInt("Poll rate (Hz)", &aimbot::aimbot_settings.aimbot_poll_frequency, 1, 300)) {
                aimbot::aimbot_poll_timer.SetFrequency(aimbot::aimbot_settings.aimbot_poll_frequency);
            }

            ImGui::Unindent();
        }

        if (ImGui::CollapsingHeader("Target settings")) {
            ImGui::Indent();
            ImGui::Checkbox("Friendly fire", &aimbot::aimbot_settings.friendly_fire);
            ImGui::Checkbox("Need line of sight", &aimbot::aimbot_settings.need_line_of_sight);
            ImGui::Checkbox("Target everyone", &aimbot::aimbot_settings.target_everyone);
            if (!aimbot::aimbot_settings.target_everyone) {
                ImGui::Checkbox("Stay locked on to target", &aimbot::aimbot_settings.stay_locked_to_target);
                ImGui::Checkbox("Auto lock to new target", &aimbot::aimbot_settings.auto_lock_to_new_target);
            }
            ImGui::Unindent();
        }

        if (ImGui::CollapsingHeader("Weapon settings")) {
            ImGui::Indent();
            if (ImGui::CollapsingHeader("Pings")) {
                ImGui::Indent();
                ImGui::SliderFloat("Tempest ping", &aimbot::aimbot_settings.tempest_ping_in_ms, -300, 300);
                ImGui::SliderFloat("Chaingun ping", &aimbot::aimbot_settings.chaingun_ping_in_ms, -300, 300);
                ImGui::SliderFloat("Grenade Launcher ping", &aimbot::aimbot_settings.grenadelauncher_ping_in_ms, -300, 300);
                ImGui::SliderFloat("Plasma Gun ping", &aimbot::aimbot_settings.plasmagun_ping_in_ms, -300, 300);
                ImGui::SliderFloat("Blaster ping", &aimbot::aimbot_settings.blaster_ping_in_ms, -300, 300);
                ImGui::Unindent();
            }

            if (ImGui::CollapsingHeader("Bullet speeds")) {
                ImGui::Indent();
                ImGui::SliderFloat("Tempest speed", &game_data::information::weapon_speeds.disk.bullet_speed, 0, 1E5);
                ImGui::SliderFloat("Chaingun speed", &game_data::information::weapon_speeds.chaingun.bullet_speed, 0, 1E5);
                ImGui::SliderFloat("Grenadelauncher speed", &game_data::information::weapon_speeds.grenadelauncher.bullet_speed, 0, 1E5);
                ImGui::SliderFloat("Plasma speed", &game_data::information::weapon_speeds.plasma.bullet_speed, 0, 1E5);
                ImGui::SliderFloat("Blaster speed", &game_data::information::weapon_speeds.blaster.bullet_speed, 0, 1E5);
                ImGui::Unindent();
            }

            if (ImGui::CollapsingHeader("Inheritence")) {
                ImGui::Indent();
                ImGui::SliderFloat("Tempest inheritence", &game_data::information::weapon_speeds.disk.inheritence, 0, 1);
                ImGui::SliderFloat("Chaingun inheritence", &game_data::information::weapon_speeds.chaingun.inheritence, 0, 1);
                ImGui::SliderFloat("Grenadelauncher inheritence", &game_data::information::weapon_speeds.grenadelauncher.inheritence, 0, 1);
                ImGui::SliderFloat("Plasma inheritence", &game_data::information::weapon_speeds.plasma.inheritence, 0, 1);
                ImGui::SliderFloat("Blaster inheritence", &game_data::information::weapon_speeds.blaster.inheritence, 0, 1);
                ImGui::Unindent();
            }

            ImGui::Unindent();
        }

#ifdef TRIGGERBOT
        if (ImGui::CollapsingHeader("Triggerbot settings")) {
            ImGui::Indent();
            ImGui::Checkbox("Enabled", &aimbot::aimbot_settings.triggerbot_settings.enabled);
            ImGui::Checkbox("Use for tempest", &aimbot::aimbot_settings.triggerbot_settings.use_for_tempest);
            ImGui::Checkbox("Use for blaster", &aimbot::aimbot_settings.triggerbot_settings.use_for_blaster);
            ImGui::Checkbox("Use for plasma", &aimbot::aimbot_settings.triggerbot_settings.use_for_plasma);
            ImGui::Unindent();
        }
#endif

        if (ImGui::CollapsingHeader("Markers")) {
            float marker_preview_size = 100;
            ImGui::Combo("Style##aim_assist_combo", (int*)&visuals::aimbot_visual_settings.marker_style, visuals::marker_labels, IM_ARRAYSIZE(visuals::marker_labels));
            ImGui::ColorEdit4("Colour", &visuals::aimbot_visual_settings.marker_colour.Value.x, ImGuiColorEditFlags_NoInputs | ImGuiColorEditFlags_None | ImGuiColorEditFlags_AlphaBar);

            ImGui::SliderInt("Radius", &visuals::aimbot_visual_settings.marker_size, 1, 10);

            if (visuals::aimbot_visual_settings.marker_style == visuals::MarkerStyle::kCircle || visuals::aimbot_visual_settings.marker_style == visuals::MarkerStyle::kSquare) {
                ImGui::SliderInt("Thickness", &visuals::aimbot_visual_settings.marker_thickness, 1, 10);
            }

            ImGui::Text("Marker preview");

            ImVec2 window_position = ImGui::GetWindowPos();
            ImVec2 window_size = ImGui::GetWindowSize();

            ImDrawList* imgui_draw_list = ImGui::GetWindowDrawList();
            ImVec2 current_cursor_pos = ImGui::GetCursorPos();
            ImVec2 local_cursor_pos = {window_position.x + ImGui::GetCursorPosX(), window_position.y + ImGui::GetCursorPosY() - ImGui::GetScrollY()};
            imgui_draw_list->AddRectFilled(local_cursor_pos, {local_cursor_pos.x + marker_preview_size, local_cursor_pos.y + marker_preview_size}, ImColor(0, 0, 0, 255), 0, 0);
            ImVec2 center = {local_cursor_pos.x + marker_preview_size / 2, local_cursor_pos.y + marker_preview_size / 2};

            float box_size_height = 40;
            float box_size_width = box_size_height * esp::esp_settings.width_to_height_ratio;

            imgui::visuals::DrawMarker((imgui::visuals::MarkerStyle)visuals::aimbot_visual_settings.marker_style, center, visuals::aimbot_visual_settings.marker_colour, visuals::aimbot_visual_settings.marker_size, visuals::aimbot_visual_settings.marker_thickness);

            current_cursor_pos.y += marker_preview_size;
            ImGui::SetCursorPos(current_cursor_pos);

            ImGui::Spacing();
            ImGui::Checkbox("Scale by distance", &visuals::aimbot_visual_settings.scale_by_distance);
            if (visuals::aimbot_visual_settings.scale_by_distance) {
                ImGui::SliderInt("Distance for scaling", &visuals::aimbot_visual_settings.distance_for_scaling, 1, 15000);
                ImGui::SliderInt("Minimum marker size", &visuals::aimbot_visual_settings.minimum_marker_size, 1, 10);
            }
        }
        ImGui::EndTable();
    }
}

void DrawRadarMenuNew(void) {
    static ImGuiTableFlags flags = ImGuiTableFlags_SizingFixedFit | ImGuiTableFlags_Resizable | (ImGuiTableFlags_ContextMenuInBody & 0) | (ImGuiTableFlags_NoBordersInBody & 0) | ImGuiTableFlags_BordersOuter;
    if (ImGui::BeginTable("radartable", 1, flags, ImVec2(0, ImGui::GetContentRegionAvail().y))) {
        ImGui::TableSetupColumn("Radar", ImGuiTableColumnFlags_WidthStretch);
        ImGui::TableHeadersRow();
        ImGui::TableNextRow();
        ImGui::TableSetColumnIndex(0);
        ImGui::PushItemWidth(item_width);
        if (ImGui::CollapsingHeader("General settings")) {
            ImGui::Indent();
            ImGui::Checkbox("Enabled##radar_enabled", &radar::radar_settings.enabled);
            if (ImGui::SliderInt("Poll rate (Hz)##routes", &radar::radar_settings.radar_poll_frequency, 1, 300)) {
                radar::get_radar_data_timer.SetFrequency(radar::radar_settings.radar_poll_frequency);
            }

            ImGui::SliderFloat("Zoom", &visuals::radar_visual_settings.zoom, 0, 10);
            ImGui::Checkbox("Show friendlies", &radar::radar_settings.show_friendlies);
            ImGui::Checkbox("Show flags", &radar::radar_settings.show_flags);
            ImGui::Unindent();
        }

        if (ImGui::CollapsingHeader("Visual settings")) {
            ImGui::Indent();
            ImGui::ColorEdit4("Backgrond Colour", &visuals::radar_visual_settings.window_background_colour.Value.x, ImGuiColorEditFlags_NoInputs | ImGuiColorEditFlags_None | ImGuiColorEditFlags_AlphaBar);
            ImGui::Checkbox("Draw axes", &visuals::radar_visual_settings.draw_axes);
            if (visuals::radar_visual_settings.draw_axes)
                ImGui::SliderInt("Axes thickness", &visuals::radar_visual_settings.axes_thickness, 1, 4);
            ImGui::Unindent();
        }

        if (ImGui::CollapsingHeader("Markers")) {
            ImGui::Indent();
            float marker_preview_size = 100;

            ImGui::Combo("Style##radar_combo", (int*)&visuals::radar_visual_settings.marker_style, visuals::marker_labels, IM_ARRAYSIZE(visuals::marker_labels));
            ImGui::SliderInt("Radius", &visuals::radar_visual_settings.marker_size, 1, 50);

            if (visuals::radar_visual_settings.marker_style == visuals::MarkerStyle::kCircle || visuals::radar_visual_settings.marker_style == visuals::MarkerStyle::kSquare) {
                ImGui::SliderInt("Thickness", &visuals::radar_visual_settings.marker_thickness, 1, 10);
            }

            ImGui::Text("Marker preview");

            ImVec2 window_position = ImGui::GetWindowPos();
            ImVec2 window_size = ImGui::GetWindowSize();

            ImDrawList* imgui_draw_list = ImGui::GetWindowDrawList();
            ImVec2 current_cursor_pos = ImGui::GetCursorPos();
            ImVec2 local_cursor_pos = {window_position.x + ImGui::GetCursorPosX(), window_position.y + ImGui::GetCursorPosY() - ImGui::GetScrollY()};
            imgui_draw_list->AddRectFilled(local_cursor_pos, {local_cursor_pos.x + marker_preview_size, local_cursor_pos.y + marker_preview_size}, ImColor(0, 0, 0, 255), 0, 0);
            ImVec2 center = {local_cursor_pos.x + marker_preview_size / 2, local_cursor_pos.y + marker_preview_size / 2};

            imgui::visuals::DrawMarker((imgui::visuals::MarkerStyle)visuals::radar_visual_settings.marker_style, center, visuals::radar_visual_settings.enemy_marker_colour, visuals::radar_visual_settings.marker_size, visuals::radar_visual_settings.marker_thickness);

            current_cursor_pos.y += marker_preview_size;
            ImGui::SetCursorPos(current_cursor_pos);
            ImGui::Spacing();

            ImGui::ColorEdit4("Friendly player Colour", &visuals::radar_visual_settings.friendly_marker_colour.Value.x, ImGuiColorEditFlags_NoInputs | ImGuiColorEditFlags_None | ImGuiColorEditFlags_AlphaBar);
            ImGui::ColorEdit4("Enemy player Colour", &visuals::radar_visual_settings.enemy_marker_colour.Value.x, ImGuiColorEditFlags_NoInputs | ImGuiColorEditFlags_None | ImGuiColorEditFlags_AlphaBar);
            ImGui::ColorEdit4("Friendly flag Colour", &visuals::radar_visual_settings.friendly_flag_marker_colour.Value.x, ImGuiColorEditFlags_NoInputs | ImGuiColorEditFlags_None | ImGuiColorEditFlags_AlphaBar);
            ImGui::ColorEdit4("Enemy flag Colour", &visuals::radar_visual_settings.enemy_flag_marker_colour.Value.x, ImGuiColorEditFlags_NoInputs | ImGuiColorEditFlags_None | ImGuiColorEditFlags_AlphaBar);
            ImGui::Unindent();
        }

        ImGui::EndTable();
    }
}

void DrawESPMenuNew(void) {
    static ImGuiTableFlags flags = ImGuiTableFlags_SizingFixedFit | ImGuiTableFlags_Resizable | (ImGuiTableFlags_ContextMenuInBody & 0) | (ImGuiTableFlags_NoBordersInBody & 0) | ImGuiTableFlags_BordersOuter;
    if (ImGui::BeginTable("esptable", 1, flags, ImVec2(0, ImGui::GetContentRegionAvail().y))) {
        ImGui::TableSetupColumn("ESP", ImGuiTableColumnFlags_WidthStretch);
        ImGui::TableHeadersRow();
        ImGui::TableNextRow();
        ImGui::TableSetColumnIndex(0);
        ImGui::PushItemWidth(item_width);
        if (ImGui::CollapsingHeader("General settings")) {
            ImGui::Indent();
            ImGui::Checkbox("Enabled", &esp::esp_settings.enabled);
            if (ImGui::SliderInt("Poll rate (Hz)", &esp::esp_settings.poll_frequency, 1, 300)) {
                esp::get_esp_data_timer.SetFrequency(esp::esp_settings.poll_frequency);
            }
            ImGui::Checkbox("Show friendlies", &esp::esp_settings.show_friendlies);
            ImGui::Unindent();
        }

        if (ImGui::CollapsingHeader("BoundingBox settings")) {
            ImGui::Indent();
            ImGui::SliderInt("Box thickness", &visuals::esp_visual_settings.bounding_box_settings.box_thickness, 1, 20);
            ImGui::ColorEdit4("Friendly Colour##box", &visuals::esp_visual_settings.bounding_box_settings.friendly_player_box_colour.Value.x, ImGuiColorEditFlags_NoInputs | ImGuiColorEditFlags_None | ImGuiColorEditFlags_AlphaBar);
            ImGui::ColorEdit4("Enemy Colour##box", &visuals::esp_visual_settings.bounding_box_settings.enemy_player_box_colour.Value.x, ImGuiColorEditFlags_NoInputs | ImGuiColorEditFlags_None | ImGuiColorEditFlags_AlphaBar);
            ImGui::Unindent();
        }

        if (ImGui::CollapsingHeader("Snapline settings")) {
            ImGui::Indent();
            ImGui::Checkbox("Show snap lines", &esp::esp_settings.show_lines);
            ImGui::ColorEdit4("Enemy Colour##line", &visuals::esp_visual_settings.line_settings.enemy_player_line_colour.Value.x, ImGuiColorEditFlags_NoInputs | ImGuiColorEditFlags_None | ImGuiColorEditFlags_AlphaBar);
            ImGui::SliderInt("Line thickness", &visuals::esp_visual_settings.line_settings.line_thickness, 1, 20);
            ImGui::Unindent();
        }

        ImGui::EndTable();
    }
}

void DrawOtherMenuNew(void) {
    static ImGuiTableFlags flags = ImGuiTableFlags_SizingFixedFit | ImGuiTableFlags_Resizable | (ImGuiTableFlags_ContextMenuInBody & 0) | (ImGuiTableFlags_NoBordersInBody & 0) | ImGuiTableFlags_BordersOuter;
    if (ImGui::BeginTable("othertable", 1, flags, ImVec2(0, ImGui::GetContentRegionAvail().y))) {
        ImGui::TableSetupColumn("Other", ImGuiTableColumnFlags_WidthStretch);
        ImGui::TableHeadersRow();
        ImGui::TableNextRow();
        ImGui::TableSetColumnIndex(0);
        ImGui::PushItemWidth(item_width);
        if (ImGui::CollapsingHeader("Crosshair settings")) {
            ImGui::Indent();

            if (ImGui::CollapsingHeader("General settings##crosshair")) {
                float marker_preview_size = 100;
                ImGui::Indent();
                ImGui::Checkbox("Enabled##crosshair_enabled", &visuals::crosshair_settings.enabled);
                ImGui::Combo("Style##crosshair_combo", (int*)&visuals::crosshair_settings.marker_style, visuals::marker_labels, IM_ARRAYSIZE(visuals::marker_labels));
                ImGui::ColorEdit4("Colour", &visuals::crosshair_settings.marker_colour.Value.x, ImGuiColorEditFlags_NoInputs | ImGuiColorEditFlags_None | ImGuiColorEditFlags_AlphaBar);
                ImGui::SliderInt("Radius", &visuals::crosshair_settings.marker_size, 1, 10);

                if (visuals::crosshair_settings.marker_style == visuals::MarkerStyle::kCircle || visuals::crosshair_settings.marker_style == visuals::MarkerStyle::kSquare) {
                    ImGui::SliderInt("Thickness", &visuals::crosshair_settings.marker_thickness, 1, 10);
                }

                ImGui::Text("Crosshair preview");

                ImVec2 window_position = ImGui::GetWindowPos();
                ImVec2 window_size = ImGui::GetWindowSize();

                ImDrawList* imgui_draw_list = ImGui::GetWindowDrawList();
                ImVec2 current_cursor_pos = ImGui::GetCursorPos();
                ImVec2 local_cursor_pos = {window_position.x + ImGui::GetCursorPosX(), window_position.y + ImGui::GetCursorPosY()};
                imgui_draw_list->AddRectFilled(local_cursor_pos, {local_cursor_pos.x + 100, local_cursor_pos.y + 100}, ImColor(0, 0, 0, 255), 0, 0);
                ImVec2 center = {local_cursor_pos.x + 100 / 2, local_cursor_pos.y + 100 / 2};

                imgui::visuals::DrawMarker((imgui::visuals::MarkerStyle)visuals::crosshair_settings.marker_style, center, visuals::crosshair_settings.marker_colour, visuals::crosshair_settings.marker_size, visuals::crosshair_settings.marker_thickness);

                current_cursor_pos.y += marker_preview_size;
                ImGui::SetCursorPos(current_cursor_pos);
                ImGui::Spacing();

                ImGui::Unindent();
            }

            ImGui::Unindent();
        }

        /*
        if (ImGui::CollapsingHeader("Other options")) {
            ImGui::Indent();
            //
            ImGui::Unindent();
        }
        */

        ImGui::EndTable();
    }
}

}  // namespace imgui_menu

}  // namespace imgui

namespace ue {

PROCESSEVENT_HOOK_FUNCTION(UEHookMain) {
    DWORD dwWaitResult = WaitForSingleObject(dx11::game_dx_mutex, INFINITE);
    if (ue::frame_is_ready) {
        static bool got_resolution = false;

        ue::frame_is_ready = false;

        static int prev_total_aactor_count = 0;

        UWorld* world = (UWorld*)(*(DWORD64*)(base_address + uworld_offset));

        if (world) {
            if (world_proxy.world != world || world_proxy.world == NULL) {
                world_proxy.world = world;
                aimbot::Reset();  // Clear target_player because its character_ value will be invalid, cant use the object because when it checks to see if its valid it will just crash since garbage value in the pointer
                prev_total_aactor_count = 0;
            }
            game_data::local_player = ((ULocalPlayer*)world_proxy.world->OwningGameInstance->LocalPlayers[0]);
            game_data::local_player_controller = (AMAPlayerController*)game_data::local_player->PlayerController;
        }

        if (!world || !game_data::local_player || !game_data::local_player_controller) {
            ReleaseMutex(dx11::game_dx_mutex);
            return;
        }

        int total_aactor_count = world_proxy.world->PersistentLevel->all_aactors.Num();
        if (total_aactor_count < prev_total_aactor_count) {
            aimbot::Reset();  // Out of warm up
        }

        prev_total_aactor_count = total_aactor_count;

        game_data::GetGameData();

        aimbot::Tick();
        radar::Tick();
        esp::Tick();

        other::Tick();

        // Just get screen resolution every frame, who cares
        if (!got_resolution && game_data::local_player_controller && game_data::my_player.is_valid_) {
            int x, y;
            game_data::local_player_controller->GetViewportSize(&x, &y);
            game_data::screen_size = {x * 1.0f, y * 1.0f};
            game_data::screen_center = {x * 0.5f, y * 0.5f};
            // got_resolution = true;
        }
    }
    ReleaseMutex(dx11::game_dx_mutex);
}

void HookUnrealEngine4(void) {
    base_address = (DWORD64)GetModuleHandle(0);

    UObject::GObjects = reinterpret_cast<CG::TUObjectArray*>(base_address + 0x5283F20);
    FName::GNames = reinterpret_cast<CG::GNAME_TYPE*>(base_address + 0x5266340);

    //InitSdk();

    world_proxy.world = (CG::UWorld*)(*(DWORD64*)(base_address + uworld_offset));
    game_data::local_player = ((ULocalPlayer*)world_proxy.world->OwningGameInstance->LocalPlayers[0]);
    game_data::local_player_controller = (AMAPlayerController*)game_data::local_player->PlayerController;

    DWORD64 processevent_address = base_address + processevent_offset;
    hooks::processevent::original_processevent = (hooks::processevent::_ProcessEvent)processevent_address;

    UFunction* ufunction = UObject::FindObject<UFunction>(ue::ufunction_to_hook);
    hooks::processevent::AddProcessEventHook(ufunction, (hooks::processevent::_ProcessEvent)UEHookMain);

    DetourTransactionBegin();
    DetourUpdateThread(GetCurrentThread());
    DetourAttach(&(PVOID&)hooks::processevent::original_processevent, hooks::processevent::ProcessEvent);
    DetourTransactionCommit();
}

void DrawImGuiInUE4(void) {
    // No unreal engine hooking, just do everything through present :brolmfao:

    using namespace imgui;

    if (aimbot::aimbot_settings.enabled) {
        ImGui::SetNextWindowPos({0, 0});
        ImGui::SetNextWindowSize({game_data::screen_size.X, game_data::screen_size.Y});
        ImGui::Begin("aim_assist", NULL, ImGuiWindowFlags_NoTitleBar | ImGuiWindowFlags_NoResize | ImGuiWindowFlags_NoBackground | ImGuiWindowFlags_NoMove | ImGuiWindowFlags_NoScrollbar | ImGuiWindowFlags_NoScrollWithMouse | ImGuiWindowFlags_NoBringToFrontOnFocus);

        int marker_size = visuals::aimbot_visual_settings.marker_size;

        vector<aimbot::AimbotInformation>& aimbot_informations = aimbot::aimbot_information;

        for (vector<aimbot::AimbotInformation>::iterator i = aimbot_informations.begin(); i != aimbot_informations.end(); i++) {
            ImVec2 v(i->projection_.X, i->projection_.Y);

            if (visuals::aimbot_visual_settings.scale_by_distance) {
                marker_size = (visuals::aimbot_visual_settings.marker_size - visuals::aimbot_visual_settings.minimum_marker_size) * exp(-i->distance_ / visuals::aimbot_visual_settings.distance_for_scaling) + visuals::aimbot_visual_settings.minimum_marker_size;
            }

            float box_size_height = i->height;
            float box_size_width = box_size_height * esp::esp_settings.width_to_height_ratio;

            imgui::visuals::DrawMarker((imgui::visuals::MarkerStyle)visuals::aimbot_visual_settings.marker_style, v, visuals::aimbot_visual_settings.marker_colour, marker_size, visuals::aimbot_visual_settings.marker_thickness);
        }

        ImGui::End();
    }

    if (esp::esp_settings.enabled) {
        ImGui::SetNextWindowPos({0, 0});
        ImGui::SetNextWindowSize({game_data::screen_size.X, game_data::screen_size.Y});
        ImGui::Begin("esp", NULL, ImGuiWindowFlags_NoTitleBar | ImGuiWindowFlags_NoResize | ImGuiWindowFlags_NoBackground | ImGuiWindowFlags_NoMove | ImGuiWindowFlags_NoScrollbar | ImGuiWindowFlags_NoScrollWithMouse | ImGuiWindowFlags_NoBringToFrontOnFocus);
        ImDrawList* imgui_draw_list = ImGui::GetWindowDrawList();

        ImColor friendly_box_colour = visuals::esp_visual_settings.bounding_box_settings.friendly_player_box_colour;
        ImColor enemy_box_colour = visuals::esp_visual_settings.bounding_box_settings.enemy_player_box_colour;
        int box_thickness = visuals::esp_visual_settings.bounding_box_settings.box_thickness;

        static ImColor colour = enemy_box_colour;
        for (vector<esp::ESPInformation>::iterator esp_information = esp::esp_information.begin(); esp_information != esp::esp_information.end(); esp_information++) {
            colour = (esp_information->is_friendly) ? friendly_box_colour : enemy_box_colour;
            ImVec2 projection(esp_information->projection.X, esp_information->projection.Y);
            float box_size_height = esp_information->height;
            float box_size_width = box_size_height * esp::esp_settings.width_to_height_ratio;

            imgui_draw_list->AddRect({projection.x - box_size_width, projection.y - box_size_height}, {projection.x + box_size_width, projection.y + box_size_height}, colour, 0, 0, box_thickness);

            if (esp::esp_settings.show_lines && !esp_information->is_friendly) {
                imgui_draw_list->AddLine({game_data::screen_size.X / 2, game_data::screen_size.Y}, {projection.x, projection.y + box_size_height}, visuals::esp_visual_settings.line_settings.enemy_player_line_colour, visuals::esp_visual_settings.line_settings.line_thickness);
            }
        }

        ImGui::End();
    }

    if (visuals::crosshair_settings.enabled) {
        static ImVec2 window_size(30, 30);
        ImGui::SetNextWindowPos({game_data::screen_center.X - window_size.x / 2, game_data::screen_center.Y - window_size.y / 2});
        ImGui::SetNextWindowSize(window_size);
        ImGui::Begin("crosshair", NULL, ImGuiWindowFlags_NoTitleBar | ImGuiWindowFlags_NoResize | ImGuiWindowFlags_NoBackground | ImGuiWindowFlags_NoMove | ImGuiWindowFlags_NoScrollbar | ImGuiWindowFlags_NoScrollWithMouse);

        imgui::visuals::DrawMarker((imgui::visuals::MarkerStyle)visuals::crosshair_settings.marker_style, {game_data::screen_center.X, game_data::screen_center.Y}, visuals::crosshair_settings.marker_colour, visuals::crosshair_settings.marker_size, visuals::crosshair_settings.marker_thickness);

        ImGui::End();
    }

    if (radar::radar_settings.enabled) {
        ImGui::SetNextWindowPos(visuals::radar_visual_settings.window_location, ImGuiCond_FirstUseEver);
        ImGui::SetNextWindowSize({(float)visuals::radar_visual_settings.window_size, (float)visuals::radar_visual_settings.window_size});

        if (dx11::imgui_show_menu) {
            ImGui::PushStyleColor(ImGuiCol_WindowBg, ImColor(0.0f, 0.0f, 0.0f, 0.0f).Value);
            ImGui::Begin("Radar##radar", NULL, ImGuiWindowFlags_NoScrollbar | ImGuiWindowFlags_NoScrollWithMouse /*| ImGuiWindowFlags_NoBringToFrontOnFocus*/);
        } else {
            ImGui::Begin("Radar##radar", NULL, ImGuiWindowFlags_NoBackground | ImGuiWindowFlags_NoTitleBar | ImGuiWindowFlags_NoResize | ImGuiWindowFlags_NoScrollbar | ImGuiWindowFlags_NoScrollWithMouse /*| ImGuiWindowFlags_NoBringToFrontOnFocus*/);
        }

        visuals::radar_visual_settings.window_size = FMath::Max(ImGui::GetWindowSize().x, ImGui::GetWindowSize().y);
        float border = visuals::radar_visual_settings.border;

        ImVec2 window_position = ImGui::GetWindowPos();
        ImVec2 window_size = ImGui::GetWindowSize();
        ImVec2 center(window_position.x + window_size.x / 2, window_position.y + window_size.y / 2);

        visuals::radar_visual_settings.window_location = window_position;
        int axes_thickness = visuals::radar_visual_settings.axes_thickness;

        ImDrawList* imgui_draw_list = ImGui::GetWindowDrawList();
        imgui_draw_list->AddCircleFilled(center, window_size.x / 2 - border, visuals::radar_visual_settings.window_background_colour, 0);
        imgui_draw_list->AddCircle(center, window_size.x / 2 - border, visuals::radar_visual_settings.window_background_colour, 0, axes_thickness);

        if (visuals::radar_visual_settings.draw_axes) {
            imgui_draw_list->AddLine({window_position.x + border, window_position.y + window_size.y / 2}, {window_position.x + window_size.x - border, window_position.y + window_size.y / 2}, ImColor(65, 65, 65, 255), axes_thickness);
            imgui_draw_list->AddLine({window_position.x + window_size.x / 2, window_position.y + border}, {window_position.x + window_size.x / 2, window_position.y + window_size.y - border}, ImColor(65, 65, 65, 255), axes_thickness);
            imgui_draw_list->AddCircleFilled(center, axes_thickness + 1, ImColor(65, 65, 65, 125));
        }

        ImColor friendly_marker_colour = visuals::radar_visual_settings.friendly_marker_colour;
        ImColor enemy_marker_colour = visuals::radar_visual_settings.enemy_marker_colour;
        static ImColor player_marker_colour = enemy_marker_colour;
        for (vector<radar::RadarInformation>::iterator radar_information = radar::player_locations.begin(); radar_information != radar::player_locations.end(); radar_information++) {
            float theta = radar_information->theta;
            float y = radar_information->r * cos(theta) * visuals::radar_visual_settings.zoom_ * visuals::radar_visual_settings.zoom;
            float x = radar_information->r * sin(theta) * visuals::radar_visual_settings.zoom_ * visuals::radar_visual_settings.zoom;

            if (!radar_information->right)
                x = -abs(x);

            player_marker_colour = (radar_information->is_friendly) ? friendly_marker_colour : enemy_marker_colour;

            imgui::visuals::DrawMarker((imgui::visuals::MarkerStyle)visuals::radar_visual_settings.marker_style, {center.x + x, center.y - y}, player_marker_colour, visuals::radar_visual_settings.marker_size, visuals::radar_visual_settings.marker_thickness);
        }

        if (radar::radar_settings.show_flags) {
            ImColor friendly_flag_marker_colour = visuals::radar_visual_settings.friendly_flag_marker_colour;
            ImColor enemy_flag_marker_colour = visuals::radar_visual_settings.enemy_flag_marker_colour;

            for (vector<radar::RadarInformation>::iterator radar_information = radar::flag_locations.begin(); radar_information != radar::flag_locations.end(); radar_information++) {
                float theta = radar_information->theta;
                float y = radar_information->r * cos(theta) * visuals::radar_visual_settings.zoom_ * visuals::radar_visual_settings.zoom;
                float x = radar_information->r * sin(theta) * visuals::radar_visual_settings.zoom_ * visuals::radar_visual_settings.zoom;

                if (!radar_information->right)
                    x = -abs(x);

                ImColor flag_colour = (radar_information->is_friendly) ? friendly_flag_marker_colour : enemy_flag_marker_colour;

                imgui::visuals::DrawMarker((imgui::visuals::MarkerStyle)visuals::radar_visual_settings.marker_style, {center.x + x, center.y - y}, flag_colour, visuals::radar_visual_settings.marker_size, visuals::radar_visual_settings.marker_thickness);
            }
        }

        if (dx11::imgui_show_menu) {
            ImGui::PopStyleColor();
        }
        ImGui::End();
    }

    if (dx11::imgui_show_menu) {
        static bool unused_boolean = true;

        ImGuiStyle& style = ImGui::GetStyle();
        ImVec4* colors = style.Colors;

        ImGui::SetNextWindowPos({100, 100}, ImGuiCond_FirstUseEver);

        ImGui::SetNextWindowSize({800, 500}, ImGuiCond_FirstUseEver);

        static ImVec2 padding = ImGui::GetStyle().FramePadding;
        ImGui::PushStyleVar(ImGuiStyleVar_FramePadding, ImVec2(padding.x, 8));
        ImGui::Begin("descension v1.0 | MA:CE 1.9.1.12285", NULL, ImGuiWindowFlags_AlwaysAutoResize & 0);
        ImGui::PopStyleVar();

        ImVec2 window_position = ImGui::GetWindowPos();
        ImVec2 window_size = ImGui::GetWindowSize();
        ImVec2 center(window_position.x + window_size.x / 2, window_position.y + window_size.y / 2);

        ImGuiWindowFlags window_flags = ImGuiWindowFlags_HorizontalScrollbar & 0;

        static float left_menu_width = 125;
        static float child_height_offset = 10;

        ImGui::PushStyleColor(ImGuiCol_::ImGuiCol_ChildBg, ImColor(0, 0, 0, 0).Value);
        ImGui::BeginChild("MenuL", ImVec2(left_menu_width, ImGui::GetContentRegionAvail().y - child_height_offset), false, window_flags);

        for (int i = 0; i < imgui_menu::buttons_num; i++) {
            ImVec2 size = ImVec2(left_menu_width * 0.75, 0);
            bool b_selected = i == imgui_menu::selected_index;
            if (b_selected) {
                size.x = left_menu_width * 0.95;
                ImGui::PushStyleColor(ImGuiCol_::ImGuiCol_Button, ImGui::GetStyle().Colors[ImGuiCol_::ImGuiCol_ButtonHovered]);
                ImGui::PushStyleVar(ImGuiStyleVar_ButtonTextAlign, ImVec2(1, 0));
            }

            if (*imgui_menu::button_text[i] != '-') {
                if (ImGui::Button(imgui_menu::button_text[i], size)) {
                    imgui_menu::selected_index = i;
                }
            }

            if (b_selected) {
                ImGui::PopStyleColor();
                ImGui::PopStyleVar();
            }
        }

        ImGui::EndChild();
        ImGui::SameLine();

        ImGui::BeginChild("MenuR", ImVec2(ImGui::GetContentRegionAvailWidth(), ImGui::GetContentRegionAvail().y - child_height_offset), false, window_flags);
        ImGui::PopStyleColor();

        switch (imgui_menu::selected_index) {
            case imgui_menu::LeftMenuButtons::kInformation:
                imgui_menu::DrawInformationMenuNew();
                break;
            case imgui_menu::LeftMenuButtons::kAimTracker:
                // imgui_menu::DrawAimTrackerMenu();
                break;
            case imgui_menu::LeftMenuButtons::kAimAssist:
                imgui_menu::DrawAimAssistMenuNew();
                break;
            case imgui_menu::LeftMenuButtons::kRadar:
                imgui_menu::DrawRadarMenuNew();
                break;
            case imgui_menu::LeftMenuButtons::kESP:
                imgui_menu::DrawESPMenuNew();
                break;
            case imgui_menu::LeftMenuButtons::kOther:
                imgui_menu::DrawOtherMenuNew();
                break;
        }

        ImGui::EndChild();
        ImGui::End();
    }

}  // namespace ue
}  // namespace ue

namespace game_data {

void GetWeapon(void) {
    if (!my_player.is_valid_) {
        return;
    }

    AMAWeapon* weapon = my_player.character_->Weapon;
    if (weapon) {
        if (weapon->IsA(ABP_RingLauncher_C::StaticClass())) {
            my_player.weapon_ = Weapon::disk;
            my_player.weapon_type_ = WeaponType::kProjectileLinear;
        } else if (weapon->IsA(ABP_Chaingun_C::StaticClass())) {
            my_player.weapon_ = Weapon::cg;
            my_player.weapon_type_ = WeaponType::kProjectileLinear;
        } else if (weapon->IsA(ABP_GrenadeLauncher_C::StaticClass())) {
            my_player.weapon_ = Weapon::gl;
            my_player.weapon_type_ = WeaponType::kProjectileArching;
        } else if (weapon->IsA(ABP_PlasmaGun_C::StaticClass())) {
            my_player.weapon_ = Weapon::plasma;
            my_player.weapon_type_ = WeaponType::kProjectileLinear;
        } else if (weapon->IsA(ABP_Blaster_C::StaticClass())) {
            my_player.weapon_ = Weapon::blaster;
            my_player.weapon_type_ = WeaponType::kProjectileLinear;
        } else {
            my_player.weapon_ == Weapon::unknown;
            my_player.weapon_type_ = WeaponType::kHitscan;
        }
    } else {
        my_player.weapon_ == Weapon::none;
        my_player.weapon_type_ = WeaponType::kHitscan;
    }
}

void GetGameData(void) {
    game_data.Reset();
    GetPlayers();
    GetWeapon();
}
}  // namespace game_data

namespace hooks {
namespace processevent {
int ProcessEvent(UObject* object, UFunction* function, void* params) {
    if (processevent_hooks.find(function) != processevent_hooks.end()) {
        vector<_ProcessEvent>& hooks = processevent_hooks[function];
        for (vector<_ProcessEvent>::iterator hook = hooks.begin(); hook != hooks.end(); hook++) {
            (*hook)(object, function, params);
        }
    }
    return original_processevent(object, function, params);
}
}  // namespace processevent
}  // namespace hooks