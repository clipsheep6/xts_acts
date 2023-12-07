import { B2RayCastInput } from '../Collision/b2Collision';
import { B2FixtureProxy } from '../Dynamics/b2Fixture';
interface B2QueryWrapper {
  queryCallback(proxyId: number): boolean;
}
interface B2RayCastWrapper {
  rayCastCallback(input: B2RayCastInput, proxyId: number): number;
}
interface B2BroadPhaseWrapper {
  addPair(proxyUserDataA: B2FixtureProxy, proxyUserDataB: B2FixtureProxy);
}

export { B2QueryWrapper, B2BroadPhaseWrapper, B2RayCastWrapper };
