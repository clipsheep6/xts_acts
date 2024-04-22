import imageJpegPackeExifTest from './ImageJpegPackeExif.test';
import imagePngPackeExifTest from './ImagePngPackeExif.test';
import imageWebpPackeExifTest from './ImageWebpPackeExif.test';

export default function testsuite() {
  imageJpegPackeExifTest();
  imagePngPackeExifTest();
  imageWebpPackeExifTest();
}