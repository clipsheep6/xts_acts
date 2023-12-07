import { B2PolygonShape } from './Collision/Shapes/b2Shape';
import { addEqual, B2Vec2 } from './Common/b2Math';
import { B2BodyDef, B2BodyType } from './Dynamics/b2Body';
import { B2FixtureDef } from './Dynamics/b2Fixture';
import { B2World } from './Dynamics/b2World';

/*
 * @State
 */
class Benchmark {
  /*
   * @Benchmark
   */
  benchmarkRun(): void {
    let loop_120: number = 120;
    let multiple_1000: number = 1000.0;
    let start = ArkTools.timeInUs()/multiple_1000;
    for (let i = 0; i < loop_120; i++) {
      this.runIteration();
    }
    let end = ArkTools.timeInUs()/multiple_1000;
    print('box2d: ms = ' + (end - start));
  }

  runIteration(): void {
    this.runBox2D();
  }

  runBox2D(): void {
    let times: number = 60;
    let second: number = 1;
    let fps: number = second / times;
    let loop_20: number = 20;
    let velocityIterations: number = 10;
    let positionIterations: number = 3;
    let world = this.makeNewWorld();
    for (let i = 0; i < loop_20; i++) {
      world.step(fps, velocityIterations, positionIterations);
      // log('position_y = :' + world.m_bodyList?.position.y);
    }
  }

  /*
   * @Setup
   */
  makeNewWorld(): B2World {
    let loop_5: number = 5;
    let loop_10: number = 10;
    let density: number = 5.0;
    let x_x: number = -7.0;
    let x_y: number = 0.75;

    let gravity_y: number = -10.0;
    let zero: number = 0.0;
    let edge_v1_x: number = -40.0;
    let edge_v2_x: number = 40.0;
    let deltaX_x: number = 0.5625;
    let deltaX_y: number = 1;
    let deltaY_x: number = 1.125;
    let gravity = new B2Vec2(zero, gravity_y);
    let world = new B2World(gravity);

    let shape = new B2PolygonShape();
    shape.setAsEdge(new B2Vec2(edge_v1_x, zero), new B2Vec2(edge_v2_x, zero));
    shape.radius = 0;

    let fd = new B2FixtureDef();
    fd.density = 0.0;
    fd.shape = shape;

    let bd = new B2BodyDef();
    bd.type = B2BodyType.staticBody;
    let ground = world.createBody(bd);
    ground.createFixture(fd);
    let a: number = 0.5;
    let shape2 = new B2PolygonShape();
    shape2.setAsBox(a, a);
    shape2.radius = 0.0;
    let x = new B2Vec2(x_x, x_y);
    let y = new B2Vec2();

    let deltaX = new B2Vec2(deltaX_x, deltaX_y);
    let deltaY = new B2Vec2(deltaY_x, zero);
    for (let i = 0; i < loop_10; i++) {
      y.set(x.x, x.y);
      for (let j = 0; j < loop_5; j++) {
        let fd = new B2FixtureDef();
        fd.density = density;
        fd.shape = shape2;
        let bd = new B2BodyDef();
        bd.type = B2BodyType.dynamicBody;
        bd.position.set(y.x, y.y);
        let body = world.createBody(bd);
        body.createFixture(fd);
        addEqual(y, deltaY);
      }
      addEqual(x, deltaX);
    }
    return world;
  }
}

new Benchmark().benchmarkRun();

let debug: boolean = false;
function log(msg: string): void {
  if (debug) {
    print(msg);
  }
}

declare interface ArkTools {
    timeInUs(args: number): number;
}
