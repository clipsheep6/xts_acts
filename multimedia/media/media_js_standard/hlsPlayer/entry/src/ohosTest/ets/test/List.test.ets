import hy_VideoPlayerHLSTesttest from './VideoPlayerHLSTest.test'

import hy_VideoPlayerHLSBitrateTesttest from './VideoPlayerHLSBitrateTest.test'

import hy_VideoPlayerHLSSeekTesttest from './VideoPlayerHLSSeekTest.test'

import hy_AudioPlayerHLSTesttest from './AudioPlayerHLSTest.test'
export default function testsuite() {
    hy_VideoPlayerHLSTesttest()
    hy_VideoPlayerHLSBitrateTesttest()
    hy_VideoPlayerHLSSeekTesttest()
    hy_AudioPlayerHLSTesttest()
}