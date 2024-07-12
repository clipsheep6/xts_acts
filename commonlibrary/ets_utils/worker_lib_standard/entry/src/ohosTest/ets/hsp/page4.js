import { getDescFromLibrary2 } from 'library'

export let multiLevelHsp;
let a = getDescFromLibrary2();
if (a == 'This is library2') {
    multiLevelHsp = 'success';
    console.log('MoudleTest multi-level hsp import test success');
}