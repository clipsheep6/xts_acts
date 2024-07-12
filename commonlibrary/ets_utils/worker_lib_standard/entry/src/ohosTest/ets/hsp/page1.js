import { add } from 'library'
export let normalImport;
let a = add(2, 3);
if (a == 5) {
    normalImport = 'success';
    console.log('ModuleTest hsp import library test success');
}