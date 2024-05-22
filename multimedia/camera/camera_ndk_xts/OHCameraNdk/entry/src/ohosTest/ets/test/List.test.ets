import CameraManagerTest from './CameraManager.test';
import CameraInputTest from './CameraInput.test';
import SessionTest from './Session.test';
import SessionTest2 from './Session22.test';
import VideoTest from './Video.test';
import PhotoTest from './PhotoTest.test';
import Demo from './Demo1.test';

export default function testsuite() {
  CameraManagerTest();
  CameraInputTest();
  SessionTest();
  SessionTest2();
  VideoTest();
  PhotoTest();
  Demo();
}