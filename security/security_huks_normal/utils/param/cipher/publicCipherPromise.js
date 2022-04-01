import { expect } from 'deccjsunit/index';
import { uint8ArrayToString } from '../publicFunc.js';
import huks from '@ohos.security.huks';

let updateResult = new Array();
let encryptedData;
var handle = {};
var handle1;
var handle2;

async function publicGenerateKeyFunc(srcKeyAlies, genHuksOptionsNONECBC) {
  console.log(
    `test GenerateHuksOptions: ${JSON.stringify(genHuksOptionsNONECBC)}`
  );
  await huks
    .generateKey(srcKeyAlies, genHuksOptionsNONECBC)
    .then((data) => {
      console.log(`test generateKey data: ${JSON.stringify(data)}`);
      expect(data.errorCode == 0).assertTrue();
    })
    .catch((err) => {
      console.log('test generateKey err information: ' + JSON.stringify(err));
      expect(null).assertFail();
    });
}

async function publicInitFunc(srcKeyAlies, HuksOptions) {
  console.log(`test init HuksOptions: ${JSON.stringify(HuksOptions)}`);
  await huks
    .init(srcKeyAlies, HuksOptions)
    .then((data) => {
      console.log(`test init data: ${JSON.stringify(data)}`);
      handle1 = data.handle1;
      handle2 = data.handle2;
      handle = {
        handle1: handle1,
        handle2: handle2,
      };
      expect(data.errorCode == 0).assertTrue();
    })
    .catch((err) => {
      console.log('test init err information: ' + JSON.stringify(err));
      expect(null).assertFail();
    });
}

async function publicUpdateFunc(HuksOptions, thirdInderfaceName, isEncrypt) {
  console.log(
    `test update before handle: ${JSON.stringify(
      handle
    )} HuksOptions: ${JSON.stringify(HuksOptions)}`
  );
  let dateSize = 64;
  let tempHuksOptionsInData = HuksOptions.inData;
  let inDataArray = HuksOptions.inData;
  console.log(
    'test update finish HuksOptions inData: ' + Array.from(inDataArray).length
  );
  if (Array.from(inDataArray).length < dateSize) {
    await update(handle, HuksOptions);
    HuksOptions.inData = new Uint8Array(new Array());
    await publicFinishAbortFunc(
      HuksOptions,
      thirdInderfaceName,
      isEncrypt,
      0,
      tempHuksOptionsInData.length
    );
  } else {
    let count = Math.floor(Array.from(inDataArray).length / dateSize);
    let remainder = Array.from(inDataArray).length % dateSize;
    console.log('test count ' + count + 'remainder ' + remainder);
    for (let i = 0; i < count; i++) {
      HuksOptions.inData = new Uint8Array(
        Array.from(tempHuksOptionsInData).slice(
          dateSize * i,
          dateSize * (i + 1)
        )
      );
      console.log(
        'test ' +
          uint8ArrayToString(
            new Uint8Array(
              Array.from(tempHuksOptionsInData).slice(
                dateSize * i,
                dateSize * (i + 1)
              )
            )
          )
      );
      await update(handle, HuksOptions);
    }
    HuksOptions.inData = tempHuksOptionsInData;
    if (remainder !== 0) {
      HuksOptions.inData = new Uint8Array(
        Array.from(tempHuksOptionsInData).slice(
          dateSize * count,
          uint8ArrayToString(inDataArray).length
        )
      );
      console.log(
        'test ' +
          uint8ArrayToString(
            new Uint8Array(
              Array.from(tempHuksOptionsInData).slice(
                dateSize * count,
                uint8ArrayToString(inDataArray).length
              )
            )
          )
      );
    } else {
      HuksOptions.inData = new Uint8Array(new Array());
    }
    await publicFinishAbortFunc(
      HuksOptions,
      thirdInderfaceName,
      isEncrypt,
      remainder,
      tempHuksOptionsInData.length
    );
  }
}

async function update(handle, HuksOptions) {
  console.log(`test update data ${JSON.stringify(HuksOptions)}`);
  console.log(`test update data ${JSON.stringify(HuksOptions.inData.length)}`);
  await huks
    .update(handle, HuksOptions)
    .then(async (data) => {
      console.log(`test update data ${JSON.stringify(data)}`);
      if (updateResult.length !== 0) {
        console.log(`test update outDatalength ${updateResult.length}`);
        updateResult = updateResult.concat(Array.from(data.outData));
        console.log(`test update outDatalength ${updateResult.length}`);
      } else {
        console.log(`test update outDatalength ${updateResult.length}`);
        updateResult = Array.from(data.outData);
        console.log(`test update outDatalength ${updateResult.length}`);
      }
      expect(data.errorCode == 0).assertTrue();
    })
    .catch((err) => {
      console.log('test update err information: ' + err);
      expect(null).assertFail();
    });
}

