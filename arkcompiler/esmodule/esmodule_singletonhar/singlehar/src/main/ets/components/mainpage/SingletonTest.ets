
export class SingletonTest {
  static staticVar = 0;

  public  static staticAdd1(): number {
    SingletonTest.staticVar += 1;
    console.log("staticVar:", SingletonTest.staticVar)
    return SingletonTest.staticVar;
  }

  public instanceAdd1(): number {
    SingletonTest.staticVar += 1;
    return SingletonTest.staticVar;
  }
}