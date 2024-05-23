import samplingOptionsTest from './SamplingOptions.test';
import canvasTest from './Canvas.test';
import maskFilterTest from './MaskFilter.test';
import pathEffectTest from './PathEffect.test';
import shadowLayerTest from './ShadowLayer.test';
import colorFilterTest from './ColorFilter.test';
import penTest from './Pen.test';
import brushTest from './Brush.test';
import fontTest from './Font.test';

export default function testsuite() {
  samplingOptionsTest();
  canvasTest();
  maskFilterTest();
  pathEffectTest();
  shadowLayerTest();
  colorFilterTest();
  penTest();
  brushTest();
}