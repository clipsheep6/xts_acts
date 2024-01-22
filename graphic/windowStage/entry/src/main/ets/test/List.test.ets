/*
 * Copyright (c) 2021 Huawei Device Co., Ltd.
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
import windowPromiseTest from './windowPromise.test'
import windowCallbackTest from './windowCallback.test'
import windowRefactorInterfaceTest from './windowRefactorInterface.test'
import displayAndWindowRefactorInterfaceTest from './displayAndWindowRefactorInterface.test'
import parameterVerificationIsOptional from './parameterVerificationIsOptional.test'
import windowRichScene from './windowRichScene.test'
import pipWindowTest from './pipwindow.test'
import GlobalContext from '../test/GlobalContext';
import ohosWindow from '@ohos.window';
import Ability from '@ohos.app.ability.Ability'

export default function testsuite() {
  let abilityContext: Context = GlobalContext.getContext().getObject("abilityContext") as Context
  let windowStage:ohosWindow.WindowStage =  GlobalContext.getContext().getObject("windowStage") as ohosWindow.WindowStage
  let abilityStorage:LocalStorage = GlobalContext.getContext().getObject("abilityStorage") as LocalStorage
  parameterVerificationIsOptional(abilityContext,windowStage,abilityStorage);
  windowCallbackTest(abilityContext,windowStage,abilityStorage);
  windowPromiseTest(abilityContext,windowStage,abilityStorage);
  windowRefactorInterfaceTest(abilityContext,windowStage,abilityStorage)
  displayAndWindowRefactorInterfaceTest(abilityContext,windowStage,abilityStorage)
  windowRichScene(abilityContext,windowStage,abilityStorage)
  pipWindowTest(abilityContext)
  interfaceSupportSessionManagerTest(globalThis.abilityContext,globalThis.windowStage,globalThis.abilityStorage)
}