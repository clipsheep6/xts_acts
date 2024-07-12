import { getModuleDescription as getDescFromLib2 } from 'library2'
import { getModuleDescription as getDescFromLib3 } from 'library3'

export let multiHsp;
let a = getDescFromLib2();
let b = getDescFromLib3();

if (a == 'This is library2' && b == 'This is library3') {
    multiHsp = 'success';
    console.log('ModuleTest multi hsp import test success');
}