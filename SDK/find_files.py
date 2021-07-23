from pathlib import Path
from shutil import copyfile

files = Path.cwd().glob('SDK/*.*')

files_ = [file for file in files]

#static auto ptr = UObject::FindClass("AnimBlueprintGeneratedClass ABP_Chaingun_New.ABP_Chaingun_New_C");
#static auto fn = UObject::FindObject<UFunction>("Function ABP_Chaingun_New.ABP_Chaingun_New_C.AnimGraph");

w = 'VoiceSetInfo_'[0:]
w2 = 'voices'

counter = 0
for file in files_:
    if file.name.endswith('.py'):
        continue
    if file.name.startswith(w) and file.name.endswith('classes.h'):
        print(w2 + '_skins_names.push_back("' + file.name.replace(w, '').replace('classes.h', '').replace('_', '')+'");')
        counter = counter + 1
    
counter = 0
for file in files_:
    if file.name.endswith('.py'):
        continue
    if file.name.startswith(w) and file.name.endswith('classes.h'):
        print(w2 + '[' + str(counter) + '] = ' + 'A' + file.name.replace('_classes.h', '') + '_C::StaticClass();')
        counter = counter + 1
input('')