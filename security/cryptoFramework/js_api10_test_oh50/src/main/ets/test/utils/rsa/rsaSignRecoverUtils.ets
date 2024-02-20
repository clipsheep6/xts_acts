import cryptoFramework from '@ohos.security.cryptoFramework';

function compare_DataBlob(a: cryptoFramework.DataBlob, b: cryptoFramework.DataBlob): boolean {
  if (a.data.length != b.data.length) {
    return false;
  }
  for (let i = 0; i < a.data.length; i++) {
    if (a.data[i] !== b.data[i]) {
      return false;
    }
  }
  return true;
}

async function signPromise(signAlg: string, priKey: cryptoFramework.PriKey, rawData: cryptoFramework.DataBlob) {
  try {
    let signer: cryptoFramework.Sign = cryptoFramework.createSign(signAlg);
    await signer.init(priKey);
    let signData: cryptoFramework.DataBlob = await signer.sign(rawData);

    return signData;
  } catch (error) {
    console.error('sync error, ' + error.code + " errorMsg " + error.message);
    throw error as Error;
  }
}

async function signPromiseWithUpdate(signAlg: string, priKey: cryptoFramework.PriKey, rawData: cryptoFramework.DataBlob) {
  try {
    let signer: cryptoFramework.Sign = cryptoFramework.createSign(signAlg);
    await signer.init(priKey);
    await signer.update(rawData);
    let signData: cryptoFramework.DataBlob = await signer.sign(rawData);
    return signData;
  } catch (error) {
    console.error('sync error, ' + error.code + " errorMsg " + error.message);
    throw error as Error;
  }
}

async function verifyRSARecover(verifyAlg: string, pubKey: cryptoFramework.PubKey, signData: cryptoFramework.DataBlob) {
  try {
    let verifier: cryptoFramework.Verify = cryptoFramework.createVerify(verifyAlg);
    await verifier.init(pubKey);
    let rawSignData: cryptoFramework.DataBlob|null = await verifier.verifyRecover(signData);

    return rawSignData;
  } catch (error) {
    console.error('sync error, ' + error.code + " errorMsg " + error.message);
    throw error as Error;
  }
}

async function verifyRSARecoverWithUpdate(verifyAlg: string, pubKey: cryptoFramework.PubKey, signData: cryptoFramework.DataBlob) {
  try {
    let verifier: cryptoFramework.Verify = cryptoFramework.createVerify(verifyAlg);
    await verifier.init(pubKey);
    await verifier.update(signData);
    let rawSignData: cryptoFramework.DataBlob|null = await verifier.verifyRecover(signData);

    return rawSignData;
  } catch (error) {
    console.error('sync error, ' + error.code + " errorMsg " + error.message);
    throw error as Error;
  }
}

async function verifyRSARecoverSync(verifyAlg: string, pubKey: cryptoFramework.PubKey, signData: cryptoFramework.DataBlob) {
  try {
    let verifier: cryptoFramework.Verify = cryptoFramework.createVerify(verifyAlg);
    await verifier.init(pubKey);
    let rawSignData: cryptoFramework.DataBlob|null = verifier.verifyRecoverSync(signData);

    return rawSignData;
  } catch (error) {
    console.error('sync error, ' + error.code + " errorMsg " + error.message);
    throw error as Error;
  }
}

async function doMd(mdName: string, rawData: cryptoFramework.DataBlob) {
  try {
    let md: cryptoFramework.Md = cryptoFramework.createMd(mdName);
    let mdResult: cryptoFramework.DataBlob = await md.digest();
    return mdResult;
  } catch (error) {
    console.error('sync error, ' + error.code + " errorMsg " + error.message);
    throw error as Error;
  }
}

async function createData(dataLen: number): Promise<cryptoFramework.DataBlob>{
  try {
    let rand: cryptoFramework.Random = cryptoFramework.createRandom();
    let rawData: cryptoFramework.DataBlob = await rand.generateRandom(dataLen);
    rawData.data[0] = 0;

    return rawData;
  } catch (error) {
    console.error('sync error, ' + error.code + " errorMsg " + error.message);
    throw error as Error;
  }
}

async function createSignRecover(algName: string, paddingName: string, mdName: string,
                                 dataLen: number, isOnlySign: boolean, isSync: boolean, isPadding: boolean) {
  let rawData: cryptoFramework.DataBlob;
  let keyPair: cryptoFramework.KeyPair;
  try {
    rawData = await createData(dataLen);
    let generator: cryptoFramework.AsyKeyGenerator = cryptoFramework.createAsyKeyGenerator(algName);
    keyPair = await generator.generateKeyPair();
  } catch (error) {
    console.error('sync error, ' + error.code + " errorMsg " + error.message);
    throw error as Error;
  }
  try {
    let signAlg: string = "";
    if (isPadding) {
      signAlg = algName + "|" + paddingName + "|" + mdName;
    } else {
      signAlg = algName + "|" + mdName;
    }

    let algSignType: string = signAlg;
    let algVerifyType: string = signAlg + "|Recover";
    let ret: boolean = false;
    let verifyData: cryptoFramework.DataBlob|null;
    if (isOnlySign) {
      algSignType = algSignType + "|OnlySign";
    }
    let signData: cryptoFramework.DataBlob = await signPromise(algSignType, keyPair.priKey, rawData);
    if (isSync) {
      verifyData = await verifyRSARecoverSync(algVerifyType, keyPair.pubKey, signData);
    } else {
      verifyData = await verifyRSARecover(algVerifyType, keyPair.pubKey, signData);
    }

    if (verifyData != null) {
      ret = compare_DataBlob(rawData, verifyData);
      return ret;
    } else {
      return ret;
    }
  } catch (error) {
    console.error('sync error, ' + error.code + " errorMsg " + error.message);
    throw error as Error;
  }
}

export {
  compare_DataBlob,
  signPromise,
  signPromiseWithUpdate,
  verifyRSARecover,
  verifyRSARecoverWithUpdate,
  doMd,
  createData,
  createSignRecover,
}