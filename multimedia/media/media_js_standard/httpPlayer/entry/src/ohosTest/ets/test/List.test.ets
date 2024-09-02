import hy_HttpPlayerCompatibilityTesttest from './HttpPlayerCompatibilityTest.test'

import hy_HttpPlayerFuncPromiseTesttest from './HttpPlayerFuncPromiseTest.test'

export default function testsuite() {
    hy_HttpPlayerCompatibilityTesttest()
    hy_HttpPlayerFuncPromiseTesttest()
}