async function publicFinishAbortFunc(
  HuksOptions,
  thirdInderfaceName,
  isEncrypt,
  remainder,
  dataLength
) {
  if (thirdInderfaceName == 'finish') {
    HuksOptions.outData = new Uint8Array(new Array(encryptedData.length * 2));
    console.log(`test remainder ${remainder}`);
    await finish(HuksOptions, isEncrypt);
  } else if (thirdInderfaceName == 'abort') {
    HuksOptions.outData = new Uint8Array(new Array(encryptedData.length * 2));
    await abort(HuksOptions);
  }
}

async function finish(HuksOptions, isEncrypt) {
  await huks
    .finish(handle, HuksOptions)
    .then((data) => {
      console.log(`test finish data: ${JSON.stringify(data)}`);
      let finishData;
      if (encryptedData.length > 64) {
        finishData = uint8ArrayToString(
          updateResult.concat(Array.from(data.outData))
        );
        updateResult = updateResult.concat(Array.from(data.outData));
      } else {
        finishData = uint8ArrayToString(updateResult);
      }
      if (isEncrypt) {
        if (finishData === uint8ArrayToString(encryptedData)) {
          console.log(
            `test finish Encrypt fail ${uint8ArrayToString(encryptedData)}`
          );
          console.log(`test finish Encrypt fail ${finishData}`);
          expect(null).assertFail();
        } else {
          console.log(
            `test finish Encrypt success ${uint8ArrayToString(encryptedData)}`
          );
          console.log(`test finish Encrypt success ${finishData}`);
          expect(data.errorCode == 0).assertTrue();
        }
      }
      if (!isEncrypt) {
        if (finishData === uint8ArrayToString(encryptedData)) {
          console.log(
            `test finish Decrypt success ${uint8ArrayToString(encryptedData)}`
          );
          console.log(`test finish Decrypt success ${finishData}`);
          expect(data.errorCode == 0).assertTrue();
        } else {
          console.log(
            `test finish Decrypt fail ${uint8ArrayToString(encryptedData)}`
          );
          console.log(`test finish Decrypt fail ${finishData}`);
          expect(null).assertFail();
        }
      }
    })
    .catch((err) => {
      console.log('test finish err information: ' + JSON.stringify(err));
      expect(null).assertFail();
    });
}

async function abort(HuksOptions) {
  await huks
    .abort(handle, HuksOptions)
    .then((data) => {
      console.log(`test abort data: ${JSON.stringify(data)}`);
      expect(data.errorCode == 0).assertTrue();
    })
    .catch((err) => {
      console.log('test abort err information: ' + JSON.stringify(err));
      expect(null).assertFail();
    });
}

async function publicDeleteKeyFunc(srcKeyAlies, genHuksOptionsNONECBC) {
  await huks
    .deleteKey(srcKeyAlies, genHuksOptionsNONECBC)
    .then((data) => {
      console.log(`test deleteKey data: ${JSON.stringify(data)}`);
      expect(data.errorCode == 0).assertTrue();
    })
    .catch((err) => {
      console.log('test deleteKey err information: ' + JSON.stringify(err));
      expect(null).assertFail();
    });
}

async function publicCipherFunc(
  srcKeyAlies,
  genHuksOptionsNONECBC,
  HuksOptions,
  thirdInderfaceName,
  isEncrypt
) {
  try {
    updateResult = new Array();
    if (isEncrypt) {
      await publicGenerateKeyFunc(srcKeyAlies, genHuksOptionsNONECBC);
      encryptedData = HuksOptions.inData;
    }
    await publicInitFunc(srcKeyAlies, HuksOptions);
    await publicUpdateFunc(HuksOptions, thirdInderfaceName, isEncrypt);
    if (!isEncrypt || (isEncrypt && thirdInderfaceName == 'abort')) {
      await publicDeleteKeyFunc(srcKeyAlies, genHuksOptionsNONECBC);
    }
    return updateResult;
  } catch (e) {
    expect(null).assertFail();
  }
}

export { publicCipherFunc };
