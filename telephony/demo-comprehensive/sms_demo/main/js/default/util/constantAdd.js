/*
 * Copyright (C) 2021 Huawei Device Co., Ltd.
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

export const smsState = [
  {index:0,id:1,text:'未读',eText:'unread',pduArrs:[
    {value:'240D91689141468496F600001270721142432302B319',text:'33',img:'./common/images/select.png',id:'item001'},
    {value:'240D91689141468496F600001270721174322302B91C',text:'99',img:'./common/images/select.png',id:'item002'}]},
  {index:1,id:2,text:'已读',eText:'read',pduArrs:[
    {value:'240D91689141468496F600001270721142432302B319',text:'33',img:'./common/images/select.png',id:'item003'},
    {value:'240D91689141468496F600001270721174322302B91C',text:'99',img:'./common/images/select.png',id:'item004'}]},
  {index:2,id:3,text:'未发送',eText:'unsent',pduArrs:[
    {value:'01000D91683163502174F300080A4F60597DFF0C4E2D56FD',text:'你好,中国',img:'./common/images/select.png',id:'item005'},
    {value:'01000D91683163502174F300080E672A53D19001768472B660017801',text:'未发送的状态码',img:'./common/images/select.png',id:'item006'}]},
  {index:3,id:4,text:'已发送',eText:'send',pduArrs:[
  {value:'01000D91683163802174F30008044E2D56FD',text:'中国',img:'./common/images/select.png',id:'item007'},
  {value:'01000D91683163802174F300080A76AE76AE662F53EA732B',text:'皮皮是只猫',img:'./common/images/select.png',id:'item008'}]}
]

export const smsFormat = {
  1: '3GPP',
  2: '3GPP2'
}