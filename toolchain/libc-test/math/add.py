import os


end = '#endif'
for root,dirs,files in os.walk('./crlibm'):
    for i in files:
        x = i.upper().replace('.', '_')
        first = f'#ifndef TOOLCHAIN_LIBC_TEST_MATH_CRLIBM_{x}'
        second = f'#define TOOLCHAIN_LIBC_TEST_MATH_CRLIBM_{x}'
        path = f'{root}/{i}'
        f = open(path,'r')
        text = f.read()
        f.close()
        new_text  = f'{first}\n{second}\n\n{text}\n{end}'

        f = open(path,'w')
        f.write(new_text)
        f.close()