/**
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
import XComponentNodeChageJsSuit from './XComponentTest/XComponentNodeChageJsSuit.test';

import videoJsunit from './video/VideoJsunit.test';
import videoJsunit2 from './video/VideoJsunit2.test';

import videoOnFullscreenChangeJsunit from './video/video.test';
import xcomponentGetXComponentContextJsunit from './XComponentTest/xcomponent.test';

import VideoOperateTest from './video/VideoOperate.test';
import VideoOperateTest1 from './video/VideoOperate1.test';
import VideoOperateTest2 from './video/VideoOperate2.test';
import VideoOperateTest2R from './video/VideoOperate2R.test';
import VideoOperateTest3 from './video/VideoOperate3.test';
import VideoOperateTest4 from './video/VideoOperate4.test';
import VideoOperateTest4Loop from './video/VideoOperate4Loop.test';
import VideoOperateTest5 from './video/VideoOperate5.test';
import VideoOperateTest6 from './video/VideoOperate6.test';
import VideoOperateTest7 from './video/VideoOperate7.test';

import VideoOperateTest8E1 from './video1/VideoOperate8E1.test';
import VideoOperateTest8E2 from './video1/VideoOperate8E2.test';
import VideoOperateTest8E075 from './video1/VideoOperate8E075.test';
import VideoOperateTest8E125 from './video1/VideoOperate8E125.test';
import VideoOperateTest8E175 from './video1/VideoOperate8E175.test';
import VideoOperateTest8SN1 from './video1/VideoOperate8SN1.test';
import VideoOperateTest8S1 from './video1/VideoOperate8S1.test';
import VideoOperateTest8S3 from './video1/VideoOperate8S3.test';
import VideoOperateTest8S12gf from './video1/VideoOperate8S12gf.test';
import VideoOperateTest8S075 from './video1/VideoOperate8S075.test';
import VideoOperateTest8S125 from './video1/VideoOperate8S125.test';
import VideoOperateTest8S175 from './video1/VideoOperate8S175.test';
import VideoOperateTest8N1 from './video1/VideoOperate8N1.test';
import VideoOperateTest8NN1 from './video1/VideoOperate8NN1.test';
import VideoOperateTest8N2 from './video1/VideoOperate8N2.test';
import VideoOperateTest8N075 from './video1/VideoOperate8N075.test';
import VideoOperateTest8N125 from './video1/VideoOperate8N125.test';
import VideoOperateTest8N175 from './video1/VideoOperate8N175.test';
import VideoOperateTest8NotSet from './video1/VideoOperate8NotSet.test';
import VideoOperate9LongClick from './video1/VideoOperate9LongClick.test';
import VideoOperate9LongClick2 from './video1/VideoOperate9LongClick2.test';

import VideoOperateTest9 from './video2/VideoOperate9.test';
import VideoOperateTest10 from './video2/VideoOperate10.test';
import VideoOperateTest11 from './video2/VideoOperate11.test';
import VideoOperateTest12 from './video2/VideoOperate12.test';
import VideoOperateTest13 from './video2/VideoOperate13.test';
import VideoOperateTest14 from './video2/VideoOperate14.test';
import VideoOperateTest15 from './video2/VideoOperate15.test';
import VideoOperateTest16 from './video2/VideoOperate16.test';
import VideoOperateTest17 from './video2/VideoOperate17.test';
import VideoOperateTest18 from './video2/VideoOperate18.test';
import VideoOperateTest19 from './video2/VideoOperate19.test';
import VideoOperateTest20 from './video2/VideoOperate20.test';
import VideoOperateTest21 from './video3/VideoOperate21.test';
import VideoOperate22Focus from './video3/VideoOperate22Focus.test';
import VideoOperate23Slider from './video3/VideoOperate23Slider.test';
import VideoOperate24SliderAudio from './video3/VideoOperate24SliderAudio.test';
import VideoOperate25objectFit from './video3/VideoOperate25objectFit.test';
import VideoOperate26ScreenRotation from './video3/VideoOperate26ScreenRotation.test';
import VideoOperate26ScreenRotation2 from './video3/VideoOperate26ScreenRotation2.test';
import VideoOperate26ScreenRotation3 from './video3/VideoOperate26ScreenRotation3.test';
import VideoOperate27Modifier from './video3/VideoOperate27Modifier.test';
import VideoOperate28Modifier from './video3/VideoOperate28Modifier.test';
import VideoOperate29Modifier from './video3/VideoOperate29Modifier.test';
import VideoOperate30Modifier from './video3/VideoOperate30Modifier.test';
import VideoOperate31Modifier from './video3/VideoOperate31Modifier.test';

import IA1durationModifier from './ImageAnimator/IA1durationModifier.test';
import IA2fillModeModifier from './ImageAnimator/IA2fillModeModifier.test';
import IA3fixedSizeModifier from './ImageAnimator/IA3fixedSizeModifier.test';
import IA4imagesModifier from './ImageAnimator/IA4imagesModifier.test';
import IA5iterationsModifier from './ImageAnimator/IA5iterationsModifier.test';
import IA6reverseModifier from './ImageAnimator/IA6reverseModifier.test';
import IA7stateModifier from './ImageAnimator/IA7stateModifier.test';
import IA8duration1ItemSet from './ImageAnimator/IA8duration1ItemSet.test';
import IA8duration2DynamicSet from './ImageAnimator/IA8duration2DynamicSet.test';
import IA8duration3SetZero from './ImageAnimator/IA8duration3SetZero.test';
import IA8duration4SetDefault from './ImageAnimator/IA8duration4SetDefault.test';
import IA9iterations1N1 from './ImageAnimator/IA9iterations1N1.test';
import IA9iterations1P10 from './ImageAnimator/IA9iterations1P10.test';
import IA9iterations1P1 from './ImageAnimator/IA9iterations1P1.test';

export default function testsuite() {
  XComponentNodeChageJsSuit()

  videoJsunit();
  videoJsunit2();
  videoOnFullscreenChangeJsunit();
  xcomponentGetXComponentContextJsunit();

  VideoOperateTest();
  VideoOperateTest1();
  VideoOperateTest2();
  VideoOperateTest2R();
  VideoOperateTest3();
  VideoOperateTest4();
  VideoOperateTest4Loop();
  VideoOperateTest5();
  VideoOperateTest6();
  VideoOperateTest7();

  VideoOperateTest8E1();
  VideoOperateTest8E2();
  VideoOperateTest8E075();
  VideoOperateTest8E125();
  VideoOperateTest8E175();
  VideoOperateTest8SN1();
  VideoOperateTest8S1();
  VideoOperateTest8S3();
  VideoOperateTest8S12gf();
  VideoOperateTest8S075();
  VideoOperateTest8S125();
  VideoOperateTest8S175();
  VideoOperateTest8N1();
  VideoOperateTest8NN1();
  VideoOperateTest8N2();
  VideoOperateTest8N075();
  VideoOperateTest8N125();
  VideoOperateTest8N175();
  VideoOperateTest8NotSet();
  VideoOperate9LongClick();
  VideoOperate9LongClick2();

  VideoOperateTest9();
  VideoOperateTest10();
  VideoOperateTest11();
  VideoOperateTest12();
  VideoOperateTest13();
  VideoOperateTest14();
  VideoOperateTest15();
  VideoOperateTest16();
  VideoOperateTest17();
  VideoOperateTest18();
  VideoOperateTest19();
  VideoOperateTest20();
  VideoOperateTest21();
  VideoOperate22Focus();
  VideoOperate23Slider();
  VideoOperate24SliderAudio();
  VideoOperate25objectFit();
  VideoOperate26ScreenRotation();
  VideoOperate26ScreenRotation2();
  VideoOperate26ScreenRotation3();
  VideoOperate27Modifier();
  VideoOperate28Modifier();
  VideoOperate29Modifier();
  VideoOperate30Modifier();
  VideoOperate31Modifier();

  IA1durationModifier();
  IA2fillModeModifier();
  IA3fixedSizeModifier();
  IA4imagesModifier();
  IA5iterationsModifier();
  IA6reverseModifier();
  IA7stateModifier();
  IA8duration1ItemSet();
  IA8duration2DynamicSet();
  IA8duration3SetZero();
  IA8duration4SetDefault();
  IA9iterations1N1();
  IA9iterations1P10();
  IA9iterations1P1();
}