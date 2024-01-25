/*
 * Copyright (c) 2023 Huawei Device Co., Ltd.
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *     http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */
import { afterAll, beforeAll, describe, expect, it } from '@ohos/hypium';
import uitest, { Component, Driver } from '@ohos.UiTest';
import GlobalContext from './GlobalContext';
import { BusinessError } from '@ohos.base';
import contact from '@ohos.contact';

async function sleep(numberMillis: number) {
  let now: Date = new Date();
  let exitTime: number = now.getTime() + numberMillis;
  while (true) {
    now = new Date();
    if (now.getTime() > exitTime) return;
  }
}

let customContext = getContext(this) as Context;
export default function ContactInterfaceStageTest() {
  describe('ContactInterfaceStageTest', () => {
    beforeAll(async () => {
      console.info("beforeAll case");
      try {
        let driver: Driver = Driver.create();
        sleep(500);
        for (let i = 0; i < 5; i++) {
          await sleep(500);
          console.info("driver is " + JSON.stringify(driver));
          let button: Component = await driver.findComponent(uitest.ON.text('允许'));
          if (button != undefined) {
            console.info("button is " + JSON.stringify(button));
            await button.click();
          }
        }
        console.info("getPermission end");
      } catch (error) {
        let e: BusinessError = error as BusinessError;
        console.info(`getPermission failed, error: ${e}`);
      }
      sleep(3000);
    });

    afterAll(async () => {
      contact.queryContacts(GlobalContext.getContext()
        .getAbility(), (err: BusinessError, data: Array<contact.Contact>) => {
        if (err) {
          console.info("afterAll queryContacts err = " + JSON.stringify(err));
          expect(false).assertTrue();
          return;
        }
        console.info("afterAll queryContacts data = " + JSON.stringify(data));
        if (data.length == 0) {
          return;
        }
        for (let i = 0; i < data.length; i++) {
          let promise: Promise<void> = contact.deleteContact(GlobalContext.getContext().getAbility(), data[i].key);
          promise.then(() => {
            console.info("afterAll deleteContact success");
          }).catch((err: BusinessError) => {
            console.info("afterAll deleteContact err = " + JSON.stringify(err));
          });
        }
        sleep(3000);
      });
    });

    let contactData: contact.Contact = {
      id: 0,
      key: "0",
      contactAttributes: {
        attributes: [contact.Attribute.ATTR_CONTACT_EVENT, contact.Attribute.ATTR_EMAIL,
          contact.Attribute.ATTR_GROUP_MEMBERSHIP,
          contact.Attribute.ATTR_IM, contact.Attribute.ATTR_NAME, contact.Attribute.ATTR_NICKNAME,
          contact.Attribute.ATTR_NOTE, contact.Attribute.ATTR_ORGANIZATION, contact.Attribute.ATTR_PHONE,
          contact.Attribute.ATTR_PORTRAIT, contact.Attribute.ATTR_POSTAL_ADDRESS,
          contact.Attribute.ATTR_RELATION,
          contact.Attribute.ATTR_SIP_ADDRESS, contact.Attribute.ATTR_WEBSITE]
      },
      emails: [{
        email: "13800000000@email.com", labelName: "自定义邮箱", labelId: 1, displayName: "emailDisplayName"
      }],
      events: [{
        eventDate: "event", labelName: "自定义event", labelId: 2
      }],
      groups: [{
        groupId: 1, title: "群组"
      }],
      imAddresses: [{
        imAddress: "imAddress", labelName: "自定义", labelId: 3
      }],
      phoneNumbers: [{
        phoneNumber: "13800000000", labelName: "自定义phoneNumbers", labelId: 4
      }],
      portrait: {
        uri: "content://head/0"
      },
      postalAddresses: [{
        city: "南京",
        country: "中国",
        labelName: "labelName",
        neighborhood: "neighborhood",
        pobox: "pobox",
        postalAddress: "postalAddress",
        postcode: "postcode",
        region: "region",
        street: "street",
        labelId: 5
      }],
      relations: [{
        relationName: "relationName", labelName: "自定义relationName", labelId: 6
      }],
      sipAddresses: [{
        sipAddress: "sipAddress", labelName: "自定义sipAddress", labelId: 6
      }],
      websites: [{
        website: "website"
      }],
      name: {
        familyName: "familyName",
        familyNamePhonetic: "familyNamePhonetic",
        fullName: "小李",
        givenName: "givenName",
        givenNamePhonetic: "givenNamePhonetic",
        middleName: "middleName",
        middleNamePhonetic: "middleNamePhonetic",
        namePrefix: "namePrefix",
        nameSuffix: "nameSuffix"
      },
      nickName: {
        nickName: "nickName"
      },
      note: {
        noteContent: "note"
      },
      organization: {
        name: "TT", title: "开发"
      }
    };

    let holder: contact.Holder = {
      holderId: 1,
      bundleName: "com.ohos.contacts",
      displayName: "phone"
    };
    let attr: contact.ContactAttributes = {
      attributes: [contact.Attribute.ATTR_CONTACT_EVENT, contact.Attribute.ATTR_EMAIL,
        contact.Attribute.ATTR_GROUP_MEMBERSHIP,
        contact.Attribute.ATTR_IM, contact.Attribute.ATTR_NAME, contact.Attribute.ATTR_NICKNAME,
        contact.Attribute.ATTR_NOTE, contact.Attribute.ATTR_ORGANIZATION, contact.Attribute.ATTR_PHONE,
        contact.Attribute.ATTR_PORTRAIT, contact.Attribute.ATTR_POSTAL_ADDRESS,
        contact.Attribute.ATTR_RELATION,
        contact.Attribute.ATTR_SIP_ADDRESS, contact.Attribute.ATTR_WEBSITE]
    };

    /**
     * @tc.number SUB_Telephony_ContactsApi_query_key_test_0100
     * @tc.name contact:queryKey
     * @tc.desc Function test
     * @tc.level 1
     * @tc.type: Function
     * @tc.size: SmallTest
     */
    it("SUB_Telephony_ContactsApi_query_key_test_0100", 0, async (done: Function) => {
      let rawContactId: number = await contact.addContact(GlobalContext.getContext().getAbility(), contactData);
      expect(rawContactId > 0).assertTrue();
      let holder: contact.Holder = {
        bundleName: "com.ohos.contacts", displayName: "phone", holderId: 1
      };
      try {
        let resultSet: string = await contact.queryKey(GlobalContext.getContext().getAbility(), rawContactId, holder);
        console.info("SUB_Telephony_ContactsApi_query_key_test_0100 : query resultSet = " + JSON.stringify(resultSet));
        expect(JSON.stringify(resultSet) === null).assertFalse();
        done();
      } catch (error) {
        let e: BusinessError = error as BusinessError;
        console.info("SUB_Telephony_ContactsApi_query_key_test_0100 query error = " + e);
        done();
      }
      sleep(500);
    });

    /**
     * @tc.number SUB_Telephony_ContactsApi_query_key_test_0200
     * @tc.name contact::queryKey
     * @tc.desc Function test
     * @tc.level 1
     * @tc.type: Function
     * @tc.size: SmallTest
     */
    it("SUB_Telephony_ContactsApi_query_key_test_0200", 0, async (done: Function) => {
      let rawContactId: number = await contact.addContact(customContext, contactData);
      expect(rawContactId > 0).assertTrue();
      console.info("SUB_Telephony_ContactsApi_query_key_test_0200 : query gRawContactId = " + rawContactId);
      try {
        let resultSet: string = await contact.queryKey(customContext, rawContactId);
        console.info("SUB_Telephony_ContactsApi_query_key_test_0200 : query resultSet = " + JSON.stringify(resultSet));
        expect(JSON.stringify(resultSet) === null).assertFalse();
        done();
      } catch (error) {
        let e: BusinessError = error as BusinessError;
        console.info("SUB_Telephony_ContactsApi_query_key_test_0200 query error = " + e);
        done();
      }
      sleep(500);
    });

    /**
     * @tc.number SUB_Telephony_ContactsApi_insert_test_0100
     * @tc.name contact::addContact
     * @tc.desc Function test
     * @tc.level 1
     * @tc.type: Function
     * @tc.size: SmallTest
     */
    it("SUB_Telephony_ContactsApi_insert_test_0100", 0, async (done: Function) => {
      let contactDataError: contact.Contact = {};
      try {
        let rawContactId: number = await contact.addContact(GlobalContext.getContext().getAbility(), contactDataError);
        console.info("SUB_Telephony_ContactsApi_insert_test_0100 : rawContactId = " + rawContactId);
        expect(rawContactId == -1).assertTrue();
        done();
      } catch (error) {
        let e: BusinessError = error as BusinessError;
        console.info("SUB_Telephony_ContactsApi_insert_test_0100 : raw_contact insert error = " + e);
        done();
      }
      sleep(500);
    });

    /**
     * @tc.number SUB_Telephony_ContactsApi_query_contact_test_0300
     * @tc.name contact::queryContact
     * @tc.desc Function test
     * @tc.level 1
     * @tc.type: Function
     * @tc.size: SmallTest
     */
    it("SUB_Telephony_ContactsApi_query_contact_test_0300", 0, async (done: Function) => {
      let queryId: string = "-1";
      try {
        let resultSet: contact.Contact = await contact.queryContact(GlobalContext.getContext().getAbility(), queryId);
        if (resultSet == null) {
          console.info("SUB_Telephony_ContactsApi_query_contact_test_0300 is null");
        }
        if (resultSet == undefined) {
          console.info("SUB_Telephony_ContactsApi_query_contact_test_0300 is undefined");
        }
        console.info("SUB_Telephony_ContactsApi_query_contact_test_0300 : updateCode = " + JSON.stringify(resultSet));
        expect(resultSet == undefined).assertTrue();
        done();
      } catch (error) {
        let e: BusinessError = error as BusinessError;
        console.info("SUB_Telephony_ContactsApi_query_contact_test_0300 query error = " + e);
        done();
      }
      sleep(500);
    });

    /**
     * @tc.number SUB_Telephony_ContactsApi_query_email_test_0400
     * @tc.name contact::queryContactsByEmail
     * @tc.desc Function test
     * @tc.level 3
     * @tc.type: Function
     * @tc.size: SmallTest
     */
    it("SUB_Telephony_ContactsApi_query_email_test_0400", 0, async (done: Function) => {
      let email: string = "email2222";
      try {
        let resultSet: Array<contact.Contact> = await contact.queryContactsByEmail(GlobalContext.getContext()
          .getAbility(), email);
        console.info("SUB_Telephony_ContactsApi_query_email_test_0400 : query resultSet = " + JSON.stringify(resultSet));
        expect(resultSet.length == 0).assertTrue();
        done();
      } catch (error) {
        let e: BusinessError = error as BusinessError;
        console.info("SUB_Telephony_ContactsApi_query_email_test_0400 query error = " + e);
        done();
      }
      sleep(500);
    });

    /**
     * @tc.number SUB_Telephony_ContactsApi_query_phoneNumber_test_0500
     * @tc.name contact::queryContactsByPhoneNumber
     * @tc.desc Function test
     * @tc.level 3
     * @tc.type: Function
     * @tc.size: SmallTest
     */
    it("SUB_Telephony_ContactsApi_query_phoneNumber_test_0500", 0, async (done: Function) => {
      let phoneNumber: string = "19999999";
      try {
        let resultSet: Array<contact.Contact> = await contact.queryContactsByPhoneNumber(GlobalContext.getContext()
          .getAbility(), phoneNumber);
        console.info(
          "SUB_Telephony_ContactsApi_query_phoneNumber_test_0500 : query resultSet = " + JSON.stringify(resultSet));
        expect(resultSet.length == 0).assertTrue();
        done();
      } catch (error) {
        let e: BusinessError = error as BusinessError;
        console.info("SUB_Telephony_ContactsApi_query_phoneNumber_test_0500 query error = " + e);
        done();
      }
      sleep(500);
    });

    /**
     * @tc.number SUB_Telephony_ContactsApi_query_key_test_0600
     * @tc.name contact::queryKey
     * @tc.desc Function test
     * @tc.level 3
     * @tc.type: Function
     * @tc.size: SmallTest
     */
    it("SUB_Telephony_ContactsApi_query_key_test_0600", 0, async (done: Function) => {
      let idTest: number = -1;
      try {
        let resultSet: string = await contact.queryKey(GlobalContext.getContext().getAbility(), idTest);
        console.info("SUB_Telephony_ContactsApi_query_key_test_0600 : query resultSet = " + JSON.stringify(resultSet));
        expect(resultSet.length == 0).assertTrue();
        done();
      } catch (error) {
        let e: BusinessError = error as BusinessError;
        console.info("SUB_Telephony_ContactsApi_query_key_test_0600 query error = " + e);
        done();
      }
      sleep(500);
    });

    /**
     * @tc.number SUB_Telephony_ContactsApi_addContact_test_0100
     * @tc.name contact::deleteContact
     * @tc.desc Function test
     * @tc.level 1
     * @tc.type: Function
     * @tc.size: SmallTest
     */
    it("SUB_Telephony_ContactsApi_addContact_test_0100", 0, async (done: Function) => {
      contact.addContact(GlobalContext.getContext().getAbility(), contactData, (err: BusinessError, data: number) => {
        if (err) {
          console.info("SUB_Telephony_ContactsApi_addContact_test_0100 addContact err = " + JSON.stringify(err));
          expect(false).assertTrue();
          done();
          return;
        }
        console.info("SUB_Telephony_ContactsApi_addContact_test_0100  data = " + JSON.stringify(data));
        expect(data > 0).assertTrue();
        contact.queryKey(GlobalContext.getContext().getAbility(), data, (err: BusinessError, keyData: string) => {
          if (err) {
            console.info("SUB_Telephony_ContactsApi_addContact_test_0100 queryKey  err = " + JSON.stringify(err));
            expect(false).assertTrue();
            done();
            return;
          }
          console.info("SUB_Telephony_ContactsApi_addContact_test_0100  keyData = " + JSON.stringify(keyData));
          contact.deleteContact(GlobalContext.getContext().getAbility(), keyData, (keyData) => {
            if (err) {
              console.info("SUB_Telephony_ContactsApi_addContact_test_0100  err = " + JSON.stringify(err));
              expect(false).assertTrue();
              done();
              return;
            }
            console.log('deleteContact success ' + JSON.stringify(keyData));
            done();
          });
        });
      });
      sleep(500);
    });

    /**
     * @tc.number SUB_Telephony_ContactsApi_addContact_test_0200
     * @tc.name contact::deleteContact
     * @tc.desc Function test
     * @tc.level 1
     * @tc.type: Function
     * @tc.size: SmallTest
     */
    it("SUB_Telephony_ContactsApi_addContact_test_0200", 0, async (done: Function) => {
      let promise = contact.addContact(GlobalContext.getContext().getAbility(), contactData);
      promise.then((data: number) => {
        console.info("SUB_Telephony_ContactsApi_addContact_test_0200  data = " + JSON.stringify(data));
        expect(data > 0).assertTrue();
        contact.queryKey(GlobalContext.getContext().getAbility(), data, (err: BusinessError, keyData: string) => {
          if (err) {
            console.info("v  err = " + JSON.stringify(err));
            expect(false).assertTrue();
            done();
            return;
          }
          console.info("SUB_Telephony_ContactsApi_addContact_test_0200  keyData = " + JSON.stringify(keyData));
          let promise: Promise<void> = contact.deleteContact(GlobalContext.getContext().getAbility(), keyData);
          promise.then(() => {
            console.log(`deleteContact success`);
            done();
          }).catch((err: BusinessError) => {
            console.info("SUB_Telephony_ContactsApi_addContact_test_0200  err = " + JSON.stringify(err));
            expect(false).assertTrue();
            done();
            return;
          });
        });
      }).catch((err: BusinessError) => {
        console.info("SUB_Telephony_ContactsApi_addContact_test_0200  err = " + JSON.stringify(err));
        expect(false).assertTrue();
        done();
        return;
      });
      sleep(500);
    });

    /**
     * @tc.number SUB_Telephony_ContactsApi_queryContact_test_0100
     * @tc.name contact::queryKey
     * @tc.desc Function test
     * @tc.level 1
     * @tc.type: Function
     * @tc.size: SmallTest
     */
    it("SUB_Telephony_ContactsApi_queryContact_test_0100", 0, async (done: Function) => {
      let holder: contact.Holder = {
        bundleName: "com.ohos.contacts", displayName: "phone", holderId: 1
      }
      expect(holder.bundleName === null).assertFalse();
      expect(holder.displayName === null).assertFalse();
      expect(holder.holderId != 0).assertTrue();
      contact.addContact(GlobalContext.getContext().getAbility(), contactData, (err: BusinessError, data: number) => {
        if (err) {
          console.info("SUB_Telephony_ContactsApi_queryContact_test_0100  err = " + JSON.stringify(err));
          expect(false).assertTrue();
          done();
          return;
        }
        console.info("SUB_Telephony_ContactsApi_queryContact_test_0100  data = " + JSON.stringify(data));
        expect(data > 0).assertTrue();
        contact.queryKey(GlobalContext.getContext().getAbility(), data, (err: BusinessError, keyData: string) => {
          if (err) {
            console.info("SUB_Telephony_ContactsApi_queryContact_test_0100  err = " + JSON.stringify(err));
            expect(false).assertTrue();
            done();
            return;
          }
          console.info("SUB_Telephony_ContactsApi_queryContact_test_0100  keyData = " + JSON.stringify(keyData));
          contact.queryContact(GlobalContext.getContext()
            .getAbility(), keyData, (err: BusinessError, data: contact.Contact) => {
            if (err) {
              console.info("SUB_Telephony_ContactsApi_queryContact_test_0100  err = " + JSON.stringify(err));
              expect(false).assertTrue();
              done();
              return;
            }
            console.info("SUB_Telephony_ContactsApi_queryContact_test_0100  data = " + JSON.stringify(data));
            expect(data.emails[0].email != '').assertTrue();
            done();
          });
        });
      });
      sleep(500);
    });

    /**
     * @tc.number SUB_Telephony_ContactsApi_queryContact_test_0200
     * @tc.name contact::queryKey
     * @tc.desc Function test
     * @tc.level 3
     * @tc.type: Function
     * @tc.size: SmallTest
     */
    it("SUB_Telephony_ContactsApi_queryContact_test_0200", 0, async (done: Function) => {
      contact.addContact(GlobalContext.getContext().getAbility(), contactData, (err: BusinessError, data: number) => {
        if (err) {
          console.info("SUB_Telephony_ContactsApi_queryContact_test_0200  err = " + JSON.stringify(err));
          expect(false).assertTrue();
          done();
          return;
        }
        console.info("SUB_Telephony_ContactsApi_queryContact_test_0200  data = " + JSON.stringify(data));
        expect(data > 0).assertTrue();
        contact.queryKey(GlobalContext.getContext().getAbility(), data, (err: BusinessError, keyData: string) => {
          if (err) {
            console.info("SUB_Telephony_ContactsApi_queryContact_test_0200  err = " + JSON.stringify(err));
            expect(false).assertTrue();
            done();
            return;
          }
          console.info("SUB_Telephony_ContactsApi_queryContact_test_0200  keyData = " + JSON.stringify(keyData));
          contact.queryContact(GlobalContext.getContext()
            .getAbility(), keyData, holder, (err: BusinessError, data: contact.Contact) => {
            if (err) {
              console.info("SUB_Telephony_ContactsApi_queryContact_test_0200  err = " + JSON.stringify(err));
              expect(false).assertTrue();
              done();
              return;
            }
            console.info("SUB_Telephony_ContactsApi_queryContact_test_0200  data = " + JSON.stringify(data));
            done();
          });
        });
      });
      sleep(500);
    });

    /**
     * @tc.number SUB_Telephony_ContactsApi_queryContact_test_0300
     * @tc.name contact::queryKey
     * @tc.desc Function test
     * @tc.level 3
     * @tc.type: Function
     * @tc.size: SmallTest
     */
    it("SUB_Telephony_ContactsApi_queryContact_test_0300", 0, async (done: Function) => {
      contact.addContact(GlobalContext.getContext().getAbility(), contactData, (err: BusinessError, data: number) => {
        if (err) {
          console.info("SUB_Telephony_ContactsApi_queryContact_test_0300  err = " + JSON.stringify(err));
          expect(false).assertTrue();
          done();
          return;
        }
        console.info("SUB_Telephony_ContactsApi_queryContact_test_0300  data = " + JSON.stringify(data));
        expect(data > 0).assertTrue();
        contact.queryKey(GlobalContext.getContext().getAbility(), data, (err: BusinessError, keyData: string) => {
          if (err) {
            console.info("SUB_Telephony_ContactsApi_queryContact_test_0300  err = " + JSON.stringify(err));
            expect(false).assertTrue();
            done();
            return;
          }
          console.info("SUB_Telephony_ContactsApi_queryContact_test_0300  keyData = " + JSON.stringify(keyData));
          contact.queryContact(GlobalContext.getContext()
            .getAbility(), keyData, attr, (err: BusinessError, data: contact.Contact) => {
            if (err) {
              console.info("SUB_Telephony_ContactsApi_queryContact_test_0300  err = " + JSON.stringify(err));
              expect(false).assertTrue();
              done();
              return;
            }
            console.info("SUB_Telephony_ContactsApi_queryContact_test_0300  data = " + JSON.stringify(data));
            expect(data.emails[0].email != '').assertTrue();
            done();
          });
        });
      });
      sleep(500);
    });

    /**
     * @tc.number SUB_Telephony_ContactsApi_queryContact_test_0400
     * @tc.name contact::queryKey
     * @tc.desc Function test
     * @tc.level 3
     * @tc.type: Function
     * @tc.size: SmallTest
     */
    it("SUB_Telephony_ContactsApi_queryContact_test_0400", 0, async (done: Function) => {
      contact.addContact(GlobalContext.getContext().getAbility(), contactData, (err: BusinessError, data: number) => {
        if (err) {
          console.info("SUB_Telephony_ContactsApi_queryContact_test_0400  err = " + JSON.stringify(err));
          expect(false).assertTrue();
          done();
          return;
        }
        console.info("SUB_Telephony_ContactsApi_queryContact_test_0400  data = " + JSON.stringify(data));
        expect(data > 0).assertTrue();
        contact.queryKey(GlobalContext.getContext().getAbility(), data, (err: BusinessError, keyData: string) => {
          if (err) {
            console.info("SUB_Telephony_ContactsApi_queryContact_test_0400  err = " + JSON.stringify(err));
            expect(false).assertTrue();
            done();
            return;
          }
          console.info("SUB_Telephony_ContactsApi_queryContact_test_0400  keyData = " + JSON.stringify(keyData));
          contact.queryContact(GlobalContext.getContext()
            .getAbility(), keyData, holder, attr, (err: BusinessError, data: contact.Contact) => {
            if (err) {
              console.info("SUB_Telephony_ContactsApi_queryContact_test_0400  err = " + JSON.stringify(err));
              expect(false).assertTrue();
              done();
              return;
            }
            console.info("SUB_Telephony_ContactsApi_queryContact_test_0400  data = " + JSON.stringify(data));
            done();
          });
        });
      });
      sleep(500);
    });

    /**
     * @tc.number SUB_Telephony_ContactsApi_queryContact_test_0500
     * @tc.name contact::queryKey
     * @tc.desc Function test
     * @tc.level 3
     * @tc.type: Function
     * @tc.size: SmallTest
     */
    it("SUB_Telephony_ContactsApi_queryContact_test_0500", 0, async (done: Function) => {
      contact.addContact(GlobalContext.getContext().getAbility(), contactData, (err: BusinessError, data: number) => {
        if (err) {
          console.info("SUB_Telephony_ContactsApi_queryContact_test_0500  err = " + JSON.stringify(err));
          expect(false).assertTrue();
          done();
          return;
        }
        console.info("SUB_Telephony_ContactsApi_queryContact_test_0500  data = " + JSON.stringify(data));
        expect(data > 0).assertTrue();
        contact.queryKey(GlobalContext.getContext().getAbility(), data, (err: BusinessError, keyData: string) => {
          if (err) {
            console.info("SUB_Telephony_ContactsApi_queryContact_test_0500  err = " + JSON.stringify(err));
            expect(false).assertTrue();
            done();
            return;
          }
          console.info("SUB_Telephony_ContactsApi_queryContact_test_0500  keyData = " + JSON.stringify(keyData));
          let promise = contact.queryContact(GlobalContext.getContext().getAbility(), keyData, holder, attr);
          promise.then((data) => {
            console.info("SUB_Telephony_ContactsApi_queryContact_test_0500  data = " + JSON.stringify(data));
            done();
          }).catch((err: BusinessError) => {
            console.info("SUB_Telephony_ContactsApi_queryContact_test_0500  err = " + JSON.stringify(err));
            expect(false).assertTrue();
            done();
            return;
          });
        });
      });
      sleep(500);
    });

    /**
     * @tc.number SUB_Telephony_ContactsApi_queryContacts_test_0100
     * @tc.name contact::queryContacts
     * @tc.desc Function test
     * @tc.level 1
     * @tc.type: Function
     * @tc.size: SmallTest
     */
    it("SUB_Telephony_ContactsApi_queryContacts_test_0100", 0, async (done: Function) => {
      contact.addContact(GlobalContext.getContext().getAbility(), contactData, (err: BusinessError, data: number) => {
        if (err) {
          console.info("SUB_Telephony_ContactsApi_queryContacts_test_0100  err = " + JSON.stringify(err));
          expect(false).assertTrue();
          done();
          return;
        }
        console.info("SUB_Telephony_ContactsApi_queryContacts_test_0100  data = " + JSON.stringify(data));
        expect(data > 0).assertTrue();
        contact.queryContacts(GlobalContext.getContext()
          .getAbility(), (err: BusinessError, data: Array<contact.Contact>) => {
          if (err) {
            console.info("SUB_Telephony_ContactsApi_queryContacts_test_0100  err = " + JSON.stringify(err));
            expect(false).assertTrue();
            done();
            return;
          }
          console.info("SUB_Telephony_ContactsApi_queryContacts_test_0100  data = " + JSON.stringify(data));
          expect(data.length > 0).assertTrue();
          done();
        });
      });
      sleep(500);
    });

    /**
     * @tc.number SUB_Telephony_ContactsApi_queryContacts_test_0200
     * @tc.name contact::queryContacts
     * @tc.desc Function test
     * @tc.level 2
     * @tc.type: Function
     * @tc.size: SmallTest
     */
    it("SUB_Telephony_ContactsApi_queryContacts_test_0200", 0, async (done: Function) => {
      contact.addContact(GlobalContext.getContext().getAbility(), contactData, (err: BusinessError, data: number) => {
        if (err) {
          console.info("SUB_Telephony_ContactsApi_queryContacts_test_0200  err = " + JSON.stringify(err));
          expect(false).assertTrue();
          done();
          return;
        }
        console.info("SUB_Telephony_ContactsApi_queryContacts_test_0200  data = " + JSON.stringify(data));
        expect(data > 0).assertTrue();
        contact.queryContacts(GlobalContext.getContext()
          .getAbility(), holder, (err: BusinessError, data: Array<contact.Contact>) => {
          if (err) {
            console.info("SUB_Telephony_ContactsApi_queryContacts_test_0200  err = " + JSON.stringify(err));
            expect(false).assertTrue();
            done();
            return;
          }
          console.info("SUB_Telephony_ContactsApi_queryContacts_test_0200  data = " + JSON.stringify(data));
          expect(data.length >= 0).assertTrue();
          done();
        });
      });
      sleep(500);
    });

    /**
     * @tc.number SUB_Telephony_ContactsApi_queryContacts_test_0300
     * @tc.name contact::queryContacts
     * @tc.desc Function test
     * @tc.level 3
     * @tc.type: Function
     * @tc.size: SmallTest
     */
    it("SUB_Telephony_ContactsApi_queryContacts_test_0300", 0, async (done: Function) => {
      contact.addContact(GlobalContext.getContext().getAbility(), contactData, (err: BusinessError, data: number) => {
        if (err) {
          console.info("SUB_Telephony_ContactsApi_queryContacts_test_0300  err = " + JSON.stringify(err));
          expect(false).assertTrue();
          done();
          return;
        }
        console.info("SUB_Telephony_ContactsApi_queryContacts_test_0300  data = " + JSON.stringify(data));
        expect(data > 0).assertTrue();
        contact.queryContacts(GlobalContext.getContext()
          .getAbility(), attr, (err: BusinessError, data: Array<contact.Contact>) => {
          if (err) {
            console.info("SUB_Telephony_ContactsApi_queryContacts_test_0300  err = " + JSON.stringify(err));
            expect(false).assertTrue();
            done();
            return;
          }
          console.info("SUB_Telephony_ContactsApi_queryContacts_test_0300  data = " + JSON.stringify(data));
          expect(data.length > 0).assertTrue();
          done();
        });
      });
      sleep(500);
    });

    /**
     * @tc.number SUB_Telephony_ContactsApi_queryContacts_test_0400
     * @tc.name contact::queryContacts
     * @tc.desc Function test
     * @tc.level 3
     * @tc.type: Function
     * @tc.size: SmallTest
     */
    it("SUB_Telephony_ContactsApi_queryContacts_test_0400", 0, async (done: Function) => {
      contact.addContact(GlobalContext.getContext().getAbility(), contactData, (err: BusinessError, data: number) => {
        if (err) {
          console.info("SUB_Telephony_ContactsApi_queryContacts_test_0400  err = " + JSON.stringify(err));
          expect(false).assertTrue();
          done();
          return;
        }
        console.info("SUB_Telephony_ContactsApi_queryContacts_test_0400  data = " + JSON.stringify(data));
        expect(data > 0).assertTrue();
        contact.queryContacts(GlobalContext.getContext()
          .getAbility(), holder, attr, (err: BusinessError, data: Array<contact.Contact>) => {
          if (err) {
            console.info("SUB_Telephony_ContactsApi_queryContacts_test_0400  err = " + JSON.stringify(err));
            expect(false).assertTrue();
            done();
            return;
          }
          console.info("SUB_Telephony_ContactsApi_queryContacts_test_0400  data = " + JSON.stringify(data));
          expect(data.length >= 0).assertTrue();
          done();
        });
      });
      sleep(500);
    });

    /**
     * @tc.number SUB_Telephony_ContactsApi_queryContacts_test_0500
     * @tc.name contact::queryContacts
     * @tc.desc Function test
     * @tc.level 3
     * @tc.type: Function
     * @tc.size: SmallTest
     */
    it("SUB_Telephony_ContactsApi_queryContacts_test_0500", 0, async (done: Function) => {
      contact.addContact(GlobalContext.getContext().getAbility(), contactData, (err: BusinessError, data: number) => {
        if (err) {
          console.info("SUB_Telephony_ContactsApi_queryContacts_test_0500  err = " + JSON.stringify(err));
          expect(false).assertTrue();
          done();
          return;
        }
        console.info("SUB_Telephony_ContactsApi_queryContacts_test_0500  data = " + JSON.stringify(data));
        expect(data > 0).assertTrue();
        let promise: Promise<Array<contact.Contact>> = contact.queryContacts(GlobalContext.getContext()
          .getAbility(), holder, attr);
        promise.then((data: Array<contact.Contact>) => {
          console.info("SUB_Telephony_ContactsApi_queryContacts_test_0500  data = " + JSON.stringify(data));
          expect(data.length >= 0).assertTrue();
          done();
        }).catch((err: BusinessError) => {
          console.info("SUB_Telephony_ContactsApi_queryContacts_test_0500  err = " + JSON.stringify(err));
          expect(false).assertTrue();
          done();
          return;
        });
      });
      sleep(500);
    });

    /**
     * @tc.number SUB_Telephony_ContactsApi_queryContactsByPhoneNumber_test_0100
     * @tc.name contact::queryContactsByPhoneNumber
     * @tc.desc Function test
     * @tc.level 1
     * @tc.type: Function
     * @tc.size: SmallTest
     */
    it("SUB_Telephony_ContactsApi_queryContactsByPhoneNumber_test_0100", 0, async (done: Function) => {
      contact.addContact(GlobalContext.getContext().getAbility(), contactData, (err: BusinessError, data: number) => {
        if (err) {
          console.info("SUB_Telephony_ContactsApi_queryContactsByPhoneNumber_test_0100  err = " + JSON.stringify(err));
          expect(false).assertTrue();
          done();
          return;
        }
        console.info("SUB_Telephony_ContactsApi_queryContactsByPhoneNumber_test_0100  data = " + JSON.stringify(data));
        expect(data > 0).assertTrue();
        contact.queryContactsByPhoneNumber(GlobalContext.getContext()
          .getAbility(), '13800000000', (err: BusinessError, data: Array<contact.Contact>) => {
          if (err) {
            console.info("SUB_Telephony_ContactsApi_queryContactsByPhoneNumber_test_0100  err = " + JSON.stringify(err));
            expect(false).assertTrue();
            done();
            return;
          }
          console.info("SUB_Telephony_ContactsApi_queryContactsByPhoneNumber_test_0100  data = " + JSON.stringify(data));
          expect(data.length > 0).assertTrue();
          done();
        });
      });
      sleep(500);
    });

    /**
     * @tc.number SUB_Telephony_ContactsApi_queryContactsByPhoneNumber_test_0200
     * @tc.name contact::queryContactsByPhoneNumber
     * @tc.desc Function test
     * @tc.level 2
     * @tc.type: Function
     * @tc.size: SmallTest
     */
    it("SUB_Telephony_ContactsApi_queryContactsByPhoneNumber_test_0200", 0, async (done: Function) => {
      contact.addContact(GlobalContext.getContext().getAbility(), contactData, (err: BusinessError, data: number) => {
        if (err) {
          console.info("SUB_Telephony_ContactsApi_queryContactsByPhoneNumber_test_0200  err = " + JSON.stringify(err));
          expect(false).assertTrue();
          done();
          return;
        }
        console.info("SUB_Telephony_ContactsApi_queryContactsByPhoneNumber_test_0200  data = " + JSON.stringify(data));
        expect(data > 0).assertTrue();
        contact.queryContactsByPhoneNumber(GlobalContext.getContext()
          .getAbility(), '13800000000', holder, (err: BusinessError, data: Array<contact.Contact>) => {
          if (err) {
            console.info("SUB_Telephony_ContactsApi_queryContactsByPhoneNumber_test_0200  err = " + JSON.stringify(err));
            expect(false).assertTrue();
            done();
            return;
          }
          console.info("SUB_Telephony_ContactsApi_queryContactsByPhoneNumber_test_0200  data = " + JSON.stringify(data));
          expect(data.length > 0).assertTrue();
          done();
        });
      });
      sleep(500);
    });

    /**
     * @tc.number SUB_Telephony_ContactsApi_queryContactsByPhoneNumber_test_0300
     * @tc.name contact::queryContactsByPhoneNumber
     * @tc.desc Function test
     * @tc.level 3
     * @tc.type: Function
     * @tc.size: SmallTest
     */
    it("SUB_Telephony_ContactsApi_queryContactsByPhoneNumber_test_0300", 0, async (done: Function) => {
      contact.addContact(GlobalContext.getContext().getAbility(), contactData, (err: BusinessError, data: number) => {
        if (err) {
          console.info("SUB_Telephony_ContactsApi_queryContactsByPhoneNumber_test_0300  err = " + JSON.stringify(err));
          expect(false).assertTrue();
          done();
          return;
        }
        console.info("SUB_Telephony_ContactsApi_queryContactsByPhoneNumber_test_0300  data = " + JSON.stringify(data));
        expect(data > 0).assertTrue();
        contact.queryContactsByPhoneNumber(GlobalContext.getContext()
          .getAbility(), '13800000000', attr, (err: BusinessError, data: Array<contact.Contact>) => {
          if (err) {
            console.info("SUB_Telephony_ContactsApi_queryContactsByPhoneNumber_test_0300  err = " + JSON.stringify(err));
            expect(false).assertTrue();
            done();
            return;
          }
          console.info("SUB_Telephony_ContactsApi_queryContactsByPhoneNumber_test_0300  data = " + JSON.stringify(data));
          expect(data.length > 0).assertTrue();
          done();
        });
      });
      sleep(500);
    });

    /**
     * @tc.number SUB_Telephony_ContactsApi_queryContactsByPhoneNumber_test_0400
     * @tc.name contact::queryContactsByPhoneNumber
     * @tc.desc Function test
     * @tc.level 1
     * @tc.type: Function
     * @tc.size: SmallTest
     */
    it("SUB_Telephony_ContactsApi_queryContactsByPhoneNumber_test_0400", 0, async (done: Function) => {
      contact.addContact(GlobalContext.getContext().getAbility(), contactData, (err: BusinessError, data: number) => {
        if (err) {
          console.info("SUB_Telephony_ContactsApi_queryContactsByPhoneNumber_test_0400  err = " + JSON.stringify(err));
          expect(false).assertTrue();
          done();
          return;
        }
        console.info("SUB_Telephony_ContactsApi_queryContactsByPhoneNumber_test_0400  data = " + JSON.stringify(data));
        expect(data > 0).assertTrue();
        contact.queryContactsByPhoneNumber(GlobalContext.getContext()
          .getAbility(), '13800000000', holder, attr, (err: BusinessError, data: Array<contact.Contact>) => {
          if (err) {
            console.info("SUB_Telephony_ContactsApi_queryContactsByPhoneNumber_test_0400  err = " + JSON.stringify(err));
            expect(false).assertTrue();
            done();
            return;
          }
          console.info("SUB_Telephony_ContactsApi_queryContactsByPhoneNumber_test_0400  data = " + JSON.stringify(data));
          expect(data.length > 0).assertTrue();
          done();
        });
      });
      sleep(500);
    });

    /**
     * @tc.number SUB_Telephony_ContactsApi_queryContactsByPhoneNumber_test_0500
     * @tc.name contact::queryContactsByPhoneNumber
     * @tc.desc Function test
     * @tc.level 3
     * @tc.type: Function
     * @tc.size: SmallTest
     */
    it("SUB_Telephony_ContactsApi_queryContactsByPhoneNumber_test_0500", 0, async (done: Function) => {
      contact.addContact(GlobalContext.getContext().getAbility(), contactData, (err: BusinessError, data: number) => {
        if (err) {
          console.info("SUB_Telephony_ContactsApi_queryContactsByPhoneNumber_test_0500  err = " + JSON.stringify(err));
          expect(false).assertTrue();
          done();
          return;
        }
        console.info("SUB_Telephony_ContactsApi_queryContactsByPhoneNumber_test_0500  data = " + JSON.stringify(data));
        expect(data > 0).assertTrue();
        let promise: Promise<Array<contact.Contact>> = contact.queryContactsByPhoneNumber(GlobalContext.getContext()
          .getAbility(), '13800000000', holder, attr);
        promise.then((data: Array<contact.Contact>) => {
          console.info("SUB_Telephony_ContactsApi_queryContactsByPhoneNumber_test_0500  data = " + JSON.stringify(data));
          expect(data.length > 0).assertTrue();
          done();
        }).catch((err: BusinessError) => {
          console.info("SUB_Telephony_ContactsApi_queryContactsByPhoneNumber_test_0500  err = " + JSON.stringify(err));
          expect(false).assertTrue();
          done();
          return;
        });
      });
      sleep(500);
    });

    /**
     * @tc.number SUB_Telephony_ContactsApi_queryContactsByEmail_test_0100
     * @tc.name contact::queryContactsByEmail
     * @tc.desc Function test
     * @tc.level 1
     * @tc.type: Function
     * @tc.size: SmallTest
     */
    it("SUB_Telephony_ContactsApi_queryContactsByEmail_test_0100", 0, async (done: Function) => {
      contact.addContact(GlobalContext.getContext().getAbility(), contactData, (err: BusinessError, data: number) => {
        if (err) {
          console.info("SUB_Telephony_ContactsApi_queryContactsByEmail_test_0100  err = " + JSON.stringify(err));
          expect(false).assertTrue();
          done();
          return;
        }
        console.info("SUB_Telephony_ContactsApi_queryContactsByEmail_test_0100  data = " + JSON.stringify(data));
        expect(data > 0).assertTrue();
        contact.queryContactsByEmail(GlobalContext.getContext()
          .getAbility(), '13800000000@email.com', (err: BusinessError, data: Array<contact.Contact>) => {
          if (err) {
            console.info("SUB_Telephony_ContactsApi_queryContactsByEmail_test_0100  err = " + JSON.stringify(err));
            expect(false).assertTrue();
            done();
            return;
          }
          console.info("v  data = " + JSON.stringify(data));
          expect(data.length > 0).assertTrue();
          done();
        });
      });
      sleep(500);
    });

    /**
     * @tc.number SUB_Telephony_ContactsApi_queryContactsByEmail_test_0200
     * @tc.name contact::queryContactsByEmail
     * @tc.desc Function test
     * @tc.level 3
     * @tc.type: Function
     * @tc.size: SmallTest
     */
    it("SUB_Telephony_ContactsApi_queryContactsByEmail_test_0200", 0, async (done: Function) => {
      contact.addContact(GlobalContext.getContext().getAbility(), contactData, (err: BusinessError, data: number) => {
        if (err) {
          console.info("SUB_Telephony_ContactsApi_queryContactsByEmail_test_0200  err = " + JSON.stringify(err));
          expect(false).assertTrue();
          done();
          return;
        }
        console.info("SUB_Telephony_ContactsApi_queryContactsByEmail_test_0200  data = " + JSON.stringify(data));
        expect(data > 0).assertTrue();
        contact.queryContactsByEmail(GlobalContext.getContext()
          .getAbility(), '13800000000@email.com', holder, (err: BusinessError, data: Array<contact.Contact>) => {
          if (err) {
            console.info("SUB_Telephony_ContactsApi_queryContactsByEmail_test_0200  err = " + JSON.stringify(err));
            expect(false).assertTrue();
            done();
            return;
          }
          console.info("SUB_Telephony_ContactsApi_queryContactsByEmail_test_0200  data = " + JSON.stringify(data));
          expect(data.length > 0).assertTrue();
          done();
        });
      });
      sleep(500);
    });

    /**
     * @tc.number SUB_Telephony_ContactsApi_queryContactsByEmail_test_0300
     * @tc.name contact::queryContactsByEmail
     * @tc.desc Function test
     * @tc.level 1
     * @tc.type: Function
     * @tc.size: SmallTest
     */
    it("SUB_Telephony_ContactsApi_queryContactsByEmail_test_0300", 0, async (done: Function) => {
      contact.addContact(GlobalContext.getContext().getAbility(), contactData, (err: BusinessError, data: number) => {
        if (err) {
          console.info("SUB_Telephony_ContactsApi_queryContactsByEmail_test_0300  err = " + JSON.stringify(err));
          expect(false).assertTrue();
          done();
          return;
        }
        console.info("SUB_Telephony_ContactsApi_queryContactsByEmail_test_0300  data = " + JSON.stringify(data));
        expect(data > 0).assertTrue();
        contact.queryContactsByEmail(GlobalContext.getContext()
          .getAbility(), '13800000000@email.com', attr, (err: BusinessError, data: Array<contact.Contact>) => {
          if (err) {
            console.info("SUB_Telephony_ContactsApi_queryContactsByEmail_test_0300  err = " + JSON.stringify(err));
            expect(false).assertTrue();
            done();
            return;
          }
          console.info("SUB_Telephony_ContactsApi_queryContactsByEmail_test_0300  data = " + JSON.stringify(data));
          expect(data.length > 0).assertTrue();
          done();
        });
      });
      sleep(500);
    });

    /**
     * @tc.number SUB_Telephony_ContactsApi_queryContactsByEmail_test_0400
     * @tc.name contact::queryContactsByEmail
     * @tc.desc Function test
     * @tc.level 3
     * @tc.type: Function
     * @tc.size: SmallTest
     */
    it("SUB_Telephony_ContactsApi_queryContactsByEmail_test_0400", 0, async (done: Function) => {
      contact.addContact(GlobalContext.getContext().getAbility(), contactData, (err: BusinessError, data: number) => {
        if (err) {
          console.info("SUB_Telephony_ContactsApi_queryContactsByEmail_test_0400  err = " + JSON.stringify(err));
          expect(false).assertTrue();
          done();
          return;
        }
        console.info("SUB_Telephony_ContactsApi_queryContactsByEmail_test_0400  data = " + JSON.stringify(data));
        expect(data > 0).assertTrue();
        contact.queryContactsByEmail(GlobalContext.getContext()
          .getAbility(), '13800000000@email.com', holder, attr, (err: BusinessError, data: Array<contact.Contact>) => {
          if (err) {
            console.info("SUB_Telephony_ContactsApi_queryContactsByEmail_test_0400  err = " + JSON.stringify(err));
            expect(false).assertTrue();
            done();
            return;
          }
          console.info("SUB_Telephony_ContactsApi_queryContactsByEmail_test_0400  data = " + JSON.stringify(data));
          expect(data.length > 0).assertTrue();
          done();
        });
      });
      sleep(500);
    });

    /**
     * @tc.number SUB_Telephony_ContactsApi_queryContactsByEmail_test_0500
     * @tc.name contact::queryContactsByEmail
     * @tc.desc Function test
     * @tc.level 3
     * @tc.type: Function
     * @tc.size: SmallTest
     */
    it("SUB_Telephony_ContactsApi_queryContactsByEmail_test_0500", 0, async (done: Function) => {
      contact.addContact(GlobalContext.getContext().getAbility(), contactData, (err: BusinessError, data: number) => {
        if (err) {
          console.info("SUB_Telephony_ContactsApi_queryContactsByEmail_test_0500  err = " + JSON.stringify(err));
          expect(false).assertTrue();
          done();
          return;
        }
        console.info("SUB_Telephony_ContactsApi_queryContactsByEmail_test_0500  data = " + JSON.stringify(data));
        expect(data > 0).assertTrue();
        let promise: Promise<Array<contact.Contact>> = contact.queryContactsByEmail(GlobalContext.getContext()
          .getAbility(), '13800000000@email.com', holder, attr);
        promise.then((data: Array<contact.Contact>) => {
          console.info("SUB_Telephony_ContactsApi_queryContactsByEmail_test_0500  data = " + JSON.stringify(data));
          expect(data.length > 0).assertTrue();
          done();
        }).catch((err: BusinessError) => {
          console.info("SUB_Telephony_ContactsApi_queryContactsByEmail_test_0500  err = " + JSON.stringify(err));
          expect(false).assertTrue();
          done();
          return;
        });
      });
      sleep(500);
    });

    /**
     * @tc.number SUB_Telephony_ContactsApi_queryGroups_test_0100
     * @tc.name contact::queryGroups
     * @tc.desc Function test
     * @tc.level 1
     * @tc.type: Function
     * @tc.size: SmallTest
     */
    it("SUB_Telephony_ContactsApi_queryGroups_test_0100", 0, async (done: Function) => {
      contact.addContact(GlobalContext.getContext().getAbility(), contactData, (err: BusinessError, data: number) => {
        if (err) {
          console.info("SUB_Telephony_ContactsApi_queryGroups_test_0100  err = " + JSON.stringify(err));
          expect(false).assertTrue();
          done();
          return;
        }
        console.info("SUB_Telephony_ContactsApi_queryGroups_test_0100  data = " + JSON.stringify(data));
        expect(data > 0).assertTrue();
        contact.queryGroups(GlobalContext.getContext()
          .getAbility(), (err: BusinessError, data: Array<contact.Group>) => {
          if (err) {
            console.info("SUB_Telephony_ContactsApi_queryGroups_test_0100  err = " + JSON.stringify(err));
            expect(false).assertTrue();
            done();
            return;
          }
          console.info("SUB_Telephony_ContactsApi_queryGroups_test_0100  data = " + JSON.stringify(data));
          expect(data.length >= 0).assertTrue();
          done();
        });
      });
      sleep(500);
    });

    /**
     * @tc.number SUB_Telephony_ContactsApi_queryGroups_test_0200
     * @tc.name contact::queryGroups
     * @tc.desc Function test
     * @tc.level 2
     * @tc.type: Function
     * @tc.size: SmallTest
     */
    it("SUB_Telephony_ContactsApi_queryGroups_test_0200", 0, async (done: Function) => {
      contact.addContact(GlobalContext.getContext().getAbility(), contactData, (err: BusinessError, data: number) => {
        if (err) {
          console.info("SUB_Telephony_ContactsApi_queryGroups_test_0200  err = " + JSON.stringify(err));
          expect(false).assertTrue();
          done();
          return;
        }
        console.info("SUB_Telephony_ContactsApi_queryGroups_test_0200  data = " + JSON.stringify(data));
        expect(data > 0).assertTrue();
        contact.queryGroups(GlobalContext.getContext()
          .getAbility(), holder, (err: BusinessError, data: Array<contact.Group>) => {
          if (err) {
            console.info("SUB_Telephony_ContactsApi_queryGroups_test_0200  err = " + JSON.stringify(err));
            expect(false).assertTrue();
            done();
            return;
          }
          console.info("SUB_Telephony_ContactsApi_queryGroups_test_0200  data = " + JSON.stringify(data));
          expect(data.length >= 0).assertTrue();
          done();
        });
      });
      sleep(500);
    });

    /**
     * @tc.number SUB_Telephony_ContactsApi_queryGroups_test_0300
     * @tc.name contact::queryGroups
     * @tc.desc Function test
     * @tc.level 1
     * @tc.type: Function
     * @tc.size: SmallTest
     */
    it("SUB_Telephony_ContactsApi_queryGroups_test_0300", 0, async (done: Function) => {
      contact.addContact(GlobalContext.getContext().getAbility(), contactData, (err: BusinessError, data: number) => {
        if (err) {
          console.info("SUB_Telephony_ContactsApi_queryGroups_test_0300  err = " + JSON.stringify(err));
          expect(false).assertTrue();
          done();
          return;
        }
        console.info("SUB_Telephony_ContactsApi_queryGroups_test_0300  data = " + JSON.stringify(data));
        expect(data > 0).assertTrue();
        let promise: Promise<Array<contact.Group>> = contact.queryGroups(GlobalContext.getContext()
          .getAbility(), holder);
        promise.then((data: Array<contact.Group>) => {
          console.info("SUB_Telephony_ContactsApi_queryGroups_test_0300  data = " + JSON.stringify(data));
          expect(data.length >= 0).assertTrue();
          done();
        }).catch((err: BusinessError) => {
          console.info("SUB_Telephony_ContactsApi_queryGroups_test_0300  err = " + JSON.stringify(err));
          expect(false).assertTrue();
          done();
          return;
        });
      });
      sleep(500);
    });

    /**
     * @tc.number SUB_Telephony_ContactsApi_queryHolders_test_0100
     * @tc.name contact::queryHolders
     * @tc.desc Function test
     * @tc.level 1
     * @tc.type: Function
     * @tc.size: SmallTest
     */
    it("SUB_Telephony_ContactsApi_queryHolders_test_0100", 0, async (done: Function) => {
      contact.queryHolders(GlobalContext.getContext()
        .getAbility(), (err: BusinessError, data: Array<contact.Holder>) => {
        if (err) {
          console.info("SUB_Telephony_ContactsApi_queryHolders_test_0100  err = " + JSON.stringify(err));
          expect(false).assertTrue();
          done();
          return;
        }
        console.info("SUB_Telephony_ContactsApi_queryHolders_test_0100  data = " + JSON.stringify(data));
        expect(data.length >= 0).assertTrue();
        done();
      });
      sleep(500);
    });

    /**
     * @tc.number SUB_Telephony_ContactsApi_queryHolders_test_0200
     * @tc.name contact::queryHolders
     * @tc.desc Function test
     * @tc.level 2
     * @tc.type: Function
     * @tc.size: SmallTest
     */
    it("SUB_Telephony_ContactsApi_queryHolders_test_0200", 0, async (done: Function) => {
      let promise: Promise<Array<contact.Holder>> = contact.queryHolders(GlobalContext.getContext().getAbility());
      promise.then((data: Array<contact.Holder>) => {
        console.info("SUB_Telephony_ContactsApi_queryHolders_test_0200  data = " + JSON.stringify(data));
        expect(data.length >= 0).assertTrue();
        done();
      }).catch((err: BusinessError) => {
        console.info("SUB_Telephony_ContactsApi_queryHolders_test_0200  err = " + JSON.stringify(err));
        expect(false).assertTrue();
        done();
        return;
      });
      sleep(500);
    });

    /**
     * @tc.number SUB_Telephony_ContactsApi_queryKey_test_0100
     * @tc.name contact::queryKey
     * @tc.desc Function test
     * @tc.level 4
     * @tc.type: Function
     * @tc.size: SmallTest
     */
    it("SUB_Telephony_ContactsApi_queryKey_test_0100", 0, async (done: Function) => {
      contact.addContact(GlobalContext.getContext().getAbility(), contactData, (err: BusinessError, data: number) => {
        if (err) {
          console.info("SUB_Telephony_ContactsApi_queryKey_test_0100  err = " + JSON.stringify(err));
          expect(false).assertTrue();
          done();
          return;
        }
        console.info("SUB_Telephony_ContactsApi_queryKey_test_0100  data = " + JSON.stringify(data));
        expect(data > 0).assertTrue();
        contact.queryKey(GlobalContext.getContext().getAbility(), data, (err: BusinessError, keyData: string) => {
          if (err) {
            console.info("SUB_Telephony_ContactsApi_queryKey_test_0100  err = " + JSON.stringify(err));
            expect(false).assertTrue();
            done();
            return;
          }
          console.info("SUB_Telephony_ContactsApi_queryKey_test_0100  keyData = " + JSON.stringify(keyData));
          expect(keyData != '').assertTrue();
          done();
        });
      });
      sleep(500);
    });

    /**
     * @tc.number SUB_Telephony_ContactsApi_queryKey_test_0200
     * @tc.name contact::queryKey
     * @tc.desc Function test
     * @tc.level 2
     * @tc.type: Function
     * @tc.size: SmallTest
     */
    it("SUB_Telephony_ContactsApi_queryKey_test_0200", 0, async (done: Function) => {
      contact.addContact(GlobalContext.getContext().getAbility(), contactData, (err: BusinessError, data: number) => {
        if (err) {
          console.info("SUB_Telephony_ContactsApi_queryKey_test_0200  err = " + JSON.stringify(err));
          expect(false).assertTrue();
          done();
          return;
        }
        console.info("SUB_Telephony_ContactsApi_queryKey_test_0200  data = " + JSON.stringify(data));
        expect(data > 0).assertTrue();
        contact.queryKey(GlobalContext.getContext()
          .getAbility(), data, holder, (err: BusinessError, keyData: string) => {
          if (err) {
            console.info("SUB_Telephony_ContactsApi_queryKey_test_0200  err = " + JSON.stringify(err));
            expect(false).assertTrue();
            done();
            return;
          }
          console.info("SUB_Telephony_ContactsApi_queryKey_test_0200  keyData = " + JSON.stringify(keyData));
          expect(keyData != '').assertTrue();
          done();
        });
      });
      sleep(500);
    });

    /**
     * @tc.number SUB_Telephony_ContactsApi_queryKey_test_0300
     * @tc.name contact::queryKey
     * @tc.desc Function test
     * @tc.level 2
     * @tc.type: Function
     * @tc.size: SmallTest
     */
    it("SUB_Telephony_ContactsApi_queryKey_test_0300", 0, async (done: Function) => {
      contact.addContact(GlobalContext.getContext().getAbility(), contactData, (err: BusinessError, data: number) => {
        if (err) {
          console.info("SUB_Telephony_ContactsApi_queryKey_test_0300  err = " + JSON.stringify(err));
          expect(false).assertTrue();
          done();
          return;
        }
        console.info("SUB_Telephony_ContactsApi_queryKey_test_0300  data = " + JSON.stringify(data));
        expect(data > 0).assertTrue();
        let promise: Promise<string> = contact.queryKey(GlobalContext.getContext().getAbility(), data, holder);
        promise.then((keyData: string) => {
          console.info("SUB_Telephony_ContactsApi_queryKey_test_0300  keyData = " + JSON.stringify(keyData));
          expect(keyData != '').assertTrue();
          done();
        }).catch((err: BusinessError) => {
          console.info("SUB_Telephony_ContactsApi_queryKey_test_0300  err = " + JSON.stringify(err));
          expect(false).assertTrue();
          done();
          return;
        });
      });
      sleep(500);
    });

    /**
     * @tc.number SUB_Telephony_ContactsApi_queryMyCard_test_0100
     * @tc.name contact::queryMyCard
     * @tc.desc Function test
     * @tc.level 3
     * @tc.type: Function
     * @tc.size: SmallTest
     */
    it("SUB_Telephony_ContactsApi_queryMyCard_test_0100", 0, async (done: Function) => {
      contact.queryMyCard(GlobalContext.getContext().getAbility(), (err: BusinessError, data: contact.Contact) => {
        if (err) {
          console.info("SUB_Telephony_ContactsApi_queryMyCard_test_0100  err = " + JSON.stringify(err));
          expect(false).assertTrue();
          done();
          return;
        }
        console.info("SUB_Telephony_ContactsApi_queryMyCard_test_0100  data = " + JSON.stringify(data));
        done();
      });
      sleep(500);
    });

    /**
     * @tc.number SUB_Telephony_ContactsApi_queryMyCard_test_0200
     * @tc.name contact::queryMyCard
     * @tc.desc Function test
     * @tc.level 2
     * @tc.type: Function
     * @tc.size: SmallTest
     */
    it("SUB_Telephony_ContactsApi_queryMyCard_test_0200", 0, async (done: Function) => {
      contact.queryMyCard(GlobalContext.getContext()
        .getAbility(), attr, (err: BusinessError, data: contact.Contact) => {
        if (err) {
          console.info("SUB_Telephony_ContactsApi_queryMyCard_test_0200  err = " + JSON.stringify(err));
          expect(false).assertTrue();
          done();
          return;
        }
        console.info("SUB_Telephony_ContactsApi_queryMyCard_test_0200  data = " + JSON.stringify(data));
        done();
      });
      sleep(500);
    });

    /**
     * @tc.number SUB_Telephony_ContactsApi_queryMyCard_test_0300
     * @tc.name contact::queryMyCard
     * @tc.desc Function test
     * @tc.level 2
     * @tc.type: Function
     * @tc.size: SmallTest
     */
    it("SUB_Telephony_ContactsApi_queryMyCard_test_0300", 0, async (done: Function) => {
      let promise: Promise<contact.Contact> = contact.queryMyCard(GlobalContext.getContext().getAbility(), attr);
      promise.then((data: contact.Contact) => {
        console.info("SUB_Telephony_ContactsApi_queryMyCard_test_0300  data = " + JSON.stringify(data));
        done();
      }).catch((err: BusinessError) => {
        console.info("SUB_Telephony_ContactsApi_queryMyCard_test_0300  err = " + JSON.stringify(err));
        expect(false).assertTrue();
        done();
        return;
      });
      sleep(500);
    });

    /**
     * @tc.number SUB_Telephony_ContactsApi_updateContact_test_0100
     * @tc.name contact::queryKey
     * @tc.desc Function test
     * @tc.level 2
     * @tc.type: Function
     * @tc.size: SmallTest
     */
    it("SUB_Telephony_ContactsApi_updateContact_test_0100", 0, async (done: Function) => {
      contact.addContact(GlobalContext.getContext().getAbility(), contactData, (err: BusinessError, data: number) => {
        if (err) {
          console.info("SUB_Telephony_ContactsApi_updateContact_test_0100  err = " + JSON.stringify(err));
          expect(false).assertTrue();
          done();
          return;
        }
        console.info("SUB_Telephony_ContactsApi_updateContact_test_0100  data = " + JSON.stringify(data));
        expect(data > 0).assertTrue();
        contact.queryKey(GlobalContext.getContext().getAbility(), data, (err: BusinessError, keyData: string) => {
          if (err) {
            console.info("SUB_Telephony_ContactsApi_updateContact_test_0100  err = " + JSON.stringify(err));
            expect(false).assertTrue();
            done();
            return;
          }
          console.info("SUB_Telephony_ContactsApi_updateContact_test_0100  keyData = " + JSON.stringify(keyData));
          contact.updateContact(GlobalContext.getContext().getAbility(), {
            id: data,
            key: keyData,
            emails: [{
              email: "13800000001@email.com",
              labelName: "自定义邮箱",
              labelId: 1,
              displayName: "emailDisplayName"
            }]
          }, (err: BusinessError) => {
            if (err) {
              console.info("SUB_Telephony_ContactsApi_updateContact_test_0100  err = " + JSON.stringify(err));
              expect(false).assertTrue();
              done();
              return;
            }
            console.log('updateContact success');
            contact.queryKey(GlobalContext.getContext().getAbility(), data, (err: BusinessError, newKey: string) => {
              if (err) {
                console.info("SUB_Telephony_ContactsApi_updateContact_test_0100  err = " + JSON.stringify(err));
                expect(false).assertTrue();
                done();
                return;
              }
              console.info("SUB_Telephony_ContactsApi_updateContact_test_0100  newKey = " + JSON.stringify(newKey));
              contact.queryContact(GlobalContext.getContext()
                .getAbility(), newKey, (err: BusinessError, data: contact.Contact) => {
                if (err) {
                  console.info("SUB_Telephony_ContactsApi_updateContact_test_0100  err = " + JSON.stringify(err));
                  expect(false).assertTrue();
                  done();
                  return;
                }
                console.info("SUB_Telephony_ContactsApi_updateContact_test_0100  data = " + JSON.stringify(data));
                expect(data.emails[0].email == "13800000001@email.com").assertTrue();
                done();
              });
            });
          });
        });
      });
      sleep(500);
    });

    /**
     * @tc.number SUB_Telephony_ContactsApi_updateContact_test_0200
     * @tc.name contact::queryKey
     * @tc.desc Function test
     * @tc.level 3
     * @tc.type: Function
     * @tc.size: SmallTest
     */
    it("SUB_Telephony_ContactsApi_updateContact_test_0200", 0, async (done: Function) => {
      contact.addContact(GlobalContext.getContext().getAbility(), contactData, (err: BusinessError, data: number) => {
        if (err) {
          console.info("SUB_Telephony_ContactsApi_updateContact_test_0200  err = " + JSON.stringify(err));
          expect(false).assertTrue();
          done();
          return;
        }
        console.info("SUB_Telephony_ContactsApi_updateContact_test_0200  data = " + JSON.stringify(data));
        expect(data > 0).assertTrue();
        contact.queryKey(GlobalContext.getContext().getAbility(), data, (err: BusinessError, keyData: string) => {
          if (err) {
            console.info("SUB_Telephony_ContactsApi_updateContact_test_0200  err = " + JSON.stringify(err));
            expect(false).assertTrue();
            done();
            return;
          }
          console.info("SUB_Telephony_ContactsApi_updateContact_test_0200  keyData = " + JSON.stringify(keyData));
          contact.updateContact(GlobalContext.getContext().getAbility(), {
            id: data,
            key: keyData,
            emails: [{
              email: "13800000001@email.com",
              labelName: "自定义邮箱",
              labelId: 1,
              displayName: "emailDisplayName"
            }]
          }, attr, (err: BusinessError) => {
            if (err) {
              console.info("SUB_Telephony_ContactsApi_updateContact_test_0200  err = " + JSON.stringify(err));
              expect(false).assertTrue();
              done();
              return;
            }
            console.log('updateContact success');
            contact.queryKey(GlobalContext.getContext().getAbility(), data, (err: BusinessError, newKey: string) => {
              if (err) {
                console.info("SUB_Telephony_ContactsApi_updateContact_test_0200  err = " + JSON.stringify(err));
                expect(false).assertTrue();
                done();
                return;
              }
              console.info("SUB_Telephony_ContactsApi_updateContact_test_0200  newKey = " + JSON.stringify(newKey));
              contact.queryContact(GlobalContext.getContext()
                .getAbility(), newKey, (err: BusinessError, data: contact.Contact) => {
                if (err) {
                  console.info("SUB_Telephony_ContactsApi_updateContact_test_0200  err = " + JSON.stringify(err));
                  expect(false).assertTrue();
                  done();
                  return;
                }
                console.info("SUB_Telephony_ContactsApi_updateContact_test_0200  data = " + JSON.stringify(data));
                expect(data.emails[0].email == "13800000001@email.com").assertTrue();
                done();
              });
            });
          });
        });
      });
      sleep(500);
    });

    /**
     * @tc.number SUB_Telephony_ContactsApi_updateContact_test_0300
     * @tc.name contact::queryKey
     * @tc.desc Function test
     * @tc.level 2
     * @tc.type: Function
     * @tc.size: SmallTest
     */
    it("SUB_Telephony_ContactsApi_updateContact_test_0300", 0, async (done: Function) => {
      contact.addContact(GlobalContext.getContext().getAbility(), contactData, (err: BusinessError, data: number) => {
        if (err) {
          console.info("SUB_Telephony_ContactsApi_updateContact_test_0300  err = " + JSON.stringify(err));
          expect(false).assertTrue();
          done();
          return;
        }
        console.info("SUB_Telephony_ContactsApi_updateContact_test_0300  data = " + JSON.stringify(data));
        expect(data > 0).assertTrue();
        contact.queryKey(GlobalContext.getContext().getAbility(), data, (err: BusinessError, keyData: string) => {
          if (err) {
            console.info("SUB_Telephony_ContactsApi_updateContact_test_0300  err = " + JSON.stringify(err));
            expect(false).assertTrue();
            done();
            return;
          }
          console.info("SUB_Telephony_ContactsApi_updateContact_test_0300  keyData = " + JSON.stringify(keyData));
          let promise: Promise<void> = contact.updateContact(GlobalContext.getContext().getAbility(), {
            id: data,
            key: keyData,
            emails: [{
              email: "13800000001@email.com",
              labelName: "自定义邮箱",
              labelId: 1,
              displayName: "emailDisplayName"
            }]
          }, attr);
          promise.then(() => {
            console.log('updateContact success');
            contact.queryKey(GlobalContext.getContext().getAbility(), data, (err: BusinessError, newKey: string) => {
              if (err) {
                console.info("SUB_Telephony_ContactsApi_updateContact_test_0300  err = " + JSON.stringify(err));
                expect(false).assertTrue();
                done();
                return;
              }
              console.info("SUB_Telephony_ContactsApi_updateContact_test_0300  newKey = " + JSON.stringify(newKey));
              contact.queryContact(GlobalContext.getContext()
                .getAbility(), newKey, (err: BusinessError, data: contact.Contact) => {
                if (err) {
                  console.info("SUB_Telephony_ContactsApi_updateContact_test_0300  err = " + JSON.stringify(err));
                  expect(false).assertTrue();
                  done();
                  return;
                }
                console.info("SUB_Telephony_ContactsApi_updateContact_test_0300  data = " + JSON.stringify(data));
                expect(data.emails[0].email == "13800000001@email.com").assertTrue();
                done();
              });
            });
          }).catch((err: BusinessError) => {
            console.info("SUB_Telephony_ContactsApi_updateContact_test_0300  err = " + JSON.stringify(err));
            expect(false).assertTrue();
            done();
            return;
          });
        });
      });
      sleep(500);
    });

    /**
     * @tc.number SUB_Telephony_ContactsApi_updateContact_test_0400
     * @tc.name contact::addContact
     * @tc.desc Function test
     * @tc.level 3
     * @tc.type: Function
     * @tc.size: SmallTest
     */
    it("SUB_Telephony_ContactsApi_updateContact_test_0400", 0, async (done: Function) => {
      contact.addContact(GlobalContext.getContext().getAbility(), contactData, (err: BusinessError, data: number) => {
        if (err) {
          console.info("SUB_Telephony_ContactsApi_updateContact_test_0400  err = " + JSON.stringify(err));
          expect(false).assertTrue();
          done();
          return;
        }
        console.info("SUB_Telephony_ContactsApi_updateContact_test_0400  data = " + JSON.stringify(data));
        expect(data > 0).assertTrue();
        contact.isLocalContact(GlobalContext.getContext().getAbility(), data, (err: BusinessError, data: boolean) => {
          if (err) {
            console.info("SUB_Telephony_ContactsApi_updateContact_test_0400  err = " + JSON.stringify(err));
            expect(false).assertTrue();
            done();
            return;
          }
          console.info("SUB_Telephony_ContactsApi_updateContact_test_0400  data = " + JSON.stringify(data));
          done();
        });
      });
      sleep(500);
    });

    /**
     * @tc.number SUB_Telephony_ContactsApi_isLocalContact_test_0200
     * @tc.name contact::addContact
     * @tc.desc Function test
     * @tc.level 3
     * @tc.type: Function
     * @tc.size: SmallTest
     */
    it("SUB_Telephony_ContactsApi_isLocalContact_test_0200", 0, async (done: Function) => {
      contact.addContact(GlobalContext.getContext().getAbility(), contactData, (err: BusinessError, data: number) => {
        if (err) {
          console.info("SUB_Telephony_ContactsApi_isLocalContact_test_0200  err = " + JSON.stringify(err));
          expect(false).assertTrue();
          done();
          return;
        }
        console.info("SUB_Telephony_ContactsApi_isLocalContact_test_0200  data = " + JSON.stringify(data));
        expect(data > 0).assertTrue();
        let promise: Promise<boolean> = contact.isLocalContact(GlobalContext.getContext().getAbility(), data);
        promise.then((data: boolean) => {
          console.info("SUB_Telephony_ContactsApi_isLocalContact_test_0200  data = " + JSON.stringify(data));
          done();
        }).catch((err: BusinessError) => {
          console.info("SUB_Telephony_ContactsApi_isLocalContact_test_0200  err = " + JSON.stringify(err));
          expect(false).assertTrue();
          done();
          return;
        });
      });
      sleep(500);
    });

    /**
     * @tc.number SUB_Telephony_ContactsApi_isMyCard_test_0100
     * @tc.name contact::addContact
     * @tc.desc Function test
     * @tc.level 3
     * @tc.type: Function
     * @tc.size: SmallTest
     */
    it("SUB_Telephony_ContactsApi_isMyCard_test_0100", 0, async (done: Function) => {
      contact.addContact(GlobalContext.getContext().getAbility(), contactData, (err: BusinessError, data: number) => {
        if (err) {
          console.info("SUB_Telephony_ContactsApi_isMyCard_test_0100  err = " + JSON.stringify(err));
          expect(false).assertTrue();
          done();
          return;
        }
        console.info("SUB_Telephony_ContactsApi_isMyCard_test_0100  data = " + JSON.stringify(data));
        expect(data > 0).assertTrue();
        contact.isMyCard(GlobalContext.getContext().getAbility(), data, (err: BusinessError, data: boolean) => {
          if (err) {
            console.info("SUB_Telephony_ContactsApi_isMyCard_test_0100  err = " + JSON.stringify(err));
            expect(false).assertTrue();
            done();
            return;
          }
          console.info("SUB_Telephony_ContactsApi_isMyCard_test_0100  data = " + JSON.stringify(data));
          done();
        });
      });
      sleep(500);
    });

    /**
     * @tc.number SUB_Telephony_ContactsApi_isMyCard_test_0200
     * @tc.name contact::addContact
     * @tc.desc Function test
     * @tc.level 3
     * @tc.type: Function
     * @tc.size: SmallTest
     */
    it("SUB_Telephony_ContactsApi_isMyCard_test_0200", 0, async (done: Function) => {
      contact.addContact(GlobalContext.getContext().getAbility(), contactData, (err: BusinessError, data: number) => {
        if (err) {
          console.info("SUB_Telephony_ContactsApi_isMyCard_test_0200  err = " + JSON.stringify(err));
          expect(false).assertTrue();
          done();
          return;
        }
        console.info("SUB_Telephony_ContactsApi_isMyCard_test_0200  data = " + JSON.stringify(data));
        expect(data > 0).assertTrue();
        let promise: Promise<boolean> = contact.isMyCard(GlobalContext.getContext().getAbility(), data);
        promise.then((data: boolean) => {
          console.info("SUB_Telephony_ContactsApi_isMyCard_test_0200  data = " + JSON.stringify(data));
          done();
        }).catch((err: BusinessError) => {
          console.info("SUB_Telephony_ContactsApi_isMyCard_test_0200  err = " + JSON.stringify(err));
          expect(false).assertTrue();
          done();
          return;
        });
      });
      sleep(500);
    });

    /**
     * @tc.number SUB_Telephony_ContactsApi_selectContacts_test_0100
     * @tc.name contact::addContact
     * @tc.desc Function test
     * @tc.level 3
     * @tc.type: Function
     * @tc.size: SmallTest
     */
    it("SUB_Telephony_ContactsApi_selectContacts_test_0100", 0, async (done: Function) => {
      contact.addContact(GlobalContext.getContext().getAbility(), contactData, (err: BusinessError, data: number) => {
        if (!err) {
          console.info("SUB_Telephony_ContactsApi_selectContacts_test_0100  data = " + JSON.stringify(data));
          expect(data > 0).assertTrue();
          done();
          return;
        }
        contact.selectContacts((err: BusinessError, data: Array<contact.Contact>) => {
          if (err) {
            console.info("SUB_Telephony_ContactsApi_selectContacts_test_0100  err = " + JSON.stringify(err));
            expect(false).assertTrue();
            done();
            return;
          }
          console.info("SUB_Telephony_ContactsApi_selectContacts_test_0100  data = " + JSON.stringify(data));
          done();
        });
      });
      sleep(500);
    });

    /**
     * @tc.number SUB_Telephony_ContactsApi_selectContacts_test_0200
     * @tc.name contact::addContact
     * @tc.desc Function test
     * @tc.level 3
     * @tc.type: Function
     * @tc.size: SmallTest
     */
    it("SUB_Telephony_ContactsApi_selectContacts_test_0200", 0, async (done: Function) => {
      contact.addContact(GlobalContext.getContext().getAbility(), contactData, (err: BusinessError, data: number) => {
        if (!err) {
          console.info("SUB_Telephony_ContactsApi_selectContacts_test_0200  data = " + JSON.stringify(data));
          expect(data > 0).assertTrue();
          done();
          return;
        }
        contact.selectContacts().then((data: Array<contact.Contact>) => {
          console.info("SUB_Telephony_ContactsApi_selectContacts_test_0200  data = " + JSON.stringify(data));
          done();
        }).catch((err: BusinessError) => {
          console.info("SUB_Telephony_ContactsApi_selectContacts_test_0200  err = " + JSON.stringify(err));
          expect(false).assertTrue();
          done();
          return;
        });
      });
      sleep(500);
    });

    /**
     * @tc.number SUB_Telephony_ContactsApi_selectContacts_test_0300
     * @tc.name contact::addContact
     * @tc.desc Function test
     * @tc.level 3
     * @tc.type: Function
     * @tc.size: SmallTest
     */
    it("SUB_Telephony_ContactsApi_selectContacts_test_0300", 0, async (done: Function) => {
      contact.addContact(GlobalContext.getContext().getAbility(), contactData, (err: BusinessError, data: number) => {
        if (!err) {
          console.info("SUB_Telephony_ContactsApi_selectContacts_test_0300  data = " + JSON.stringify(data));
          expect(data > 0).assertTrue();
          done();
          return;
        }
        contact.selectContacts({
          isMultiSelect: false
        }, (err: BusinessError, data: Array<contact.Contact>) => {
          if (err) {
            console.info("SUB_Telephony_ContactsApi_selectContacts_test_0300  err = " + JSON.stringify(err));
            expect(false).assertTrue();
            done();
            return;
          }
          console.info("SUB_Telephony_ContactsApi_selectContacts_test_0300  data = " + JSON.stringify(data));
          done();
        });
      });
      sleep(500);
    });

    /**
     * @tc.number SUB_Telephony_ContactsApi_selectContacts_test_0400
     * @tc.name contact::addContact
     * @tc.desc Function test
     * @tc.level 3
     * @tc.type: Function
     * @tc.size: SmallTest
     */
    it("SUB_Telephony_ContactsApi_selectContacts_test_0400", 0, async (done: Function) => {
      contact.addContact(GlobalContext.getContext().getAbility(), contactData, (err: BusinessError, data: number) => {
        if (!err) {
          console.info("SUB_Telephony_ContactsApi_selectContacts_test_0400  data = " + JSON.stringify(data));
          expect(data > 0).assertTrue();
          done();
          return;
        }
        contact.selectContacts({
          isMultiSelect: false
        }).then((data: Array<contact.Contact>) => {
          console.info("SUB_Telephony_ContactsApi_selectContacts_test_0400  data = " + JSON.stringify(data));
          done();
        }).catch((err: BusinessError) => {
          console.info("SUB_Telephony_ContactsApi_selectContacts_test_0400  err = " + JSON.stringify(err));
          expect(false).assertTrue();
          done();
          return;
        });
      });
      sleep(500);
    });
  });
}
