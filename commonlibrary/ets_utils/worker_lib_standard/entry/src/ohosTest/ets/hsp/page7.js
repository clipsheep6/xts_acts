import { nativeAdd } from 'library2';
export let nativeIsolationso;
let a = nativeAdd(3, 5);
if(a == 8){
    nativeIsolationso = 'success';
    console.log('ModuleTest native so Isolation test success');
}