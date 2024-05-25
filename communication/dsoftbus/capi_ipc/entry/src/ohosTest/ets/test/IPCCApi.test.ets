/*
 * Copyright (c) 2024 Huawei Device Co., Ltd.
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

import { describe, it, expect } from '@ohos/hypium'
import hilog from '@ohos.hilog';
import iPCCApi from 'libIPCCApi.so'

export default function iPCCApiTest() {
  describe('IPCCApiTest', () => {

    /**
     * @tc.number     : SUB_COMMUNICATION_IPC_IPCSkeleton_JoinWorkThread_0100
     * @tc.name       : testOHIPCSkeletonJoinWorkThread001
     * @tc.desc       : test OH_IPCSkeleton_JoinWorkThread
     * @tc.size       : MediumTest
     * @tc.type       : Function
     * @tc.level      : Level 1
     */
    it('testOHIPCSkeletonJoinWorkThread001', 0, async (done: Function) => {
      let result: number = iPCCApi.oHIPCSkeletonJoinWorkThread();
      expect(result).assertEqual(0);
      done();
    });

    /**
     * @tc.number     : SUB_COMMUNICATION_IPC_IPCSkeleton_StopWorkThread_0100
     * @tc.name       : testOHIPCSkeletonStopWorkThread001
     * @tc.desc       : test OH_IPCSkeleton_StopWorkThread
     * @tc.size       : MediumTest
     * @tc.type       : Function
     * @tc.level      : Level 1
     */
    it('testOHIPCSkeletonStopWorkThread001', 0, async (done: Function) => {
      let result: number = iPCCApi.oHIPCSkeletonStopWorkThread();
      expect(result).assertEqual(0);
      done();
    });

    /**
     * @tc.number     : SUB_COMMUNICATION_IPC_IPCSkeleton_GetCallingTokenId_0100
     * @tc.name       : testOHIPCSkeletonGetCallingTokenId001
     * @tc.desc       : test OH_IPCSkeleton_GetCallingTokenId
     * @tc.size       : MediumTest
     * @tc.type       : Function
     * @tc.level      : Level 1
     */
    it('testOHIPCSkeletonGetCallingTokenId001', 0, async (done: Function) => {
      let result: number = iPCCApi.oHIPCSkeletonGetCallingTokenId();
      expect(result).assertEqual(0);
      done();
    });

    /**
     * @tc.number     : SUB_COMMUNICATION_IPC_IPCSkeleton_GetFirstTokenId_0100
     * @tc.name       : testOHIPCSkeletonGetFirstTokenId001
     * @tc.desc       : test OH_IPCSkeleton_GetFirstTokenId
     * @tc.size       : MediumTest
     * @tc.type       : Function
     * @tc.level      : Level 1
     */
    it('testOHIPCSkeletonGetFirstTokenId001', 0, async (done: Function) => {
      let result: number = iPCCApi.oHIPCSkeletonGetFirstTokenId();
      expect(result).assertEqual(0);
      done();
    });

    /**
     * @tc.number     : SUB_COMMUNICATION_IPC_IPCSkeleton_GetSelfTokenId_0100
     * @tc.name       : testOHIPCSkeletonGetSelfTokenId001
     * @tc.desc       : test OH_IPCSkeleton_GetSelfTokenId
     * @tc.size       : MediumTest
     * @tc.type       : Function
     * @tc.level      : Level 1
     */
    it('testOHIPCSkeletonGetSelfTokenId001', 0, async (done: Function) => {
      let result: number = iPCCApi.oHIPCSkeletonGetSelfTokenId();
      expect(result).assertEqual(0);
      done();
    });

    /**
     * @tc.number     : SUB_COMMUNICATION_IPC_IPCSkeleton_GetCallingPid_0100
     * @tc.name       : testOHIPCSkeletonGetCallingPid001
     * @tc.desc       : test OH_IPCSkeleton_GetCallingPid
     * @tc.size       : MediumTest
     * @tc.type       : Function
     * @tc.level      : Level 1
     */
    it('testOHIPCSkeletonGetCallingPid001', 0, async (done: Function) => {
      let result: number = iPCCApi.oHIPCSkeletonGetCallingPid();
      expect(result).assertEqual(0);
      done();
    });

    /**
     * @tc.number     : SUB_COMMUNICATION_IPC_IPCSkeleton_GetCallingUid_0100
     * @tc.name       : testOHIPCSkeletonGetCallingUid001
     * @tc.desc       : test OH_IPCSkeleton_GetCallingUid
     * @tc.size       : MediumTest
     * @tc.type       : Function
     * @tc.level      : Level 1
     */
    it('testOHIPCSkeletonGetCallingUid001', 0, async (done: Function) => {
      let result: number = iPCCApi.oHIPCSkeletonGetCallingUid();
      expect(result).assertEqual(0);
      done();
    });

    /**
     * @tc.number     : SUB_COMMUNICATION_IPC_IPCSkeleton_IsLocalCalling_0100
     * @tc.name       : testOHIPCSkeletonIsLocalCalling001
     * @tc.desc       : test OH_IPCSkeleton_IsLocalCalling
     * @tc.size       : MediumTest
     * @tc.type       : Function
     * @tc.level      : Level 1
     */
    it('testOHIPCSkeletonIsLocalCalling001', 0, async (done: Function) => {
      let result: number = iPCCApi.oHIPCSkeletonIsLocalCalling();
      expect(result).assertEqual(0);
      done();
    });

    /**
     * @tc.number     : SUB_COMMUNICATION_IPC_IPCSkeleton_SetMaxWorkThreadNum_0100
     * @tc.name       : testOHIPCSkeletonSetMaxWorkThreadNum001
     * @tc.desc       : test OH_IPCSkeleton_SetMaxWorkThreadNum
     * @tc.size       : MediumTest
     * @tc.type       : Function
     * @tc.level      : Level 1
     */
    it('testOHIPCSkeletonSetMaxWorkThreadNum001', 0, async (done: Function) => {
      let result: number = iPCCApi.oHIPCSkeletonSetMaxWorkThreadNum();
      expect(result).assertEqual(0);
      done();
    });

    /**
     * @tc.number     : SUB_COMMUNICATION_IPC_IPCSkeleton_ResetCallingIdentity_0100
     * @tc.name       : testOHIPCSkeletonResetCallingIdentity001
     * @tc.desc       : test OH_IPCSkeleton_ResetCallingIdentity
     * @tc.size       : MediumTest
     * @tc.type       : Function
     * @tc.level      : Level 1
     */
    it('testOHIPCSkeletonResetCallingIdentity001', 0, async (done: Function) => {
      let result: number = iPCCApi.oHIPCSkeletonResetCallingIdentity();
      expect(result).assertEqual(0);
      done();
    });

    /**
     * @tc.number     : SUB_COMMUNICATION_IPC_IPCSkeleton_SetCallingIdentity_0100
     * @tc.name       : testOHIPCSkeletonSetCallingIdentity001
     * @tc.desc       : test OH_IPCSkeleton_SetCallingIdentity
     * @tc.size       : MediumTest
     * @tc.type       : Function
     * @tc.level      : Level 1
     */
    it('testOHIPCSkeletonSetCallingIdentity001', 0, async (done: Function) => {
      let result: number = iPCCApi.oHIPCSkeletonSetCallingIdentity();
      expect(result).assertEqual(0);
      done();
    });

    /**
     * @tc.number     : SUB_COMMUNICATION_IPC_IPCSkeleton_IsHandlingTransaction_0100
     * @tc.name       : testOHIPCSkeletonIsHandlingTransaction001
     * @tc.desc       : test OH_IPCSkeleton_IsHandlingTransaction
     * @tc.size       : MediumTest
     * @tc.type       : Function
     * @tc.level      : Level 1
     */
    it('testOHIPCSkeletonIsHandlingTransaction001', 0, async (done: Function) => {
      let result: number = iPCCApi.oHIPCSkeletonIsHandlingTransaction();
      expect(result).assertEqual(0);
      done();
    });

    /**
     * @tc.number     : SUB_COMMUNICATION_IPC_IPCRemoteStub_Create_0100
     * @tc.name       : testOHIPCRemoteStubCreate001
     * @tc.desc       : test OH_IPCRemoteStub_Create
     * @tc.size       : MediumTest
     * @tc.type       : Function
     * @tc.level      : Level 1
     */
    it('testOHIPCRemoteStubCreate001', 0, async (done: Function) => {
      let result: number = iPCCApi.oHIPCRemoteStubCreate();
      expect(result).assertEqual(0);
      done();
    });

    /**
     * @tc.number     : SUB_COMMUNICATION_IPC_IPCRemoteStub_Destroy_0100
     * @tc.name       : testOHIPCRemoteStubDestroy001
     * @tc.desc       : test OH_IPCRemoteStub_Destroy
     * @tc.size       : MediumTest
     * @tc.type       : Function
     * @tc.level      : Level 1
     */
    it('testOHIPCRemoteStubDestroy001', 0, async (done: Function) => {
      let result: number = iPCCApi.oHIPCRemoteStubDestroy();
      expect(result).assertEqual(0);
      done();
    });

    /**
     * @tc.number     : SUB_COMMUNICATION_IPC_IPCRemoteProxy_Destroy_0100
     * @tc.name       : testOHIPCRemoteProxyDestroy001
     * @tc.desc       : test OH_IPCRemoteProxy_Destroy
     * @tc.size       : MediumTest
     * @tc.type       : Function
     * @tc.level      : Level 1
     */
    it('testOHIPCRemoteProxyDestroy001', 0, async (done: Function) => {
      let result: number = iPCCApi.oHIPCRemoteProxyDestroy();
      expect(result).assertEqual(0);
      done();
    });

    /**
     * @tc.number     : SUB_COMMUNICATION_IPC_IPCRemoteProxy_SendRequest_0100
     * @tc.name       : testOHIPCRemoteProxySendRequest001
     * @tc.desc       : test OH_IPCRemoteProxy_SendRequest
     * @tc.size       : MediumTest
     * @tc.type       : Function
     * @tc.level      : Level 1
     */
    it('testOHIPCRemoteProxySendRequest001', 0, async (done: Function) => {
      let result: number = iPCCApi.oHIPCRemoteProxySendRequest();
      expect(result).assertEqual(0);
      done();
    });

    /**
     * @tc.number     : SUB_COMMUNICATION_IPC_IPCRemoteProxy_GetInterfaceDescriptor_0100
     * @tc.name       : testOHIPCRemoteProxyGetInterfaceDescriptor001
     * @tc.desc       : test OH_IPCRemoteProxy_GetInterfaceDescriptor
     * @tc.size       : MediumTest
     * @tc.type       : Function
     * @tc.level      : Level 1
     */
    it('testOHIPCRemoteProxyGetInterfaceDescriptor001', 0, async (done: Function) => {
      let result: number = iPCCApi.oHIPCRemoteProxyGetInterfaceDescriptor();
      expect(result).assertEqual(0);
      done();
    });

    /**
     * @tc.number     : SUB_COMMUNICATION_IPC_IPCDeathRecipient_Create_0100
     * @tc.name       : testOHIPCDeathRecipientCreate001
     * @tc.desc       : test OH_IPCDeathRecipient_Create
     * @tc.size       : MediumTest
     * @tc.type       : Function
     * @tc.level      : Level 1
     */
    it('testOHIPCDeathRecipientCreate001', 0, async (done: Function) => {
      let result: number = iPCCApi.oHIPCDeathRecipientCreate();
      expect(result).assertEqual(0);
      done();
    });

    /**
     * @tc.number     : SUB_COMMUNICATION_IPC_IPCDeathRecipient_Destroy_0100
     * @tc.name       : testOHIPCDeathRecipientDestroy001
     * @tc.desc       : test OH_IPCDeathRecipient_Destroy
     * @tc.size       : MediumTest
     * @tc.type       : Function
     * @tc.level      : Level 1
     */
    it('testOHIPCDeathRecipientDestroy001', 0, async (done: Function) => {
      let result: number = iPCCApi.oHIPCDeathRecipientDestroy();
      expect(result).assertEqual(0);
      done();
    });

    /**
     * @tc.number     : SUB_COMMUNICATION_IPC_IPCRemoteProxy_AddDeathRecipient_0100
     * @tc.name       : testOHIPCRemoteProxyAddDeathRecipient001
     * @tc.desc       : test OH_IPCRemoteProxy_AddDeathRecipient
     * @tc.size       : MediumTest
     * @tc.type       : Function
     * @tc.level      : Level 1
     */
    it('testOHIPCRemoteProxyAddDeathRecipient001', 0, async (done: Function) => {
      let result: number = iPCCApi.oHIPCRemoteProxyAddDeathRecipient();
      expect(result).assertEqual(0);
      done();
    });

    /**
     * @tc.number     : SUB_COMMUNICATION_IPC_IPCRemoteProxy_RemoveDeathRecipient_0100
     * @tc.name       : testOHIPCRemoteProxyRemoveDeathRecipient001
     * @tc.desc       : test OH_IPCRemoteProxy_RemoveDeathRecipient
     * @tc.size       : MediumTest
     * @tc.type       : Function
     * @tc.level      : Level 1
     */
    it('testOHIPCRemoteProxyRemoveDeathRecipient001', 0, async (done: Function) => {
      let result: number = iPCCApi.oHIPCRemoteProxyRemoveDeathRecipient();
      expect(result).assertEqual(0);
      done();
    });

    /**
     * @tc.number     : SUB_COMMUNICATION_IPC_IPCRemoteProxy_IsRemoteDead_0100
     * @tc.name       : testOHIPCRemoteProxyIsRemoteDead001
     * @tc.desc       : test OH_IPCRemoteProxy_IsRemoteDead
     * @tc.size       : MediumTest
     * @tc.type       : Function
     * @tc.level      : Level 1
     */
    it('testOHIPCRemoteProxyIsRemoteDead001', 0, async (done: Function) => {
      let result: number = iPCCApi.oHIPCRemoteProxyIsRemoteDead();
      expect(result).assertEqual(0);
      done();
    });

    /**
     * @tc.number     : SUB_COMMUNICATION_IPC_IPCParcel_Create_0100
     * @tc.name       : testOHIPCParcelCreate001
     * @tc.desc       : test OH_IPCParcel_Create
     * @tc.size       : MediumTest
     * @tc.type       : Function
     * @tc.level      : Level 1
     */
    it('testOHIPCParcelCreate001', 0, async (done: Function) => {
      let result: number = iPCCApi.oHIPCParcelCreate();
      expect(result).assertEqual(0);
      done();
    });

    /**
     * @tc.number     : SUB_COMMUNICATION_IPC_IPCParcel_Destroy_0100
     * @tc.name       : testOHIPCParcelDestroy001
     * @tc.desc       : test OH_IPCParcel_Destroy
     * @tc.size       : MediumTest
     * @tc.type       : Function
     * @tc.level      : Level 1
     */
    it('testOHIPCParcelDestroy001', 0, async (done: Function) => {
      let result: number = iPCCApi.oHIPCParcelDestroy();
      expect(result).assertEqual(0);
      done();
    });

    /**
     * @tc.number     : SUB_COMMUNICATION_IPC_IPCParcel_GetDataSize_0100
     * @tc.name       : testOHIPCParcelGetDataSize001
     * @tc.desc       : test OH_IPCParcel_GetDataSize
     * @tc.size       : MediumTest
     * @tc.type       : Function
     * @tc.level      : Level 1
     */
    it('testOHIPCParcelGetDataSize001', 0, async (done: Function) => {
      let result: number = iPCCApi.oHIPCParcelGetDataSize();
      expect(result).assertEqual(0);
      done();
    });

    /**
     * @tc.number     : SUB_COMMUNICATION_IPC_IPCParcel_GetWritableBytes_0100
     * @tc.name       : testOHIPCParcelGetWritableBytes001
     * @tc.desc       : test OH_IPCParcel_GetWritableBytes
     * @tc.size       : MediumTest
     * @tc.type       : Function
     * @tc.level      : Level 1
     */
    it('testOHIPCParcelGetWritableBytes001', 0, async (done: Function) => {
      let result: number = iPCCApi.oHIPCParcelGetWritableBytes();
      expect(result).assertEqual(0);
      done();
    });

    /**
     * @tc.number     : SUB_COMMUNICATION_IPC_IPCParcel_GetReadableBytes_0100
     * @tc.name       : testOHIPCParcelGetReadableBytes001
     * @tc.desc       : test OH_IPCParcel_GetReadableBytes
     * @tc.size       : MediumTest
     * @tc.type       : Function
     * @tc.level      : Level 1
     */
    it('testOHIPCParcelGetReadableBytes001', 0, async (done: Function) => {
      let result: number = iPCCApi.oHIPCParcelGetReadableBytes();
      expect(result).assertEqual(0);
      done();
    });

    /**
     * @tc.number     : SUB_COMMUNICATION_IPC_IPCParcel_GetReadPosition_0100
     * @tc.name       : testOHIPCParcelGetReadPosition001
     * @tc.desc       : test OH_IPCParcel_GetReadPosition
     * @tc.size       : MediumTest
     * @tc.type       : Function
     * @tc.level      : Level 1
     */
    it('testOHIPCParcelGetReadPosition001', 0, async (done: Function) => {
      let result: number = iPCCApi.oHIPCParcelGetReadPosition();
      expect(result).assertEqual(0);
      done();
    });

    /**
     * @tc.number     : SUB_COMMUNICATION_IPC_IPCParcel_GetWritePosition_0100
     * @tc.name       : testOHIPCParcelGetWritePosition001
     * @tc.desc       : test OH_IPCParcel_GetWritePosition
     * @tc.size       : MediumTest
     * @tc.type       : Function
     * @tc.level      : Level 1
     */
    it('testOHIPCParcelGetWritePosition001', 0, async (done: Function) => {
      let result: number = iPCCApi.oHIPCParcelGetWritePosition();
      expect(result).assertEqual(0);
      done();
    });

    /**
     * @tc.number     : SUB_COMMUNICATION_IPC_IPCParcel_RewindReadPosition_0100
     * @tc.name       : testOHIPCParcelRewindReadPosition001
     * @tc.desc       : test OH_IPCParcel_RewindReadPosition
     * @tc.size       : MediumTest
     * @tc.type       : Function
     * @tc.level      : Level 1
     */
    it('testOHIPCParcelRewindReadPosition001', 0, async (done: Function) => {
      let result: number = iPCCApi.oHIPCParcelRewindReadPosition();
      expect(result).assertEqual(0);
      done();
    });

    /**
     * @tc.number     : SUB_COMMUNICATION_IPC_IPCParcel_RewindWritePosition_0100
     * @tc.name       : testOHIPCParcelRewindWritePosition001
     * @tc.desc       : test OH_IPCParcel_RewindWritePosition
     * @tc.size       : MediumTest
     * @tc.type       : Function
     * @tc.level      : Level 1
     */
    it('testOHIPCParcelRewindWritePosition001', 0, async (done: Function) => {
      let result: number = iPCCApi.oHIPCParcelRewindWritePosition();
      expect(result).assertEqual(0);
      done();
    });

    /**
     * @tc.number     : SUB_COMMUNICATION_IPC_IPCParcel_WriteInt8_0100
     * @tc.name       : testOHIPCParcelWriteInt8001
     * @tc.desc       : test OH_IPCParcel_WriteInt8
     * @tc.size       : MediumTest
     * @tc.type       : Function
     * @tc.level      : Level 1
     */
    it('testOHIPCParcelWriteInt8001', 0, async (done: Function) => {
      let result: number = iPCCApi.oHIPCParcelWriteInt8();
      expect(result).assertEqual(0);
      done();
    });

    /**
     * @tc.number     : SUB_COMMUNICATION_IPC_IPCParcel_ReadInt8_0100
     * @tc.name       : testOHIPCParcelReadInt8001
     * @tc.desc       : test OH_IPCParcel_ReadInt8
     * @tc.size       : MediumTest
     * @tc.type       : Function
     * @tc.level      : Level 1
     */
    it('testOHIPCParcelReadInt8001', 0, async (done: Function) => {
      let result: number = iPCCApi.oHIPCParcelReadInt8();
      expect(result).assertEqual(0);
      done();
    });

    /**
     * @tc.number     : SUB_COMMUNICATION_IPC_IPCParcel_WriteInt16_0100
     * @tc.name       : testOHIPCParcelWriteInt16001
     * @tc.desc       : test OH_IPCParcel_WriteInt16
     * @tc.size       : MediumTest
     * @tc.type       : Function
     * @tc.level      : Level 1
     */
    it('testOHIPCParcelWriteInt16001', 0, async (done: Function) => {
      let result: number = iPCCApi.oHIPCParcelWriteInt16();
      expect(result).assertEqual(0);
      done();
    });

    /**
     * @tc.number     : SUB_COMMUNICATION_IPC_IPCParcel_ReadInt16_0100
     * @tc.name       : testOHIPCParcelReadInt16001
     * @tc.desc       : test OH_IPCParcel_ReadInt16
     * @tc.size       : MediumTest
     * @tc.type       : Function
     * @tc.level      : Level 1
     */
    it('testOHIPCParcelReadInt16001', 0, async (done: Function) => {
      let result: number = iPCCApi.oHIPCParcelReadInt16();
      expect(result).assertEqual(0);
      done();
    });

    /**
     * @tc.number     : SUB_COMMUNICATION_IPC_IPCParcel_WriteInt32_0100
     * @tc.name       : testOHIPCParcelWriteInt32001
     * @tc.desc       : test OH_IPCParcel_WriteInt32
     * @tc.size       : MediumTest
     * @tc.type       : Function
     * @tc.level      : Level 1
     */
    it('testOHIPCParcelWriteInt32001', 0, async (done: Function) => {
      let result: number = iPCCApi.oHIPCParcelWriteInt32();
      expect(result).assertEqual(0);
      done();
    });

    /**
     * @tc.number     : SUB_COMMUNICATION_IPC_IPCParcel_ReadInt32_0100
     * @tc.name       : testOHIPCParcelReadInt32001
     * @tc.desc       : test OH_IPCParcel_ReadInt32
     * @tc.size       : MediumTest
     * @tc.type       : Function
     * @tc.level      : Level 1
     */
    it('testOHIPCParcelReadInt32001', 0, async (done: Function) => {
      let result: number = iPCCApi.oHIPCParcelReadInt32();
      expect(result).assertEqual(0);
      done();
    });

    /**
     * @tc.number     : SUB_COMMUNICATION_IPC_IPCParcel_WriteInt64_0100
     * @tc.name       : testOHIPCParcelWriteInt64001
     * @tc.desc       : test OH_IPCParcel_WriteInt64
     * @tc.size       : MediumTest
     * @tc.type       : Function
     * @tc.level      : Level 1
     */
    it('testOHIPCParcelWriteInt64001', 0, async (done: Function) => {
      let result: number = iPCCApi.oHIPCParcelWriteInt64();
      expect(result).assertEqual(0);
      done();
    });

    /**
     * @tc.number     : SUB_COMMUNICATION_IPC_IPCParcel_ReadInt64_0100
     * @tc.name       : testOHIPCParcelReadInt64001
     * @tc.desc       : test OH_IPCParcel_ReadInt64
     * @tc.size       : MediumTest
     * @tc.type       : Function
     * @tc.level      : Level 1
     */
    it('testOHIPCParcelReadInt64001', 0, async (done: Function) => {
      let result: number = iPCCApi.oHIPCParcelReadInt64();
      expect(result).assertEqual(0);
      done();
    });

    /**
     * @tc.number     : SUB_COMMUNICATION_IPC_IPCParcel_WriteFloat_0100
     * @tc.name       : testOHIPCParcelWriteFloat001
     * @tc.desc       : test OH_IPCParcel_WriteFloat
     * @tc.size       : MediumTest
     * @tc.type       : Function
     * @tc.level      : Level 1
     */
    it('testOHIPCParcelWriteFloat001', 0, async (done: Function) => {
      let result: number = iPCCApi.oHIPCParcelWriteFloat();
      expect(result).assertEqual(0);
      done();
    });

    /**
     * @tc.number     : SUB_COMMUNICATION_IPC_IPCParcel_ReadFloat_0100
     * @tc.name       : testOHIPCParcelReadFloat001
     * @tc.desc       : test OH_IPCParcel_ReadFloat
     * @tc.size       : MediumTest
     * @tc.type       : Function
     * @tc.level      : Level 1
     */
    it('testOHIPCParcelReadFloat001', 0, async (done: Function) => {
      let result: number = iPCCApi.oHIPCParcelReadFloat();
      expect(result).assertEqual(0);
      done();
    });

    /**
     * @tc.number     : SUB_COMMUNICATION_IPC_IPCParcel_WriteDouble_0100
     * @tc.name       : testOHIPCParcelWriteDouble001
     * @tc.desc       : test OH_IPCParcel_WriteDouble
     * @tc.size       : MediumTest
     * @tc.type       : Function
     * @tc.level      : Level 1
     */
    it('testOHIPCParcelWriteDouble001', 0, async (done: Function) => {
      let result: number = iPCCApi.oHIPCParcelWriteDouble();
      expect(result).assertEqual(0);
      done();
    });

    /**
     * @tc.number     : SUB_COMMUNICATION_IPC_IPCParcel_ReadDouble_0100
     * @tc.name       : testOHIPCParcelReadDouble001
     * @tc.desc       : test OH_IPCParcel_ReadDouble
     * @tc.size       : MediumTest
     * @tc.type       : Function
     * @tc.level      : Level 1
     */
    it('testOHIPCParcelReadDouble001', 0, async (done: Function) => {
      let result: number = iPCCApi.oHIPCParcelReadDouble();
      expect(result).assertEqual(0);
      done();
    });

    /**
     * @tc.number     : SUB_COMMUNICATION_IPC_IPCParcel_WriteString_0100
     * @tc.name       : testOHIPCParcelWriteString001
     * @tc.desc       : test OH_IPCParcel_WriteString
     * @tc.size       : MediumTest
     * @tc.type       : Function
     * @tc.level      : Level 1
     */
    it('testOHIPCParcelWriteString001', 0, async (done: Function) => {
      let result: number = iPCCApi.oHIPCParcelWriteString();
      expect(result).assertEqual(0);
      done();
    });

    /**
     * @tc.number     : SUB_COMMUNICATION_IPC_IPCParcel_ReadString_0100
     * @tc.name       : testOHIPCParcelReadString001
     * @tc.desc       : test OH_IPCParcel_ReadString
     * @tc.size       : MediumTest
     * @tc.type       : Function
     * @tc.level      : Level 1
     */
    it('testOHIPCParcelReadString001', 0, async (done: Function) => {
      let result: number = iPCCApi.oHIPCParcelReadString();
      expect(result).assertEqual(0);
      done();
    });

    /**
     * @tc.number     : SUB_COMMUNICATION_IPC_IPCParcel_WriteBuffer_0100
     * @tc.name       : testOHIPCParcelWriteBuffer001
     * @tc.desc       : test OH_IPCParcel_WriteBuffer
     * @tc.size       : MediumTest
     * @tc.type       : Function
     * @tc.level      : Level 1
     */
    it('testOHIPCParcelWriteBuffer001', 0, async (done: Function) => {
      let result: number = iPCCApi.oHIPCParcelWriteBuffer();
      expect(result).assertEqual(0);
      done();
    });

    /**
     * @tc.number     : SUB_COMMUNICATION_IPC_IPCParcel_ReadBuffer_0100
     * @tc.name       : testOHIPCParcelReadBuffer001
     * @tc.desc       : test OH_IPCParcel_ReadBuffer
     * @tc.size       : MediumTest
     * @tc.type       : Function
     * @tc.level      : Level 1
     */
    it('testOHIPCParcelReadBuffer001', 0, async (done: Function) => {
      let result: number = iPCCApi.oHIPCParcelReadBuffer();
      expect(result).assertEqual(0);
      done();
    });

    /**
     * @tc.number     : SUB_COMMUNICATION_IPC_IPCParcel_WriteRemoteStub_0100
     * @tc.name       : testOHIPCParcelWriteRemoteStub001
     * @tc.desc       : test OH_IPCParcel_WriteRemoteStub
     * @tc.size       : MediumTest
     * @tc.type       : Function
     * @tc.level      : Level 1
     */
    it('testOHIPCParcelWriteRemoteStub001', 0, async (done: Function) => {
      let result: number = iPCCApi.oHIPCParcelWriteRemoteStub();
      expect(result).assertEqual(0);
      done();
    });

    /**
     * @tc.number     : SUB_COMMUNICATION_IPC_IPCParcel_ReadRemoteStub_0100
     * @tc.name       : testOHIPCParcelReadRemoteStub001
     * @tc.desc       : test OH_IPCParcel_ReadRemoteStub
     * @tc.size       : MediumTest
     * @tc.type       : Function
     * @tc.level      : Level 1
     */
    it('testOHIPCParcelReadRemoteStub001', 0, async (done: Function) => {
      let result: number = iPCCApi.oHIPCParcelReadRemoteStub();
      expect(result).assertEqual(0);
      done();
    });

    /**
     * @tc.number     : SUB_COMMUNICATION_IPC_IPCParcel_WriteRemoteProxy_0100
     * @tc.name       : testOHIPCParcelWriteRemoteProxy001
     * @tc.desc       : test OH_IPCParcel_WriteRemoteProxy
     * @tc.size       : MediumTest
     * @tc.type       : Function
     * @tc.level      : Level 1
     */
    it('testOHIPCParcelWriteRemoteProxy001', 0, async (done: Function) => {
      let result: number = iPCCApi.oHIPCParcelWriteRemoteProxy();
      expect(result).assertEqual(0);
      done();
    });

    /**
     * @tc.number     : SUB_COMMUNICATION_IPC_IPCParcel_ReadRemoteProxy_0100
     * @tc.name       : testOHIPCParcelReadRemoteProxy001
     * @tc.desc       : test OH_IPCParcel_ReadRemoteProxy
     * @tc.size       : MediumTest
     * @tc.type       : Function
     * @tc.level      : Level 1
     */
    it('testOHIPCParcelReadRemoteProxy001', 0, async (done: Function) => {
      let result: number = iPCCApi.oHIPCParcelReadRemoteProxy();
      expect(result).assertEqual(0);
      done();
    });

    /**
     * @tc.number     : SUB_COMMUNICATION_IPC_IPCParcel_WriteFileDescriptor_0100
     * @tc.name       : testOHIPCParcelWriteFileDescriptor001
     * @tc.desc       : test OH_IPCParcel_WriteFileDescriptor
     * @tc.size       : MediumTest
     * @tc.type       : Function
     * @tc.level      : Level 1
     */
    it('testOHIPCParcelWriteFileDescriptor001', 0, async (done: Function) => {
      let result: number = iPCCApi.oHIPCParcelWriteFileDescriptor();
      expect(result).assertEqual(0);
      done();
    });

    /**
     * @tc.number     : SUB_COMMUNICATION_IPC_IPCParcel_ReadFileDescriptor_0100
     * @tc.name       : testOHIPCParcelReadFileDescriptor001
     * @tc.desc       : test OH_IPCParcel_ReadFileDescriptor
     * @tc.size       : MediumTest
     * @tc.type       : Function
     * @tc.level      : Level 1
     */
    it('testOHIPCParcelReadFileDescriptor001', 0, async (done: Function) => {
      let result: number = iPCCApi.oHIPCParcelReadFileDescriptor();
      expect(result).assertEqual(0);
      done();
    });

    /**
     * @tc.number     : SUB_COMMUNICATION_IPC_IPCParcel_Append_0100
     * @tc.name       : testOHIPCParcelAppend001
     * @tc.desc       : test OH_IPCParcel_Append
     * @tc.size       : MediumTest
     * @tc.type       : Function
     * @tc.level      : Level 1
     */
    it('testOHIPCParcelAppend001', 0, async (done: Function) => {
      let result: number = iPCCApi.oHIPCParcelAppend();
      expect(result).assertEqual(0);
      done();
    });

    /**
     * @tc.number     : SUB_COMMUNICATION_IPC_IPCParcel_WriteInterfaceToken_0100
     * @tc.name       : testOHIPCParcelWriteInterfaceToken001
     * @tc.desc       : test OH_IPCParcel_WriteInterfaceToken
     * @tc.size       : MediumTest
     * @tc.type       : Function
     * @tc.level      : Level 1
     */
    it('testOHIPCParcelWriteInterfaceToken001', 0, async (done: Function) => {
      let result: number = iPCCApi.oHIPCParcelWriteInterfaceToken();
      expect(result).assertEqual(0);
      done();
    });

    /**
     * @tc.number     : SUB_COMMUNICATION_IPC_IPCParcel_ReadInterfaceToken_0100
     * @tc.name       : testOHIPCParcelReadInterfaceToken001
     * @tc.desc       : test OH_IPCParcel_ReadInterfaceToken
     * @tc.size       : MediumTest
     * @tc.type       : Function
     * @tc.level      : Level 1
     */
    it('testOHIPCParcelReadInterfaceToken001', 0, async (done: Function) => {
      let result: number = iPCCApi.oHIPCParcelReadInterfaceToken();
      expect(result).assertEqual(0);
      done();
    });

  })

}