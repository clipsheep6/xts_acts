(function() {
  "use strict";
  Object.defineProperty(exports, "__esModule", {
    value: true
  });
  function t(t, i, s) {
    if ((i = e(i)) in t) {
      Object.defineProperty(t, i, {
        value: s,
        enumerable: true,
        configurable: true,
        writable: true
      });
    } else {
      t[i] = s;
    }
    return t;
  }
  function e(t) {
    var e = i(t, "string");
    return typeof e === "symbol" ? e : String(e);
  }
  function i(t, e) {
    if (typeof t !== "object" || t === null) {
      return t;
    }
    var i = t[Symbol.toPrimitive];
    if (i !== void 0) {
      var s = i.call(t, e || "default");
      if (typeof s !== "object") {
        return s;
      }
      throw new TypeError("@@toPrimitive must return a primitive value.");
    }
    return (e === "string" ? String : Number)(t);
  }
  class s {
    constructor() {
      this.id = "sysTestKit";
      this.index = 0;
    }
    static actionStart(t) {
      console.info(JSON.stringify(t));
      var e = "\n" + "OHOS_REPORT_ACTIONSTART: " + JSON.stringify(t) + "\n";
      s.print(e);
      console.info(t + " actionStart print success");
    }
    static actionEnd(t) {
      console.info(JSON.stringify(t));
      var e = "\n" + "OHOS_REPORT_ACTIONEND: " + JSON.stringify(t) + "\n";
      s.print(e);
      console.info(t + " actionEnd print success");
    }
    static async existKeyword(t, e) {
      if (!new RegExp(/^[a-zA-Z0-9]{1,}$/).test(t)) {
        throw new Error("keyword must contain more than one string, and only letters and numbers are supported.");
      }
      e = e || 4;
      let i = false;
      let s = "hilog -x | grep -i '" + t + "' | wc -l";
      await a(s, e).then((t => {
        i = t;
      }));
      return i;
    }
    static async print(t) {
      if ("printSync" in s.delegator) {
        console.debug(`printSync called ...`);
        s.delegator.printSync(t);
      } else {
        await s.delegator.print(t);
      }
    }
    static async getRealTime() {
      let t = (new Date).getTime();
      if (s.systemTime !== null && s.systemTime !== void 0) {
        await s.systemTime.getRealTime().then((e => {
          console.info(`systemTime.getRealTime success data: ${JSON.stringify(e)}`);
          t = e;
        })).catch((t => {
          console.error(`failed to systemTime.getRealTime because ${JSON.stringify(t)}`);
        }));
      }
      return t;
    }
  }
  t(s, "delegator", null);
  t(s, "systemTime", null);
  function a(t, e) {
    return new Promise(((i, a) => {
      s.delegator.executeShellCommand(t, e, ((t, e) => {
        console.info("existKeyword CallBack: err : " + JSON.stringify(t));
        console.info("existKeyword CallBack: data : " + JSON.stringify(e));
        i(parseInt(e.stdResult) > 3 ? true : false);
      }));
    }));
  }
  class n extends Error {
    constructor(t) {
      super();
      this.name = "AssertException";
      this.message = t;
    }
  }
  function c(t, e, i) {
    return new Promise((async (s, a) => {
      let n = null;
      if (!i) {
        n = setTimeout((() => {
          a(new Error("execute timeout " + e + "ms"));
        }), e);
      }
      try {
        await t();
      } catch (t) {
        a(t);
      }
      n !== null ? clearTimeout(n) : null;
      s();
    }));
  }
  function r(t, e, i) {
    return new Promise((async (s, a) => {
      let n = null;
      if (!i) {
        n = setTimeout((() => {
          a(new Error("execute timeout " + e + "ms"));
        }), e);
      }
      try {
        await t((function() {
          n !== null ? clearTimeout(n) : null;
          s();
        }));
      } catch (t) {
        n !== null ? clearTimeout(n) : null;
        a(t);
      }
    }));
  }
  function o(t, e, i, s) {
    return new Promise((async (a, n) => {
      let c = null;
      if (!s) {
        c = setTimeout((() => {
          n(new Error("execute timeout " + e + "ms"));
        }), e);
      }
      try {
        await t((function() {
          c !== null ? clearTimeout(c) : null;
          a();
        }), i);
      } catch (t) {
        c !== null ? clearTimeout(c) : null;
        n(t);
      }
    }));
  }
  function l(t, e) {
    let i = ((e || "").toString().replace(/((\/\/.*$)|(\/\*[\s\S]*?\*\/))/gm, "").match(/^(function)?\s*[^\(]*\(\s*([^\)]*)\)/m) || [ "", "", "" ])[2].split(",").map((t => t.replace(/^\s*(_?)(.+?)\1\s*$/, (t => t.split("=")[0].trim())))).filter(String);
    let s = e.length;
    let a;
    const n = t.getDefaultService("config");
    n.setSupportAsync(true);
    const l = +(n.timeout === void 0 ? 5e3 : n.timeout);
    const u = t.getServices("dataDriver") !== void 0 || n.getStress() > 1;
    switch (s) {
     case 0:
      a = function() {
        return c(e, l, u);
      };
      break;

     case 1:
      if (i[0] === "data") {
        a = function(t) {
          e(t);
        };
      } else {
        a = function() {
          return r(e, l, u);
        };
      }
      break;

     default:
      a = function(t) {
        return o(e, l, t, u);
      };
      break;
    }
    return a;
  }
  class u {
    constructor(t) {
      this.id = t.id;
      this.rootSuite = new u.Suite({});
      this.currentRunningSuite = this.rootSuite;
      this.suitesStack = [ this.rootSuite ];
    }
    describe(t, e) {
      const i = this.coreContext.getDefaultService("config");
      if (i.filterSuite(t)) {
        console.info("filter suite :" + t);
        return;
      }
      const s = new u.Suite({
        description: t
      });
      if (typeof this.coreContext.getServices("dataDriver") !== "undefined" && i["dryRun"] !== "true") {
        let e = this.coreContext.getServices("dataDriver").dataDriver.getSuiteStress(t);
        for (let t = 1; t < e; t++) {
          this.currentRunningSuite.childSuites.push(s);
        }
      }
      this.currentRunningSuite.childSuites.push(s);
      this.currentRunningSuite = s;
      this.suitesStack.push(s);
      e.call();
      let a = this.suitesStack.pop();
      if (this.suitesStack.length === 0) {
        this.currentRunningSuite = a;
        this.suitesStack.push(a);
      }
      if (this.suitesStack.length > 1) {
        this.currentRunningSuite = this.suitesStack.pop();
      } else {
        this.currentRunningSuite = this.suitesStack.pop();
        this.suitesStack.push(this.currentRunningSuite);
      }
    }
    beforeAll(t) {
      this.currentRunningSuite.beforeAll.push(l(this.coreContext, t));
    }
    beforeEach(t) {
      this.currentRunningSuite.beforeEach.push(l(this.coreContext, t));
    }
    afterAll(t) {
      this.currentRunningSuite.afterAll.push(l(this.coreContext, t));
    }
    afterEach(t) {
      this.currentRunningSuite.afterEach.push(l(this.coreContext, t));
    }
    getCurrentRunningSuite() {
      return this.currentRunningSuite;
    }
    setCurrentRunningSuite(t) {
      this.currentRunningSuite = t;
    }
    traversalResults(t, e, i) {
      if (t.childSuites.length === 0 && t.specs.length === 0) {
        return e;
      }
      if (t.specs.length > 0) {
        for (const s of t.specs) {
          e.total++;
          if (!i || !(e.error > 0 || e.failure > 0)) {
            if (s.error) {
              e.error++;
            } else if (s.result.failExpects.length > 0) {
              e.failure++;
            } else if (s.result.pass === true) {
              e.pass++;
            }
          }
        }
      }
      e.duration += t.duration;
      if (t.childSuites.length > 0) {
        for (const s of t.childSuites) {
          this.traversalResults(s, e, i);
        }
      }
    }
    getSummary() {
      let t = this.coreContext.getDefaultService("suite").rootSuite;
      const e = this.coreContext.getDefaultService("spec");
      let i = this.coreContext.getDefaultService("config").isBreakOnError();
      let s = e.getStatus();
      let a = i && s;
      let n = {
        total: 0,
        failure: 0,
        error: 0,
        pass: 0,
        ignore: 0,
        duration: 0
      };
      for (const e of t.childSuites) {
        this.traversalResults(e, n, a);
      }
      n.ignore = n.total - n.pass - n.failure - n.error;
      return n;
    }
    init(t) {
      this.coreContext = t;
    }
    traversalSuites(t, e, i) {
      if (t.childSuites.length === 0 && t.specs.length === 0) {
        return [];
      }
      if (t.specs.length > 0) {
        let s = [];
        for (const e of t["specs"]) {
          if (!i.filterDesc(t.description, e.description, e.fi, null)) {
            s.push({
              itName: e.description
            });
          }
        }
        e[t.description] = s;
      }
      if (t.childSuites.length > 0) {
        let s = [];
        for (const e of t.childSuites) {
          let t = {};
          this.traversalSuites(e, t, i);
          if (!i.filterSuite(e.description)) {
            s.push(t);
          }
        }
        e.suites = s;
      }
    }
    async dryRun(t) {
      const e = this.coreContext.getDefaultService("config");
      let i = {};
      let a = [];
      for (const t of this.rootSuite.childSuites) {
        let i = {};
        this.traversalSuites(t, i, e);
        if (!e.filterSuite(t.description)) {
          a.push(i);
        }
      }
      i["suites"] = a;
      let n = JSON.stringify(i);
      let c = n.length;
      let r = 500;
      let o = Math.floor(c / r);
      for (let t = 0; t <= o; t++) {
        await s.print(n.substring(t * r, (t + 1) * r));
      }
      console.info("dryRun print success");
      t.finishTest("dry run finished!!!", 0, (() => {}));
    }
    execute() {
      const t = this.coreContext.getDefaultService("config");
      if (t.filterValid.length === 0) {
        if (t.isRandom() && this.rootSuite.childSuites.length > 0) {
          this.rootSuite.childSuites.sort((function() {
            return Math.random().toFixed(1) > .5 ? -1 : 1;
          }));
          this.currentRunningSuite = this.rootSuite.childSuites[0];
        }
        if (t.isSupportAsync()) {
          (async () => {
            await this.coreContext.fireEvents("task", "taskStart");
            await this.rootSuite.asyncRun(this.coreContext);
          })().then((async () => {
            await this.coreContext.fireEvents("task", "taskDone");
          }));
        } else {
          this.coreContext.fireEvents("task", "taskStart");
          this.rootSuite.run(this.coreContext);
          this.coreContext.fireEvents("task", "taskDone");
        }
      } else {
        this.coreContext.fireEvents("task", "incorrectFormat");
      }
    }
    apis() {
      const t = this;
      return {
        describe: function(e, i) {
          return t.describe(e, i);
        },
        beforeAll: function(e) {
          return t.beforeAll(e);
        },
        beforeEach: function(e) {
          return t.beforeEach(e);
        },
        afterAll: function(e) {
          return t.afterAll(e);
        },
        afterEach: function(e) {
          return t.afterEach(e);
        }
      };
    }
  }
  u.Suite = class {
    constructor(t) {
      this.description = t.description || "";
      this.childSuites = [];
      this.specs = [];
      this.beforeAll = [];
      this.afterAll = [];
      this.beforeEach = [];
      this.afterEach = [];
      this.duration = 0;
    }
    pushSpec(t) {
      this.specs.push(t);
    }
    removeSpec(t) {
      this.specs = this.specs.filter(((e, i) => e.description !== t));
    }
    getSpecsNum() {
      return this.specs.length;
    }
    isRun(t) {
      const e = t.getDefaultService("config");
      t.getDefaultService("suite");
      const i = t.getDefaultService("spec");
      let s = e.isBreakOnError();
      let a = i.getStatus();
      return s && a;
    }
    run(t) {
      const e = t.getDefaultService("suite");
      e.setCurrentRunningSuite(this);
      if (this.description !== "") {
        t.fireEvents("suite", "suiteStart", this);
      }
      this.runHookFunc("beforeAll");
      if (this.specs.length > 0) {
        if (t.getDefaultService("config").isRandom()) {
          this.specs.sort((function() {
            return Math.random().toFixed(1) > .5 ? -1 : 1;
          }));
        }
        for (let e in this.specs) {
          if (this.isRun(t)) {
            break;
          }
          this.runHookFunc("beforeEach");
          e.run(t);
          this.runHookFunc("afterEach");
        }
      }
      if (this.childSuites.length > 0) {
        for (let i in this.childSuites) {
          if (this.isRun(t)) {
            break;
          }
          i.run(t);
          e.setCurrentRunningSuite(i);
        }
      }
      this.runHookFunc("afterAll");
      if (this.description !== "") {
        t.fireEvents("suite", "suiteDone");
      }
    }
    async asyncRun(t) {
      const e = t.getDefaultService("suite");
      e.setCurrentRunningSuite(this);
      e.suitesStack.push(this);
      if (this.description !== "") {
        await t.fireEvents("suite", "suiteStart", this);
      }
      await this.runAsyncHookFunc("beforeAll");
      if (this.specs.length > 0) {
        if (t.getDefaultService("config").isRandom()) {
          this.specs.sort((function() {
            return Math.random().toFixed(1) > .5 ? -1 : 1;
          }));
        }
        for (let e = 0; e < this.specs.length; e++) {
          if (this.isRun(t)) {
            console.log("break description :" + this.description);
            break;
          }
          await this.runAsyncHookFunc("beforeEach");
          await this.specs[e].asyncRun(t);
          await this.runAsyncHookFunc("afterEach");
        }
      }
      if (this.childSuites.length > 0) {
        for (let e = 0; e < this.childSuites.length; e++) {
          if (this.isRun(t)) {
            console.log("break description :" + this.description);
            break;
          }
          await this.childSuites[e].asyncRun(t);
        }
      }
      await this.runAsyncHookFunc("afterAll");
      if (this.description !== "") {
        await t.fireEvents("suite", "suiteDone");
        let i = e.suitesStack.pop();
        if (e.suitesStack.length === 0) {
          e.suitesStack.push(i);
        }
        if (e.suitesStack.length > 1) {
          e.setCurrentRunningSuite(e.suitesStack.pop());
        } else {
          let t = e.suitesStack.pop();
          e.setCurrentRunningSuite(t);
          e.suitesStack.push(t);
        }
      }
    }
    runHookFunc(t) {
      if (this[t] && this[t].length > 0) {
        this[t].forEach((t => {
          try {
            t();
          } catch (t) {
            console.error(t);
          }
        }));
      }
    }
    runAsyncHookFunc(t) {
      if (this[t] && this[t].length > 0) {
        return new Promise((async e => {
          for (let e = 0; e < this[t].length; e++) {
            try {
              await this[t][e]();
            } catch (t) {
              console.error(t);
            }
          }
          e();
        }));
      }
    }
  };
  class f {
    constructor(t) {
      this.id = t.id;
      this.totalTest = 0;
      this.hasError = false;
    }
    init(t) {
      this.coreContext = t;
    }
    setCurrentRunningSpec(t) {
      this.currentRunningSpec = t;
    }
    setStatus(t) {
      this.hasError = t;
    }
    getStatus() {
      return this.hasError;
    }
    getTestTotal() {
      return this.totalTest;
    }
    getCurrentRunningSpec() {
      return this.currentRunningSpec;
    }
    it(t, e, i) {
      const s = this.coreContext.getDefaultService("config");
      const a = this.coreContext.getDefaultService("suite").getCurrentRunningSuite().description;
      if (s.filterDesc(a, t, e, this.coreContext)) {
        console.info("filter it :" + t);
      } else {
        let a = l(this.coreContext, i);
        const n = new f.Spec({
          description: t,
          fi: e,
          fn: a
        });
        const c = this.coreContext.getDefaultService("suite");
        if (typeof this.coreContext.getServices("dataDriver") !== "undefined" && s["dryRun"] !== "true") {
          let e = this.coreContext.getServices("dataDriver").dataDriver.getSpecStress(t);
          for (let t = 1; t < e; t++) {
            this.totalTest++;
            c.getCurrentRunningSuite().pushSpec(n);
          }
        }
        if (s["dryRun"] !== "true") {
          let t = s.getStress();
          console.info("stress length :" + t);
          for (let e = 1; e < t; e++) {
            this.totalTest++;
            c.getCurrentRunningSuite().pushSpec(n);
          }
        }
        this.totalTest++;
        c.getCurrentRunningSuite().pushSpec(n);
      }
    }
    apis() {
      const t = this;
      return {
        it: function(e, i, s) {
          return t.it(e, i, s);
        }
      };
    }
  }
  f.Spec = class {
    constructor(t) {
      this.description = t.description || "";
      this.fi = t.fi;
      this.fn = t.fn || function() {};
      this.result = {
        failExpects: [],
        passExpects: []
      };
      this.error = void 0;
      this.duration = 0;
      this.startTime = 0;
      this.isExecuted = false;
    }
    setResult(t) {
      const e = t.getDefaultService("spec");
      if (this.result.failExpects.length > 0) {
        this.result.pass = false;
        e.setStatus(true);
      } else {
        this.result.pass = true;
      }
      console.info("testcase " + this.description + " result:" + this.result.pass);
    }
    run(t) {
      const e = t.getDefaultService("spec");
      e.setCurrentRunningSpec(this);
      t.fireEvents("spec", "specStart", this);
      this.isExecuted = true;
      try {
        let e = t.getServices("dataDriver");
        if (typeof e === "undefined") {
          this.fn();
        } else {
          let t = e.dataDriver.getSuiteParams();
          let i = e.dataDriver.getSpecParams();
          console.info("[suite params] " + JSON.stringify(t));
          console.info("[spec params] " + JSON.stringify(i));
          if (this.fn.length === 0) {
            this.fn();
          } else if (i.length === 0) {
            this.fn(t);
          } else {
            i.forEach((e => this.fn(Object.assign({}, e, t))));
          }
        }
        this.setResult(t);
      } catch (t) {
        this.error = t;
        e.setStatus(true);
      }
      t.fireEvents("spec", "specDone", this);
    }
    async asyncRun(t) {
      const e = t.getDefaultService("spec");
      e.setCurrentRunningSpec(this);
      await t.fireEvents("spec", "specStart", this);
      try {
        let e = t.getServices("dataDriver");
        if (typeof e === "undefined") {
          await this.fn();
          this.setResult(t);
        } else {
          let i = e.dataDriver.getSuiteParams();
          let s = e.dataDriver.getSpecParams();
          console.info("[suite params] " + JSON.stringify(i));
          console.info("[spec params] " + JSON.stringify(s));
          if (this.fn.length === 0) {
            await this.fn();
            this.setResult(t);
          } else if (s.length === 0) {
            await this.fn(i);
            this.setResult(t);
          } else {
            for (const e of s) {
              await this.fn(Object.assign({}, e, i));
              this.setResult(t);
            }
          }
        }
      } catch (t) {
        if (t instanceof n) {
          this.fail = t;
          e.setStatus(true);
        } else {
          this.error = t;
          e.setStatus(true);
        }
      }
      this.isExecuted = true;
      await t.fireEvents("spec", "specDone", this);
    }
    filterCheck(t) {
      t.getDefaultService("spec").setCurrentRunningSpec(this);
      return true;
    }
    addExpectationResult(t) {
      if (this.result.failExpects.length === 0) {
        this.result.failExpects.push(t);
      }
      throw new n(t.message);
    }
  };
  class p {
    constructor(t) {
      this.id = t.id;
      this.matchers = {};
    }
    expect(t) {
      return this.wrapMatchers(t);
    }
    init(t) {
      this.coreContext = t;
      this.addMatchers(this.basicMatchers());
    }
    addMatchers(t) {
      for (const e in t) {
        if (Object.prototype.hasOwnProperty.call(t, e)) {
          this.matchers[e] = t[e];
        }
      }
    }
    basicMatchers() {
      return {
        assertTrue: function(t) {
          return {
            pass: t === true,
            message: "expect true, actualValue is " + t
          };
        },
        assertEqual: function(t, e) {
          return {
            pass: t === e[0],
            expectValue: e[0],
            message: "expect " + t + " equals " + e[0]
          };
        },
        assertThrow: function(t, e) {
          const i = {
            pass: false
          };
          if (typeof t !== "function") {
            i.message = "toThrow's Actual should be a Function";
          } else {
            let s = false;
            let a;
            try {
              t();
            } catch (t) {
              s = true;
              a = t;
            }
            if (!s) {
              i.message = "function did not throw an exception";
            } else if (a && a.message === e[0]) {
              i.pass = true;
            } else {
              i.message = `expect to throw ${e[0]} , actual throw ${a.message}`;
            }
          }
          return i;
        }
      };
    }
    wrapMatchers(t) {
      const e = this;
      const i = {
        isNot: false,
        not: function() {
          this.isNot = true;
          return this;
        }
      };
      const s = e.coreContext.getDefaultService("spec").getCurrentRunningSpec();
      for (const a in this.matchers) {
        if (Object.prototype.hasOwnProperty.call(this.matchers, a)) {
          if (a.search("assertPromise") == 0) {
            i[a] = async function() {
              await e.matchers[a](t, arguments).then((function(e) {
                if (i.isNot) {
                  e.pass = !e.pass;
                }
                e.actualValue = t;
                e.checkFunc = a;
                if (!e.pass) {
                  s.addExpectationResult(e);
                }
              }));
            };
          } else {
            i[a] = function() {
              const n = e.matchers[a](t, arguments);
              if (i.isNot) {
                n.pass = !n.pass;
              }
              n.actualValue = t;
              n.checkFunc = a;
              if (!n.pass) {
                s.addExpectationResult(n);
              }
            };
          }
        }
      }
      return i;
    }
    apis() {
      const t = this;
      return {
        expect: function(e) {
          return t.expect(e);
        }
      };
    }
  }
  class m {
    constructor(t) {
      this.id = t.id;
    }
    init(t) {
      this.coreContext = t;
      this.specService = this.coreContext.getDefaultService("spec");
      this.suiteService = this.coreContext.getDefaultService("suite");
      this.duration = 0;
    }
    taskStart() {
      console.info("[start] start run suites");
    }
    async suiteStart() {
      console.info("[suite start]" + this.suiteService.getCurrentRunningSuite().description);
    }
    async specStart() {
      console.info("start running case '" + this.specService.currentRunningSpec.description + "'");
      this.index = this.index + 1;
      this.specService.currentRunningSpec.startTime = await s.getRealTime();
    }
    async specDone() {
      let t = "";
      let e = this.specService.currentRunningSpec;
      let i = this.suiteService.currentRunningSuite;
      e.duration = await s.getRealTime() - e.startTime;
      i.duration += e.duration;
      if (e.error) {
        this.formatPrint("error", e.description + " ; consuming " + e.duration + "ms");
        this.formatPrint("errorDetail", e.error);
      } else if (e.result) {
        if (e.result.failExpects.length > 0) {
          this.formatPrint("fail", e.description + " ; consuming " + e.duration + "ms");
          e.result.failExpects.forEach((e => {
            t = e.message || "expect " + e.actualValue + " " + e.checkFunc + " " + e.expectValue;
            this.formatPrint("failDetail", t);
          }));
        } else {
          this.formatPrint("pass", e.description + " ; consuming " + e.duration + "ms");
        }
      }
      this.formatPrint(this.specService.currentRunningSpec.error, t);
    }
    suiteDone() {
      let t = this.suiteService.currentRunningSuite;
      console.info(`[suite end] ${t.description} consuming ${t.duration} ms`);
    }
    taskDone() {
      let t = "";
      let e = this.suiteService.getSummary();
      t = "total cases:" + e.total + ";failure " + e.failure + "," + "error " + e.error;
      t += ",pass " + e.pass + "; consuming " + e.duration + "ms";
      console.info(t);
      console.info("[end] run suites end");
    }
    incorrectFormat() {
      if (this.coreContext.getDefaultService("config").filterValid.length !== 0) {
        this.coreContext.getDefaultService("config").filterValid.forEach((function(t) {
          console.info("this param " + t + " is invalid");
        }));
      }
    }
    formatPrint(t, e) {
      switch (t) {
       case "pass":
        console.info("[pass]" + e);
        break;

       case "fail":
        console.info("[fail]" + e);
        break;

       case "failDetail":
        console.info("[failDetail]" + e);
        break;

       case "error":
        console.info("[error]" + e);
        break;

       case "errorDetail":
        console.info("[errorDetail]" + e);
        break;
      }
    }
    sleep(t) {
      var e = new Date;
      var i = e.getTime() + t;
      while (true) {
        if ((e = new Date).getTime() > i) {
          return;
        }
      }
    }
  }
  class d {
    constructor(t, e, i) {
      this.suiteName = t;
      this.itName = e;
      this.params = i;
    }
    filterSuite() {
      return !this.params.split(",").map((t => t.split("#")[0])).map((t => t == this.suiteName)).reduce(((t, e) => t || e), false);
    }
    filterIt() {
      let t = this.params.split(",") || [];
      let e = t.filter((t => !t.includes("#"))).map((t => t == this.suiteName)).reduce(((t, e) => t || e), false);
      let i = t.filter((t => t.includes("#"))).map((t => t == this.suiteName + "#" + this.itName)).reduce(((t, e) => t || e), false);
      return !(e || i);
    }
  }
  class h {
    constructor(t, e, i) {
      this.suiteName = t;
      this.itName = e;
      this.params = i;
    }
    filterSuite() {
      return this.params.split(",").map((t => t == this.suiteName)).reduce(((t, e) => t || e), false);
    }
    filterIt() {
      return this.params.split(",").some((t => t == this.suiteName + "#" + this.itName));
    }
  }
  class w {
    constructor(t, e, i) {
      this.suiteName = t;
      this.itName = e;
      this.params = i;
    }
    filterSuite() {
      return !this.params.split(",").map((t => t == this.suiteName)).reduce(((t, e) => t || e), false);
    }
    filterIt() {
      return !this.params.split(",").map((t => t == this.itName)).reduce(((t, e) => t || e), false);
    }
  }
  class S {
    constructor(t, e, i, s) {
      this.suiteName = t;
      this.itName = e;
      this.params = s;
      this.fi = i;
    }
    filterIt() {
      return !(this.params === (this.fi & this.params) || this.fi === 0);
    }
  }
  const g = /^[1-9]\d*$/;
  class y {
    constructor(t) {
      this.id = t.id;
      this.supportAsync = false;
      this.random = false;
      this.filterValid = [];
      this.filter = 0;
      this.flag = false;
      this.suite = null;
      this.itName = null;
      this.testType = null;
      this.level = null;
      this.size = null;
      this.class = null;
      this.notClass = null;
      this.timeout = null;
      this.breakOnError = false;
      this.stress = null;
    }
    init(t) {
      this.coreContext = t;
    }
    isNormalInteger(t) {
      const e = Math.floor(Number(t));
      return e !== 1 / 0 && String(e) === String(t) && e >= 0;
    }
    getStress() {
      if (this.stress === void 0 || this.stress === "" || this.stress === null) {
        return 1;
      } else {
        return !this.stress.match(g) ? 1 : Number.parseInt(this.stress);
      }
    }
    basicParamValidCheck(t) {
      let e = t.size;
      if (e !== void 0 && e !== "" && e !== null) {
        if ([ "small", "medium", "large" ].indexOf(e) === -1) {
          this.filterValid.push("size:" + e);
        }
      }
      let i = t.level;
      if (i !== void 0 && i !== "" && i !== null) {
        if ([ "0", "1", "2", "3", "4" ].indexOf(i) === -1) {
          this.filterValid.push("level:" + i);
        }
      }
      let s = t.testType;
      if (s !== void 0 && s !== "" && s !== null) {
        if ([ "function", "performance", "power", "reliability", "security", "global", "compatibility", "user", "standard", "safety", "resilience" ].indexOf(s) === -1) {
          this.filterValid.push("testType:" + s);
        }
      }
    }
    filterParamValidCheck(t) {
      let e = t.timeout;
      if (e !== void 0 && e !== "" && e !== null) {
        if (!this.isNormalInteger(e)) {
          this.filterValid.push("timeout:" + e);
        }
      }
      let i = [ "dryRun", "random", "breakOnError", "coverage" ];
      for (const e of i) {
        if (t[e] !== void 0 && t[e] !== "true" && t[e] !== "false") {
          this.filterValid.push(`${e}:${t[e]}`);
        }
      }
      if (t.stress !== void 0 && t.stress !== "" && t.stress !== null) {
        if (!t.stress.match(g)) {
          this.filterValid.push("stress:" + t.stress);
        }
      }
      let s = /^[A-Za-z]{1}[\w#,.]*$/;
      let a = [ "class", "notClass" ];
      for (const e of a) {
        if (t[e] !== void 0 && t[e] !== "" && t[e] !== null) {
          t[e].split(",").forEach((i => !i.match(s) ? this.filterValid.push(`${e}:${t[e]}`) : null));
        }
      }
    }
    setConfig(t) {
      this.basicParamValidCheck(t);
      this.filterParamValidCheck(t);
      try {
        this.class = t.class;
        this.notClass = t.notClass;
        this.flag = t.flag || {
          flag: false
        };
        this.suite = t.suite;
        this.itName = t.itName;
        this.filter = t.filter;
        this.testType = t.testType;
        this.level = t.level;
        this.size = t.size;
        this.timeout = t.timeout;
        this.dryRun = t.dryRun;
        this.breakOnError = t.breakOnError;
        this.random = t.random === "true" ? true : false;
        this.stress = t.stress;
        this.coverage = t.coverage;
        this.filterParam = {
          testType: {
            function: 1,
            performance: 1 << 1,
            power: 1 << 2,
            reliability: 1 << 3,
            security: 1 << 4,
            global: 1 << 5,
            compatibility: 1 << 6,
            user: 1 << 7,
            standard: 1 << 8,
            safety: 1 << 9,
            resilience: 1 << 10
          },
          level: {
            0: 1 << 24,
            1: 1 << 25,
            2: 1 << 26,
            3: 1 << 27,
            4: 1 << 28
          },
          size: {
            small: 1 << 16,
            medium: 1 << 17,
            large: 1 << 18
          }
        };
        this.parseParams();
      } catch (t) {
        console.info("setConfig error: " + t.message);
      }
    }
    parseParams() {
      if (this.filter != null) {
        return;
      }
      let t = 0;
      let e = 0;
      let i = 0;
      if (this.testType != null) {
        t = this.testType.split(",").map((t => this.filterParam.testType[t] || 0)).reduce(((t, e) => t | e), 0);
      }
      if (this.level != null) {
        i = this.level.split(",").map((t => this.filterParam.level[t] || 0)).reduce(((t, e) => t | e), 0);
      }
      if (this.size != null) {
        e = this.size.split(",").map((t => this.filterParam.size[t] || 0)).reduce(((t, e) => t | e), 0);
      }
      this.filter = t | e | i;
      console.info("filter params:" + this.filter);
    }
    isCurrentSuite(t) {
      if (this.suite !== void 0 && this.suite !== "" && this.suite !== null) {
        return this.suite.split(",").indexOf(t) !== -1;
      }
      return false;
    }
    filterSuite(t) {
      let e = [];
      if (this.suite !== void 0 && this.suite !== "" && this.suite !== null) {
        e.push(new w(t, "", this.suite));
      }
      if (this.class !== void 0 && this.class !== "" && this.class !== null) {
        e.push(new d(t, "", this.class));
      }
      if (this.notClass !== void 0 && this.notClass !== "" && this.notClass !== null) {
        e.push(new h(t, "", this.notClass));
      }
      return e.map((t => t.filterSuite())).reduce(((t, e) => t || e), false);
    }
    filterDesc(t, e, i, s) {
      let a = [];
      if (this.itName !== void 0 && this.itName !== "" && this.itName !== null) {
        a.push(new w(t, e, this.itName));
      }
      if (this.class !== void 0 && this.class !== "" && this.class !== null) {
        a.push(new d(t, e, this.class));
      }
      if (this.notClass !== void 0 && this.notClass !== "" && this.notClass !== null) {
        a.push(new h(t, e, this.notClass));
      }
      if (typeof this.filter !== "undefined" && this.filter !== 0 && i !== 0) {
        a.push(new S("", "", i, this.filter));
      }
      return a.map((t => t.filterIt())).reduce(((t, e) => t || e), false);
    }
    isRandom() {
      return this.random || false;
    }
    isBreakOnError() {
      return this.breakOnError !== "true" ? false : true;
    }
    setSupportAsync(t) {
      this.supportAsync = t;
    }
    isSupportAsync() {
      return this.supportAsync;
    }
    translateParams(t) {
      const e = new Set([ "-s class", "-s notClass", "-s suite", "-s itName", "-s level", "-s testType", "-s size", "-s timeout", "-s dryRun", "-s random", "-s breakOnError", "-s stress", "-s coverage", "class", "notClass", "suite", "itName", "level", "testType", "size", "timeout", "dryRun", "random", "breakOnError", "stress", "coverage" ]);
      let i = {};
      for (const s in t) {
        if (e.has(s)) {
          i[s.replace("-s ", "")] = t[s];
        }
      }
      return i;
    }
    translateParamsToString(t) {
      const e = new Set([ "-s class", "-s notClass", "-s suite", "-s itName", "-s level", "-s testType", "-s size", "-s timeout", "-s dryRun", "-s random", "-s breakOnError", "-s stress", "-s coverage", "class", "notClass", "suite", "itName", "level", "testType", "size", "timeout", "dryRun", "random", "breakOnError", "stress", "coverage" ]);
      let i = "";
      for (const s in t) {
        if (e.has(s)) {
          i += " " + s + " " + t[s];
        }
      }
      return i.trim();
    }
    execute() {}
  }
  class T {
    constructor(t) {
      this.id = t.id;
      this.coreContext = t.context;
      this.eventMonitors = [];
    }
    subscribeEvent(t) {
      this.eventMonitors.push(t);
    }
    async specStart() {
      for (const t of this.eventMonitors) {
        await t["specStart"]();
      }
    }
    async specDone() {
      for (const t of this.eventMonitors) {
        await t["specDone"]();
      }
    }
  }
  class x {
    constructor(t) {
      this.id = t.id;
      this.suiteContext = t.coreContext;
      this.eventMonitors = [];
    }
    subscribeEvent(t) {
      this.eventMonitors.push(t);
    }
    async suiteStart() {
      for (const t of this.eventMonitors) {
        await t["suiteStart"]();
      }
    }
    async suiteDone() {
      for (const t of this.eventMonitors) {
        await t["suiteDone"]();
      }
    }
  }
  class b {
    constructor(t) {
      this.id = t.id;
      this.coreContext = t.coreContext;
      this.eventMonitors = [];
    }
    subscribeEvent(t) {
      this.eventMonitors.push(t);
    }
    async taskStart() {
      for (const t of this.eventMonitors) {
        await t["taskStart"]();
      }
    }
    async taskDone() {
      for (const t of this.eventMonitors) {
        await t["taskDone"]();
      }
    }
    incorrectFormat() {
      for (const t of this.eventMonitors) {
        t["incorrectFormat"]();
      }
    }
  }
  class C {
    static getInstance() {
      if (!this.instance) {
        this.instance = new C;
      }
      return this.instance;
    }
    constructor() {
      this.instance = null;
      this.services = {
        suite: {},
        spec: {},
        config: {},
        expect: {},
        log: {},
        report: {}
      };
      this.events = {
        suite: {},
        spec: {},
        task: {}
      };
    }
    addService(t, e) {
      let i = {};
      if (!this.services[t]) {
        this.services[t] = i;
      } else {
        i = this.services[t];
      }
      i[e.id] = e;
    }
    getDefaultService(t) {
      return this.services[t].default;
    }
    getServices(t) {
      return this.services[t];
    }
    registerEvent(t, e) {
      let i = {};
      if (!this.events[t]) {
        this.events[t] = i;
      } else {
        i = this.events[t];
      }
      i[e.id] = e;
    }
    unRegisterEvent(t, e) {
      const i = this.events[t];
      if (i) {
        delete i[e];
      }
    }
    subscribeEvent(t, e) {
      const i = this.events[t];
      if (i) {
        for (const t in i) {
          i[t]["subscribeEvent"](e);
        }
      }
    }
    async fireEvents(t, e) {
      const i = this.events[t];
      if (i) {
        for (const t in i) {
          await i[t][e]();
        }
      }
    }
    addToGlobal(t) {
      if (typeof globalThis !== "undefined") {
        for (let e in t) {
          globalThis[e] = t[e];
        }
      }
      for (const e in t) {
        this[e] = t[e];
      }
    }
    init() {
      this.addService("suite", new u({
        id: "default"
      }));
      this.addService("spec", new f({
        id: "default"
      }));
      this.addService("expect", new p({
        id: "default"
      }));
      this.addService("report", new m({
        id: "default"
      }));
      this.addService("config", new y({
        id: "default"
      }));
      this.registerEvent("task", new b({
        id: "default",
        coreContext: this
      }));
      this.registerEvent("suite", new x({
        id: "default",
        coreContext: this
      }));
      this.registerEvent("spec", new T({
        id: "default",
        coreContext: this
      }));
      this.subscribeEvent("spec", this.getDefaultService("report"));
      this.subscribeEvent("suite", this.getDefaultService("report"));
      this.subscribeEvent("task", this.getDefaultService("report"));
      const t = this;
      for (const e in this.services) {
        const i = this.services[e];
        for (const e in i) {
          const s = i[e];
          s.init(t);
          if (typeof s.apis !== "function") {
            continue;
          }
          const a = s.apis();
          if (a) {
            this.addToGlobal(a);
          }
        }
      }
    }
    execute(t) {
      const e = this.getDefaultService("suite");
      if (this.getDefaultService("config")["dryRun"] !== "true") {
        setTimeout((() => {
          e.execute();
        }), 10);
      } else {
        (async function() {
          await e.dryRun(t);
        })();
      }
    }
  }
  function v(t, e, i) {
    if ((e = M(e)) in t) {
      Object.defineProperty(t, e, {
        value: i,
        enumerable: true,
        configurable: true,
        writable: true
      });
    } else {
      t[e] = i;
    }
    return t;
  }
  function M(t) {
    var e = R(t, "string");
    return typeof e === "symbol" ? e : String(e);
  }
  function R(t, e) {
    if (typeof t !== "object" || t === null) {
      return t;
    }
    var i = t[Symbol.toPrimitive];
    if (i !== void 0) {
      var s = i.call(t, e || "default");
      if (typeof s !== "object") {
        return s;
      }
      throw new TypeError("@@toPrimitive must return a primitive value.");
    }
    return (e === "string" ? String : Number)(t);
  }
  class O {}
  v(O, "FUNCTION", 1);
  v(O, "PERFORMANCE", 1 << 1);
  v(O, "POWER", 1 << 2);
  v(O, "RELIABILITY", 1 << 3);
  v(O, "SECURITY", 1 << 4);
  v(O, "GLOBAL", 1 << 5);
  v(O, "COMPATIBILITY", 1 << 6);
  v(O, "USER", 1 << 7);
  v(O, "STANDARD", 1 << 8);
  v(O, "SAFETY", 1 << 9);
  v(O, "RESILIENCE", 1 << 10);
  class A {}
  v(A, "SMALLTEST", 1 << 16);
  v(A, "MEDIUMTEST", 1 << 17);
  v(A, "LARGETEST", 1 << 18);
  class E {}
  v(E, "LEVEL0", 1 << 24);
  v(E, "LEVEL1", 1 << 25);
  v(E, "LEVEL2", 1 << 26);
  v(E, "LEVEL3", 1 << 27);
  v(E, "LEVEL4", 1 << 28);
  const k = "suites";
  const N = "items";
  const D = "describe";
  const P = "it";
  const _ = "params";
  const I = "stress";
  class U {
    static get(t, e, i) {
      let s = i;
      for (const i in t) {
        if (i === e) {
          return t[i];
        }
      }
      return s;
    }
    static has(t, e) {
      return Object.prototype.hasOwnProperty.call(t, e);
    }
  }
  class j {
    constructor(t) {
      this.id = "dataDriver";
      this.data = t.data || {};
    }
    init(t) {
      this.coreContext = t;
      this.suiteService = this.coreContext.getDefaultService("suite");
      this.specService = this.coreContext.getDefaultService("spec");
    }
    getSpecParams() {
      let t = [];
      let e = this.suiteService.getCurrentRunningSuite().description;
      let i = this.specService.getCurrentRunningSpec().description;
      let s = U.get(this.data, k, []);
      for (const a of s) {
        let s = U.get(a, D, "");
        if (U.has(a, D) && typeof s === "object" && s.constructor === Array && s.includes(e)) {
          let e = U.get(a, N, []);
          for (const s of e) {
            if (U.has(s, P) && U.get(s, P) === i) {
              return U.get(s, _, t);
            }
          }
        }
      }
      return t;
    }
    getSuiteParams() {
      let t = {};
      let e = this.suiteService.getCurrentRunningSuite().description;
      let i = U.get(this.data, k, []);
      for (const s of i) {
        let i = U.get(s, D, []);
        if (U.has(s, D) && typeof i === "object" && i.constructor === Array && i.includes(e)) {
          t = Object.assign({}, t, U.get(s, _, t));
        }
      }
      return t;
    }
    getSpecStress(t) {
      let e = 1;
      let i = this.suiteService.getCurrentRunningSuite().description;
      let s = U.get(this.data, k, []);
      for (const a of s) {
        let s = U.get(a, D, "");
        if (U.has(a, D) && typeof s === "object" && s.constructor === Array && s.includes(i)) {
          let i = U.get(a, N, []);
          for (const s of i) {
            if (U.has(s, P) && U.get(s, P) === t) {
              let t = U.get(s, I, e);
              return Number.isInteger(t) && t >= 1 ? t : e;
            }
          }
        }
      }
      return e;
    }
    getSuiteStress(t) {
      let e = 1;
      let i = U.get(this.data, k, []);
      for (const s of i) {
        let i = U.get(s, D, []);
        if (U.has(s, D) && typeof i === "object" && i.constructor === Array && i.includes(t)) {
          let t = U.get(s, I, e);
          return Number.isInteger(t) && t >= 1 ? t : e;
        }
      }
      return e;
    }
  }
  function B(t) {
    return {
      pass: t === null,
      message: "expect null, actualValue is " + t
    };
  }
  function F(t, e) {
    console.log("expected:" + e[0] + ",precision:" + e[1]);
    if (t === null && e[0] === null) {
      throw new Error("actualValue and expected can not be both null!!!");
    }
    let i;
    let s = Math.abs(e[0] - t);
    let a = Math.abs(t);
    if (a - 0 === 0) {
      if (s - 0 === 0) {
        i = true;
      } else {
        i = false;
      }
    } else if (s / a < e[1]) {
      i = true;
    } else {
      i = false;
    }
    return {
      pass: i,
      message: "|" + t + " - " + e[0] + "|/" + t + " is not less than " + e[1]
    };
  }
  function V(t, e) {
    let i = false;
    if (Object.prototype.toString.call(t).indexOf("Array")) {
      for (let s in t) {
        if (t[s] == e[0]) {
          i = true;
        }
      }
    }
    if (Object.prototype.toString.call(t) === "[object String]") {
      i = t.indexOf(e[0]) >= 0;
    }
    return {
      pass: i,
      message: "expect false, " + t + " do not have  " + e[0]
    };
  }
  function W(t, e) {
    return {
      pass: t < e[0],
      message: t + " is not less than " + e[0]
    };
  }
  function H(t, e) {
    return {
      pass: t > e[0],
      message: t + " is not larger than " + e[0]
    };
  }
  function L() {
    return {
      pass: false,
      message: "fail "
    };
  }
  function z(t) {
    return {
      pass: void 0 === t,
      message: "expect Undefined, actualValue is " + t
    };
  }
  function J(t) {
    return {
      pass: t === false,
      message: "expect false, actualValue is " + t
    };
  }
  function $(t, e) {
    if (Object.prototype.toString.call(t) == "[object " + e[0] + "]") {
      return {
        pass: true
      };
    } else {
      return {
        pass: false,
        message: t + " is " + Object.prototype.toString.call(t) + "not  " + e[0]
      };
    }
  }
  function K(t, e) {
    let i = false;
    let s;
    if (typeof t !== "function") {
      throw new Error("actualValue is not a function");
    }
    try {
      t();
      return {
        pass: i,
        message: " An error is not thrown while it is expected!"
      };
    } catch (t) {
      s = t;
    }
    if (s instanceof Error) {
      console.log(s.message);
      if (s.message == e[0]) {
        i = true;
      }
    }
    return {
      pass: i,
      message: "expected throw failed , " + s.message + " is not " + e[0]
    };
  }
  function G(t, e) {
    return {
      pass: t >= e[0],
      message: t + " is not larger than " + e[0]
    };
  }
  function q(t, e) {
    return {
      pass: t <= e[0],
      message: t + " is not less than " + e[0]
    };
  }
  function Y(t) {
    return {
      pass: t !== t,
      message: "expect NaN, actualValue  is " + t
    };
  }
  function Q(t) {
    return {
      pass: t === Number.NEGATIVE_INFINITY,
      message: "Expected actualValue not to be -Infinity.  actualValue is," + t
    };
  }
  function Z(t) {
    return {
      pass: t === Number.POSITIVE_INFINITY,
      message: "Expected actualValue is POSITIVE_INFINITY.  actualValue is," + t
    };
  }
  class X {
    static getType_(t) {
      return Object.prototype.toString.apply(t);
    }
    static isA_(t, e) {
      return this.getType_(e) === "[object " + t + "]";
    }
    static isAsymmetricEqualityTester_(t) {
      return t ? this.isA_("Function", t.asymmetricMatch) : false;
    }
    static isFunction_(t) {
      return this.isA_("Function", t);
    }
    static isUndefined(t) {
      return t === void 0;
    }
    static isDomNode(t) {
      return t !== null && typeof t === "object" && typeof t.nodeType === "number" && typeof t.nodeName === "string";
    }
    static isPromise(t) {
      return !!t && t.constructor === Promise;
    }
    static isMap(t) {
      return t !== null && typeof t !== "undefined" && t.constructor === Map;
    }
    static isSet(t) {
      return t !== null && typeof t !== "undefined" && t.constructor === Set;
    }
    static has(t, e) {
      return Object.prototype.hasOwnProperty.call(t, e);
    }
    static keys(t, e) {
      const i = [];
      const s = this.getAllKeys(t);
      if (!e) {
        return s;
      }
      if (s.length === 0) {
        return s;
      }
      for (const t of s) {
        if (typeof t === "symbol" || !/^[0-9]+$/.test(t)) {
          i.push(t);
        }
      }
      return i;
    }
    static getAllKeys(t) {
      const e = [];
      for (let i in t) {
        if (this.has(t, i)) {
          e.push(i);
        }
      }
      const i = Object.getOwnPropertySymbols(t);
      for (const s of i) {
        if (t.propertyIsEnumerable(s)) {
          e.push(s);
        }
      }
      return e;
    }
  }
  function tt(t, e) {
    console.log("actualValue:" + t + ",expected:" + e[0]);
    return {
      pass: it(t, e[0], [], []),
      message: et(t, e[0])
    };
  }
  function et(t, e) {
    const i = Object.prototype.toString.call(t);
    const s = Object.prototype.toString.call(e);
    let a;
    let n;
    if (i == "[object Function]") {
      a = "actualValue Function";
    } else if (i == "[object Promise]") {
      a = "actualValue Promise";
    } else if (i == "[object Set]" || i == "[object Map]") {
      a = JSON.stringify(Array.from(t));
    } else if (i == "[object RegExp]") {
      a = JSON.stringify(t.source.replace("\\", ""));
    } else {
      a = JSON.stringify(t);
    }
    if (s == "[object Function]") {
      n = "expected Function";
    } else if (s == "[object Promise]") {
      n = "expected Promise";
    } else if (i == "[object Set]" || s == "[object Map]") {
      n = JSON.stringify(Array.from(e));
    } else if (i == "[object RegExp]") {
      n = JSON.stringify(e.source.replace("\\", ""));
    } else {
      n = JSON.stringify(e);
    }
    return a + " is not deep equal " + n;
  }
  function it(t, e, i, s) {
    let a = true;
    console.log("a is:" + t + ",b is:" + e);
    const n = st(t, e);
    if (!X.isUndefined(n)) {
      return n;
    }
    if (t instanceof Error && e instanceof Error) {
      a = t.message == e.message;
      return a;
    }
    if (t === e) {
      a = t !== 0 || 1 / t == 1 / e;
      return a;
    }
    if (t === null || e === null) {
      a = t === e;
      return a;
    }
    const c = Object.prototype.toString.call(t);
    const r = Object.prototype.toString.call(e);
    console.log("aClassName is:" + c);
    console.log("bClassName is:" + r);
    if (c != r) {
      return false;
    }
    if (c === "[object String]") {
      a = t == String(e);
      return a;
    }
    if (c === "[object Number]") {
      a = t != +t ? e != +e : t === 0 && e === 0 ? 1 / t == 1 / e : t == +e;
      return a;
    }
    if (c === "[object Date]" || c === "[object Boolean]") {
      a = +t == +e;
      return a;
    }
    if (c === "[object ArrayBuffer]") {
      return it(new Uint8Array(t), new Uint8Array(e), i, s);
    }
    if (c === "[object RegExp]") {
      return t.source == e.source && t.global == e.global && t.multiline == e.multiline && t.ignoreCase == e.ignoreCase;
    }
    if (typeof t != "object" || typeof e != "object") {
      return false;
    }
    const o = X.isDomNode(t);
    const l = X.isDomNode(e);
    if (o && l) {
      a = t.isEqualNode(e);
      return a;
    }
    if (o || l) {
      return false;
    }
    const u = X.isPromise(t);
    const f = X.isPromise(e);
    if (u && f) {
      return t === e;
    }
    let p = i.length;
    while (p--) {
      if (i[p] == t) {
        return s[p] == e;
      }
    }
    i.push(t);
    s.push(e);
    let m = 0;
    if (c == "[object Array]") {
      const n = t.length;
      const c = e.length;
      if (n !== c) {
        return false;
      }
      for (let r = 0; r < n || r < c; r++) {
        a = it(r < n ? t[r] : void 0, r < c ? e[r] : void 0, i, s) && a;
      }
      if (!a) {
        return false;
      }
    } else if (X.isMap(t) && X.isMap(e)) {
      if (t.size != e.size) {
        return false;
      }
      const n = [];
      const c = [];
      t.forEach((function(t, e) {
        n.push(e);
      }));
      e.forEach((function(t, e) {
        c.push(e);
      }));
      const r = [ n, c ];
      const o = [ c, n ];
      for (let n = 0; a && n < r.length; n++) {
        const c = r[n];
        const l = o[n];
        for (let n = 0; a && n < c.length; n++) {
          const r = c[n];
          const o = l[n];
          const u = t.get(r);
          let f;
          if (X.isAsymmetricEqualityTester_(r) || X.isAsymmetricEqualityTester_(o) && it(r, o)) {
            f = e.get(o);
          } else {
            f = e.get(r);
          }
          a = it(u, f, i, s);
        }
      }
      if (!a) {
        return false;
      }
    } else if (X.isSet(t) && X.isSet(e)) {
      if (t.size != e.size) {
        return false;
      }
      const n = [];
      t.forEach((function(t) {
        n.push(t);
      }));
      const c = [];
      e.forEach((function(t) {
        c.push(t);
      }));
      const r = [ [ n, c ], [ c, n ] ];
      const o = [ [ i, s ], [ s, i ] ];
      for (let t = 0; a && t < r.length; t++) {
        const e = r[t][0];
        const i = r[t][1];
        const s = o[t][0];
        const n = o[t][1];
        for (const t of e) {
          let e = false;
          for (let a = 0; !e && a < i.length; a++) {
            const c = i[a];
            const r = s.length;
            e = it(t, c, s, n);
            if (!e && r !== s.length) {
              s.splice(r);
              n.splice(r);
            }
          }
          a = a && e;
        }
      }
      if (!a) {
        return false;
      }
    } else {
      const i = t.constructor, s = e.constructor;
      if (i !== s && X.isFunction_(i) && X.isFunction_(s) && t instanceof i && e instanceof s && !(i instanceof i && s instanceof s)) {
        return false;
      }
    }
    const d = X.keys(t, c == "[object Array]");
    m = d.length;
    if (X.keys(e, r == "[object Array]").length !== m) {
      return false;
    }
    for (const n of d) {
      console.log("key is:" + n);
      if (X.has(e, n)) {
        if (!it(t[n], e[n], i, s)) {
          a = false;
        }
      } else {
        a = false;
      }
    }
    if (!a) {
      return false;
    }
    i.pop();
    s.pop();
    return a;
  }
  function st(t, e) {
    if (X.isAsymmetricEqualityTester_(t) !== X.isAsymmetricEqualityTester_(e)) {}
  }
  function at(t) {
    return !!t && nt(t.then);
  }
  function nt(t) {
    return ct("Function", t);
  }
  function ct(t, e) {
    return rt(e) === "[object " + t + "]";
  }
  function rt(t) {
    return Object.prototype.toString.apply(t);
  }
  function ot(t) {
    if (!at(t)) {
      return Promise.reject().then((function() {}), (function() {
        return {
          pass: false,
          message: "Expected not be called on a promise."
        };
      }));
    }
    const e = {};
    return Promise.race([ t, Promise.resolve(e) ]).then((function(t) {
      return e === t ? {
        pass: true,
        message: "actualValue is isPending"
      } : {
        pass: false,
        message: "expect isPending, actualValue is resolve"
      };
    }), (function() {
      return {
        pass: false,
        message: "expect isPending, actualValue is reject"
      };
    }));
  }
  function lt(t) {
    if (!at(t)) {
      return Promise.reject().then((function() {}), (function() {
        return {
          pass: false,
          message: "Expected not be called on a promise."
        };
      }));
    }
    const e = {};
    return Promise.race([ t, Promise.resolve(e) ]).then((function(t) {
      return {
        pass: false,
        message: "expect isRejected, but actualValue is " + (e === t ? "isPending" : "resolve")
      };
    }), (function() {
      return {
        pass: true,
        message: "actualValue is isRejected"
      };
    }));
  }
  function ut(t, e) {
    if (!at(t)) {
      return Promise.reject().then((function() {}), (function() {
        return {
          pass: false,
          message: "Expected not be called on a promise."
        };
      }));
    }
    function i(t) {
      return "Expected a promise " + (t ? "not " : "") + "to be rejected with " + JSON.stringify(e[0]);
    }
    const s = {};
    return Promise.race([ t, Promise.resolve(s) ]).then((function(t) {
      return {
        pass: false,
        message: i(false) + " but actualValue is " + (s === t ? "isPending" : "resolve")
      };
    }), (function(t) {
      if (JSON.stringify(t) == JSON.stringify(e[0])) {
        return {
          pass: true,
          message: "actualValue was rejected with " + JSON.stringify(t) + "."
        };
      } else {
        return {
          pass: false,
          message: i(false) + " but it was rejected with " + JSON.stringify(t) + "."
        };
      }
    }));
  }
  function ft(t, e) {
    if (!at(t)) {
      return Promise.reject().then((function() {}), (function() {
        return {
          pass: false,
          message: "Expected not be called on a promise."
        };
      }));
    }
    const i = {};
    return Promise.race([ t, Promise.resolve(i) ]).then((function(t) {
      return {
        pass: false,
        message: "Expected a promise to be rejected but actualValue is " + (i === t ? "isPending" : "resolve")
      };
    }), (function(t) {
      return pt(t, e);
    }));
  }
  function pt(t, e) {
    if (e.length == 1 && typeof e[0] === "function") {
      if (e[0].name === t.__proto__.name) {
        return {
          pass: true,
          message: "actual error type is " + t.name + "."
        };
      } else {
        return {
          pass: false,
          message: "except error type is " + e[0].name + ",but actual is " + t.name + "."
        };
      }
    }
    if (e.length == 1 && typeof e[0] === "string") {
      if (e[0] === t.message) {
        return {
          pass: true,
          message: "actual error message is " + t.message + "."
        };
      } else {
        return {
          pass: false,
          message: "except error message " + e[0] + ",but actual is " + t.message + "."
        };
      }
    }
    if (e.length == 1) {
      return {
        pass: false,
        message: "When only one parameter, it " + "should be error type or error message."
      };
    }
    if (e.length == 2 && typeof e[0] === "function" && e[0].name === t.name) {
      if (typeof e[1] === "string" && t.message === e[1]) {
        return {
          pass: true,
          message: "actual error message is " + t.message + "."
        };
      } else {
        return {
          pass: false,
          message: "except error message is " + e[1] + ",but actual is " + t.message + "."
        };
      }
    }
    if (e.length == 2 && typeof e[0] === "function" && e[0].name !== t.name) {
      if (typeof e[1] === "string" && t.message === e[1]) {
        return {
          pass: false,
          message: "except error type is " + e[0].name + ",but actual is " + t.name + "."
        };
      } else {
        return {
          pass: false,
          message: "except error type and message are incorrect."
        };
      }
    }
    if (e.length > 2) {
      return {
        pass: false,
        message: "Up to two parameters are supported."
      };
    } else {
      return;
    }
  }
  function mt(t) {
    if (!at(t)) {
      return Promise.reject().then((function() {}), (function() {
        return {
          pass: false,
          message: "Expected not be called on a promise."
        };
      }));
    }
    const e = {};
    return Promise.race([ t, Promise.resolve(e) ]).then((function(t) {
      return e === t ? {
        pass: false,
        message: "expect resolve, actualValue is isPending"
      } : {
        pass: true,
        message: "actualValue is isResolved"
      };
    }), (function(t) {
      return {
        pass: false,
        message: "Expected a promise to be resolved but it was " + "rejected with " + JSON.stringify(t) + "."
      };
    }));
  }
  function dt(t, e) {
    if (!at(t)) {
      return Promise.reject().then((function() {}), (function() {
        return {
          pass: false,
          message: "Expected not be called on a promise."
        };
      }));
    }
    function i(t) {
      return "Expected a promise " + (t ? "not " : "") + "to be resolved with " + JSON.stringify(e[0]);
    }
    const s = {};
    return Promise.race([ t, Promise.resolve(s) ]).then((function(t) {
      if (s === t) {
        return {
          pass: false,
          message: "expect resolve, actualValue is isPending"
        };
      }
      if (JSON.stringify(t) == JSON.stringify(e[0])) {
        return {
          pass: true,
          message: "actualValue was resolved with " + JSON.stringify(t) + "."
        };
      } else {
        return {
          pass: false,
          message: i(false) + " but it was resolved with " + JSON.stringify(t) + "."
        };
      }
    }), (function(t) {
      return {
        pass: false,
        message: i(false) + " but it was rejected with " + JSON.stringify(t) + "."
      };
    }));
  }
  class ht {
    constructor(t) {
      this.id = t.id;
      this.matchers = {};
    }
    extendsMatchers() {
      this.matchers.assertNull = B;
      this.matchers.assertClose = F;
      this.matchers.assertContain = V;
      this.matchers.assertLess = W;
      this.matchers.assertLarger = H;
      this.matchers.assertFail = L;
      this.matchers.assertUndefined = z;
      this.matchers.assertFalse = J;
      this.matchers.assertInstanceOf = $;
      this.matchers.assertThrowError = K;
      this.matchers.assertLargerOrEqual = G;
      this.matchers.assertLessOrEqual = q;
      this.matchers.assertNaN = Y;
      this.matchers.assertNegUnlimited = Q;
      this.matchers.assertPosUnlimited = Z;
      this.matchers.assertDeepEquals = tt;
      this.matchers.assertPromiseIsPending = ot;
      this.matchers.assertPromiseIsRejected = lt;
      this.matchers.assertPromiseIsRejectedWith = ut;
      this.matchers.assertPromiseIsRejectedWithError = ft;
      this.matchers.assertPromiseIsResolved = mt;
      this.matchers.assertPromiseIsResolvedWith = dt;
    }
    init(t) {
      this.coreContext = t;
      this.extendsMatchers();
      this.coreContext.getDefaultService("expect").addMatchers(this.matchers);
    }
    apis() {
      return {
        expect: function(t) {
          return this.coreContext.getDefaultService("expect").expect(t);
        }
      };
    }
  }
  async function wt() {
    if (globalThis.__coverage__ === void 0) {
      return;
    }
    const t = JSON.stringify(globalThis.__coverage__);
    const e = t.length;
    const i = 500;
    const a = Math.floor(e / i);
    const n = "OHOS_REPORT_COVERAGE_DATA:";
    for (let e = 0; e <= a; e++) {
      await s.print(`${n} ${t.substring(e * i, (e + 1) * i)}`);
    }
  }
  class St {
    constructor(t) {
      this.delegator = t.delegator;
      this.abilityDelegatorArguments = t.abilityDelegatorArguments;
      this.id = "report";
      this.index = 0;
      this.duration = 0;
    }
    init(t) {
      this.coreContext = t;
      this.suiteService = this.coreContext.getDefaultService("suite");
      this.specService = this.coreContext.getDefaultService("spec");
    }
    taskStart() {}
    async taskDone() {
      if (this.abilityDelegatorArguments !== null) {
        this.taskDoneTime = (new Date).getTime();
        let t = this.suiteService.getSummary();
        if (this.coreContext.getDefaultService("config")["coverage"] === "true") {
          await wt();
        }
        let e = "\n" + "OHOS_REPORT_RESULT: stream=Tests run: " + t.total + ", Failure: " + t.failure;
        e += ", Error: " + t.error;
        e += ", Pass: " + t.pass;
        e += ", Ignore: " + t.ignore;
        e += "\n" + "OHOS_REPORT_CODE: " + (t.failure > 0 ? -1 : 0) + "\n";
        let i = t.failure > 0 || t.error > 0;
        if (this.coreContext.getDefaultService("config").isBreakOnError() && i) {
          e += "\n" + "OHOS_REPORT_RESULT: breakOnError model, Stopping whole test suite if one specific test case failed or error" + "\n";
        }
        e += "OHOS_REPORT_STATUS: taskconsuming=" + t.duration + "\n";
        console.info(e);
        await s.print(e);
      }
      console.info("report print success");
      this.delegator.finishTest("your test finished!!!", 0, (() => {}));
    }
    incorrectFormat() {
      if (this.coreContext.getDefaultService("config").filterValid.length !== 0) {
        var t = "this param " + this.coreContext.getDefaultService("config").filterValid.join(",") + " is invalid" + "\n";
        this.delegator.finishTest(t, 0, (() => {}));
      }
    }
    async suiteStart() {
      if (this.abilityDelegatorArguments !== null) {
        let t = "\n" + "OHOS_REPORT_SUM: " + this.suiteService.getCurrentRunningSuite().getSpecsNum();
        t += "\n" + "OHOS_REPORT_STATUS: class=" + this.suiteService.getCurrentRunningSuite().description + "\n";
        console.info(t);
        await s.print(t);
        console.info(this.suiteService.getCurrentRunningSuite().description + " suiteStart print success");
      }
    }
    async suiteDone() {
      if (this.abilityDelegatorArguments !== null) {
        let t = "\n" + "OHOS_REPORT_STATUS: class=" + this.suiteService.getCurrentRunningSuite().description;
        t += "\n" + "OHOS_REPORT_STATUS: suiteconsuming=" + this.suiteService.getCurrentRunningSuite().duration + "\n";
        console.info(t);
        await s.print(t);
        console.info(this.suiteService.getCurrentRunningSuite().description + " suiteDone print success");
      }
    }
    async specStart() {
      if (this.abilityDelegatorArguments !== null) {
        let t = "\n" + "OHOS_REPORT_STATUS: class=" + this.suiteService.getCurrentRunningSuite().description;
        t += "\n" + "OHOS_REPORT_STATUS: current=" + ++this.index;
        t += "\n" + "OHOS_REPORT_STATUS: id=JS";
        t += "\n" + "OHOS_REPORT_STATUS: numtests=" + this.specService.getTestTotal();
        t += "\n" + "OHOS_REPORT_STATUS: stream=";
        t += "\n" + "OHOS_REPORT_STATUS: test=" + this.specService.currentRunningSpec.description;
        t += "\n" + "OHOS_REPORT_STATUS_CODE: 1" + "\n";
        console.info(t);
        await s.print(t);
        console.info(this.specService.currentRunningSpec.description + " specStart start print success");
      }
    }
    async specDone() {
      if (this.abilityDelegatorArguments !== null) {
        let t = "\n" + "OHOS_REPORT_STATUS: class=" + this.suiteService.getCurrentRunningSuite().description;
        t += "\n" + "OHOS_REPORT_STATUS: current=" + this.index;
        t += "\n" + "OHOS_REPORT_STATUS: id=JS";
        t += "\n" + "OHOS_REPORT_STATUS: numtests=" + this.specService.getTestTotal();
        let e = "";
        if (this.specService.currentRunningSpec.error) {
          t += "\n" + "OHOS_REPORT_STATUS: stack=" + this.specService.currentRunningSpec.error.message;
          t += "\n" + "OHOS_REPORT_STATUS: stream=";
          t += "\n" + "Error in " + this.specService.currentRunningSpec.description;
          t += "\n" + this.specService.currentRunningSpec.error.message;
          t += "\n" + "OHOS_REPORT_STATUS: test=" + this.specService.currentRunningSpec.description;
          t += "\n" + "OHOS_REPORT_STATUS_CODE: -1" + "\n";
        } else if (this.specService.currentRunningSpec.result) {
          if (this.specService.currentRunningSpec.result.failExpects.length > 0) {
            this.specService.currentRunningSpec.result.failExpects.forEach((t => {
              e = t.message || "expect " + t.actualValue + " " + t.checkFunc + " " + t.expectValue;
            }));
            t += "\n" + "OHOS_REPORT_STATUS: stack=" + e;
            t += "\n" + "OHOS_REPORT_STATUS: stream=";
            t += "\n" + "Error in " + this.specService.currentRunningSpec.description;
            t += "\n" + e + "\n" + "OHOS_REPORT_STATUS: test=" + this.specService.currentRunningSpec.description;
            t += "\n" + "OHOS_REPORT_STATUS_CODE: -2" + "\n";
          } else {
            t += "\n" + "OHOS_REPORT_STATUS: stream=";
            t += "\n" + "OHOS_REPORT_STATUS: test=" + this.specService.currentRunningSpec.description;
            t += "\n" + "OHOS_REPORT_STATUS_CODE: 0" + "\n";
          }
        } else {
          t += "\n";
        }
        t += "OHOS_REPORT_STATUS: consuming=" + this.specService.currentRunningSpec.duration + "\n";
        console.info(t);
        await s.print(t);
        console.info(this.specService.currentRunningSpec.description + " specDone end print success");
      }
    }
  }
  const gt = C.getInstance();
  const yt = function(t, e) {
    return Reflect.has(gt, "describe") ? gt.describe(t, e) : (t, e) => {};
  };
  const Tt = function(t, e, i) {
    return Reflect.has(gt, "it") ? gt.it(t, e, i) : (t, e, i) => {};
  };
  const xt = function(t) {
    return Reflect.has(gt, "expect") ? gt.expect(t) : t => {};
  };
  class bt {
    static setData(t) {
      const e = C.getInstance();
      const i = new j({
        data: t
      });
      e.addService("dataDriver", i);
    }
    static setTimeConfig(t) {
      s.systemTime = t;
    }
    static hypiumTest(t, e, i) {
      const a = C.getInstance();
      const n = new ht({
        id: "extend"
      });
      a.addService("expect", n);
      const c = new St({
        delegator: t,
        abilityDelegatorArguments: e
      });
      s.delegator = t;
      a.addService("report", c);
      a.init();
      a.subscribeEvent("spec", c);
      a.subscribeEvent("suite", c);
      a.subscribeEvent("task", c);
      const r = a.getDefaultService("config");
      let o = {};
      if (e !== null) {
        o = r.translateParams(e.parameters);
      }
      console.info("parameters:" + JSON.stringify(o));
      r.setConfig(o);
      i();
      if (Object.prototype.hasOwnProperty.call(globalThis, "setupUiTestEnvironment")) {
        globalThis.setupUiTestEnvironment().then((() => {
          console.info("UiTestKit::after run uitest setup, start run testcases");
          a.execute(t);
        })).catch((e => {
          console.error("UiTestKit:: call setupUiTestEnvironment failure:" + e);
          a.execute(t);
        }));
      } else {
        console.info("UiTestKit:: no need to setup uitest, start run testcases");
        a.execute(t);
      }
    }
  }
  var Ct = globalThis.requireNapi("application.abilityDelegatorRegistry");
  var {UiDriver: vt, BY: Mt, Driver: Rt, ON: Ot, MatchPattern: At, DisplayRotation: Et, ResizeDirection: kt, UiDirection: Nt, MouseButton: Dt, WindowMode: Pt, PointerMatrix: _t} = globalThis.requireNapi("UiTest");
  const It = Ct.getAbilityDelegator();
  Ct.getArguments().bundleName;
  const Ut = 1e3;
  async function jt(t, e) {
    await It.executeShellCommand(`aa start -b ${t} -a ${e}`).then((t => {
      console.info(`UiTestCase, start abilityFinished: ${t}`);
    })).catch((t => {
      console.error(`UiTestCase, start abilityFailed: ${t}`);
    }));
  }
  async function Bt(t) {
    await It.executeShellCommand(`aa force-stop ${t} `).then((t => {
      console.info(`UiTestCase, stop application finished: ${t}`);
    })).catch((t => {
      console.error(`UiTestCase,stop application failed: ${t}`);
    }));
  }
  function Ft() {
    yt("UiTest_API10", (function() {
      Tt("testWithIn", 0, (async function() {
        await jt("com.uitestScene.acts", "com.uitestScene.acts.MainAbility");
        let t = Rt.create();
        await t.delayMs(Ut);
        let e = await t.findComponent(Ot.type("Scroll"));
        let i = await t.findComponent(Ot.within(Ot.type("Scroll")).text("next page"));
        let s = await e.getBounds();
        let a = await i.getBounds();
        xt(s.top < a.top).assertTrue();
        xt(s.bottom > a.bottom).assertTrue();
        xt(s.left < a.right).assertTrue();
        xt(s.right > a.right).assertTrue();
      }));
      Tt("testFling", 0, (async function() {
        await jt("com.uitestScene.acts", "com.uitestScene.acts.MainAbility");
        let t = Rt.create();
        await t.delayMs(Ut);
        await t.fling(Nt.DOWN, 39e3);
        await t.delayMs(Ut);
        let e = await t.findComponents(Ot.text("next page"));
        xt(e).assertNull();
        await t.fling(Nt.LEFT, 39e3);
        await t.delayMs(Ut);
        let i = await t.findComponents(Ot.text("1"));
        xt(i).assertNull();
        await t.fling(Nt.RIGHT, 39e3);
        await t.delayMs(Ut);
        let s = await t.findComponents(Ot.text("2"));
        xt(s).assertNull();
        await t.fling(Nt.UP, 39e3);
        await t.delayMs(2e3);
        let a = await t.findComponents(Ot.text("next page"));
        xt(a != null).assertTrue();
      }));
      Tt("testScreenCapture", 0, (async function() {
        await jt("com.uitestScene.acts", "com.uitestScene.acts.MainAbility");
        let t = Rt.create();
        await t.delayMs(Ut);
        let e = await t.screenCapture("/data/storage/el2/base/cache/1.png", {
          left: 0,
          top: 0,
          right: 100,
          bottom: 100
        });
        xt(e == true).assertTrue();
        await Bt("com.uitestScene.acts");
      }));
      Tt("testMouseClick", 0, (async function() {
        await jt("com.uitestScene.acts", "com.uitestScene.acts.MainAbility");
        let t = Rt.create();
        await t.delayMs(Ut);
        let e = await t.findComponent(Ot.text("jump"));
        let i = await e.getBoundsCenter();
        await t.mouseClick({
          x: i.x,
          y: i.y
        }, Dt.MOUSE_BUTTON_RIGHT);
        await t.delayMs(Ut);
        let s = await t.findComponent(Ot.text("right"));
        xt(s != null).assertTrue();
        await t.mouseClick({
          x: i.x,
          y: i.y
        }, Dt.MOUSE_BUTTON_MIDDLE, 2072, 2045);
        await t.delayMs(Ut);
        let a = await t.findComponent(Ot.text("middle"));
        xt(a != null).assertTrue();
        await t.mouseClick({
          x: i.x,
          y: i.y
        }, Dt.MOUSE_BUTTON_LEFT);
        await t.delayMs(Ut);
        let n = await t.findComponent(Ot.text("jump"));
        xt(n == null).assertTrue();
        await Bt("com.uitestScene.acts");
      }));
      Tt("testMouseMoveTo", 0, (async function() {
        await jt("com.uitestScene.acts", "com.uitestScene.acts.MainAbility");
        let t = Rt.create();
        await t.delayMs(Ut);
        let e = await t.findComponent(Ot.text("jump"));
        let i = await e.getBoundsCenter();
        await t.mouseMoveTo(i);
        await t.delayMs(Ut);
        let s = await t.findComponent(Ot.text("hover"));
        xt(s != null).assertTrue();
        await Bt("com.uitestScene.acts");
      }));
      Tt("testMouseScroll", 0, (async function() {
        await jt("com.uitestScene.acts", "com.uitestScene.acts.MainAbility");
        let t = Rt.create();
        await t.delayMs(Ut);
        let e = await t.findComponent(Ot.type("Scroll"));
        let i = await e.getBoundsCenter();
        await t.mouseScroll(i, true, 30);
        await t.delayMs(Ut);
        let s = await t.findComponent(Ot.text("next page"));
        xt(s == null).assertTrue();
        await t.mouseScroll(i, false, 30, 2072, 2048);
        await t.delayMs(Ut);
        let a = await t.findComponent(Ot.text("next page"));
        xt(a != null).assertTrue();
        await Bt("com.uitestScene.acts");
      }));
      Tt("testInWindow", 0, (async function() {
        await jt("com.uitestScene.acts", "com.uitestScene.acts.MainAbility");
        let t = Rt.create();
        await t.delayMs(Ut);
        let e = await t.findComponent(Ot.inWindow("com.uitestScene.acts").text("next page"));
        xt(e != null).assertTrue();
        await Bt("com.uitestScene.acts");
      }));
      Tt("testMonitor1", 0, (async function() {
        await jt("com.uitestScene.acts", "com.uitestScene.acts.MainAbility");
        let t = Rt.create();
        await t.delayMs(Ut);
        (await t.createUIEventObserver()).once("toastShow", (t => {
          xt(t.bundleName == "com.uitestScene.acts").assertTrue();
          xt(t.text == "toastShow").assertTrue();
          xt(t.type == "Toast").assertTrue();
        }));
        let e = await t.findComponent(Ot.text("toast"));
        await e.click();
        await t.delayMs(Ut);
        await Bt("com.uitestScene.acts");
      }));
      Tt("testMonitor2", 0, (async function() {
        await jt("com.uitestScene.acts", "com.uitestScene.acts.MainAbility");
        let t = Rt.create();
        await t.delayMs(Ut);
        (await t.createUIEventObserver()).once("dialogShow", (t => {
          xt(t.bundleName == "com.uitestScene.acts").assertTrue();
          xt(t.text == "dialogShow").assertTrue();
          xt(t.type == "AlertDialog").assertTrue();
        }));
        let e = await t.findComponent(Ot.text("dialog"));
        await e.click();
        await t.delayMs(Ut);
        await Bt("com.uitestScene.acts");
      }));
    }));
    yt("UiTest_API8", (function() {
      Tt("testInputText", 0, (async function() {
        await jt("com.uitestScene.acts", "com.uitestScene.acts.MainAbility");
        let t = vt.create();
        await t.delayMs(Ut);
        let e = await t.findComponent(Mt.type("TextInput"));
        await e.inputText("123");
        await t.delayMs(Ut);
        let i = await t.findComponent(Mt.type("TextInput"));
        let s = await i.getText();
        xt(s == "123").assertTrue();
        await Bt("com.uitestScene.acts");
      }));
      Tt("testMatchPattern", 0, (async function() {
        await jt("com.uitestScene.acts", "com.uitestScene.acts.MainAbility");
        let t = vt.create();
        await t.delayMs(Ut);
        let e = await t.findComponent(Mt.text("next page", At.EQUALS));
        xt(await e.getText() == "next page").assertTrue();
        let i = await t.findComponent(Mt.text("next", At.STARTS_WITH));
        xt(await i.getText() == "next page").assertTrue();
        let s = await t.findComponent(Mt.text("xt page", At.ENDS_WITH));
        xt(await s.getText() == "next page").assertTrue();
        let a = await t.findComponent(Mt.text("ext", At.CONTAINS));
        xt(await a.getText() == "next page").assertTrue();
        await Bt("com.uitestScene.acts");
      }));
      Tt("testUiComponentClick", 0, (async function() {
        await jt("com.uitestScene.acts", "com.uitestScene.acts.MainAbility");
        let t = vt.create();
        await t.delayMs(Ut);
        let e = await t.findComponent(Mt.text("next page"));
        await e.click();
        await t.delayMs(Ut);
        let i = await t.findComponent(Mt.text("back to index"));
        let s = await i.getText();
        xt(s == "back to index").assertTrue();
        await i.click();
        await Bt("com.uitestScene.acts");
      }));
      Tt("testUiComponentDoubleClick", 0, (async function() {
        await jt("com.uitestScene.acts", "com.uitestScene.acts.MainAbility");
        let t = vt.create();
        await t.delayMs(Ut);
        let e = await t.findComponent(Mt.text("Click twice"));
        await e.doubleClick();
        await t.delayMs(Ut);
        let i = await t.findComponent(Mt.text("doubleClick"));
        let s = await i.getText();
        xt(s == "doubleClick").assertTrue();
        await i.click();
        await Bt("com.uitestScene.acts");
      }));
      Tt("testUiComponentLongClick", 0, (async function() {
        await jt("com.uitestScene.acts", "com.uitestScene.acts.MainAbility");
        let t = vt.create();
        await t.delayMs(Ut);
        let e = await t.findComponent(Mt.text("next page"));
        await e.longClick();
        await t.delayMs(Ut);
        let i = await t.findComponent(Mt.text("longClick"));
        let s = await i.getText();
        xt(s == "longClick").assertTrue();
        await i.click();
        await Bt("com.uitestScene.acts");
      }));
      Tt("testKey", 0, (async function() {
        await jt("com.uitestScene.acts", "com.uitestScene.acts.MainAbility");
        let t = vt.create();
        await t.delayMs(Ut);
        let e = await t.findComponent(Mt.key("my-key"));
        xt(await e.getKey() == "my-key").assertTrue();
        await Bt("com.uitestScene.acts");
      }));
      Tt("testId", 0, (async function() {
        await jt("com.uitestScene.acts", "com.uitestScene.acts.MainAbility");
        let t = vt.create();
        await t.delayMs(Ut);
        let e = await t.findComponent(Mt.text("next page"));
        let i = await e.getId();
        let s = await t.findComponent(Mt.id(i));
        xt(await s.getText() == "next page").assertTrue();
        await Bt("com.uitestScene.acts");
      }));
      Tt("testType", 0, (async function() {
        await jt("com.uitestScene.acts", "com.uitestScene.acts.MainAbility");
        let t = vt.create();
        await t.delayMs(Ut);
        let e = await t.findComponent(Mt.type("Text"));
        let i = await e.getType();
        xt(i == "Text").assertTrue();
        await Bt("com.uitestScene.acts");
      }));
      Tt("testClickable", 0, (async function() {
        await jt("com.uitestScene.acts", "com.uitestScene.acts.MainAbility");
        let t = vt.create();
        await t.delayMs(Ut);
        let e = await t.findComponent(Mt.text("next page").clickable(false));
        let i = await e.isClickable();
        xt(i == false).assertTrue();
        await Bt("com.uitestScene.acts");
      }));
      Tt("testScrollable", 0, (async function() {
        await jt("com.uitestScene.acts", "com.uitestScene.acts.MainAbility");
        let t = vt.create();
        await t.delayMs(Ut);
        let e = await t.findComponent(Mt.type("Scroll"));
        let i = await e.isScrollable();
        xt(i == true).assertTrue();
        await Bt("com.uitestScene.acts");
      }));
      Tt("testEnabled", 0, (async function() {
        await jt("com.uitestScene.acts", "com.uitestScene.acts.MainAbility");
        let t = vt.create();
        await t.delayMs(Ut);
        let e = await t.findComponent(Mt.text("next page").enabled(true));
        let i = await e.isEnabled();
        xt(i == true).assertTrue();
        await Bt("com.uitestScene.acts");
      }));
      Tt("testFocused", 0, (async function() {
        await jt("com.uitestScene.acts", "com.uitestScene.acts.MainAbility");
        let t = vt.create();
        await t.delayMs(Ut);
        let e = await t.findComponent(Mt.text("next page").focused(false));
        let i = await e.isFocused();
        xt(i == false).assertTrue();
        await Bt("com.uitestScene.acts");
      }));
      Tt("testSelected", 0, (async function() {
        await jt("com.uitestScene.acts", "com.uitestScene.acts.MainAbility");
        let t = vt.create();
        await t.delayMs(Ut);
        let e = await t.findComponent(Mt.text("next page").selected(false));
        let i = await e.isSelected();
        xt(i == false).assertTrue();
        await Bt("com.uitestScene.acts");
      }));
      Tt("testPressBack", 0, (async function() {
        await jt("com.uitestScene.acts", "com.uitestScene.acts.MainAbility");
        let t = vt.create();
        await t.delayMs(Ut);
        let e = await t.findComponent(Mt.text("next page"));
        await e.click();
        await t.delayMs(Ut);
        await t.pressBack();
        await t.delayMs(Ut);
        let i = await t.findComponent(Mt.text("next page"));
        xt(await i.getText() == "next page").assertTrue();
        await Bt("com.uitestScene.acts");
      }));
      Tt("testFindComponents", 0, (async function() {
        await jt("com.uitestScene.acts", "com.uitestScene.acts.MainAbility");
        let t = vt.create();
        await t.delayMs(Ut);
        let e = await t.findComponents(Mt.type("Button"));
        xt(await e[0].getText() != null).assertTrue();
        await Bt("com.uitestScene.acts");
      }));
      Tt("testTriggerKey", 0, (async function() {
        await jt("com.uitestScene.acts", "com.uitestScene.acts.MainAbility");
        let t = vt.create();
        await t.delayMs(Ut);
        let e = await t.findComponent(Mt.text("next page"));
        await e.click();
        await t.delayMs(Ut);
        await t.triggerKey(2);
        await t.delayMs(Ut);
        let i = await t.findComponent(Mt.text("next page"));
        xt(await i.getText() == "next page").assertTrue();
        await Bt("com.uitestScene.acts");
      }));
      Tt("testScreenCap", 0, (async function() {
        await jt("com.uitestScene.acts", "com.uitestScene.acts.MainAbility");
        let t = vt.create();
        await t.delayMs(Ut);
        let e = await t.screenCap("/data/storage/el2/base/cache/1.png");
        xt(e == true).assertTrue();
        await Bt("com.uitestScene.acts");
      }));
      Tt("testAssertComponentExist", 0, (async function() {
        await jt("com.uitestScene.acts", "com.uitestScene.acts.MainAbility");
        let t = vt.create();
        await t.delayMs(Ut);
        await t.assertComponentExist(Mt.text("next page"));
        await Bt("com.uitestScene.acts");
      }));
      Tt("testIsBefore", 0, (async function() {
        await jt("com.uitestScene.acts", "com.uitestScene.acts.MainAbility");
        let t = vt.create();
        await t.delayMs(Ut);
        let e = await t.findComponent(Mt.isBefore(Mt.text("Click twice")).type("Button"));
        xt(await e.getType() == "Button").assertTrue();
        await Bt("com.uitestScene.acts");
      }));
      Tt("testIsAfter", 0, (async function() {
        await jt("com.uitestScene.acts", "com.uitestScene.acts.MainAbility");
        let t = vt.create();
        await t.delayMs(Ut);
        let e = await t.findComponent(Mt.isAfter(Mt.text("next page")).type("Text"));
        xt(await e.getText() == "Click twice").assertTrue();
        await Bt("com.uitestScene.acts");
      }));
      Tt("testSwipe", 0, (async function() {
        await jt("com.uitestScene.acts", "com.uitestScene.acts.MainAbility");
        let t = vt.create();
        await t.delayMs(Ut);
        await t.swipe(300, 800, 300, 300);
        let e = await t.findComponent(Mt.text("next page"));
        xt(e == null).assertTrue();
        await Bt("com.uitestScene.acts");
      }));
      Tt("testScrollSearch", 0, (async function() {
        await jt("com.uitestScene.acts", "com.uitestScene.acts.MainAbility");
        let t = vt.create();
        await t.delayMs(Ut);
        let e = await t.findComponent(Mt.type("Scroll"));
        let i = await e.scrollSearch(Mt.text("next page"));
        xt(await i.getText() == "next page").assertTrue();
        await Bt("com.uitestScene.acts");
      }));
    }));
    yt("UiTest_API9", (function() {
      Tt("testInputText", 0, (async function() {
        await jt("com.uitestScene.acts", "com.uitestScene.acts.MainAbility");
        let t = Rt.create();
        await t.delayMs(Ut);
        let e = await t.findComponent(Ot.type("TextInput"));
        await e.inputText("123");
        await t.delayMs(Ut);
        let i = await t.findComponent(Ot.type("TextInput"));
        let s = await i.getText();
        xt(s == "123").assertTrue();
        await Bt("com.uitestScene.acts");
      }));
      Tt("testClearText", 0, (async function() {
        await jt("com.uitestScene.acts", "com.uitestScene.acts.MainAbility");
        let t = Rt.create();
        await t.delayMs(Ut);
        let e = await t.findComponent(Ot.type("TextInput"));
        await e.inputText("abc");
        let i = await t.findComponent(Ot.type("TextInput"));
        await i.clearText();
        await t.delayMs(Ut);
        let s = await t.findComponent(Ot.type("TextInput"));
        let a = await s.getText();
        xt(a).assertEqual("");
        await Bt("com.uitestScene.acts");
      }));
      Tt("testCheckable", 0, (async function() {
        await jt("com.uitestScene.acts", "com.uitestScene.acts.MainAbility");
        let t = Rt.create();
        await t.delayMs(Ut);
        let e = await t.findComponent(Ot.checkable(true).type("Checkbox"));
        let i = await e.isCheckable();
        xt(i == true).assertTrue();
        await Bt("com.uitestScene.acts");
      }));
      Tt("testChecked", 0, (async function() {
        await jt("com.uitestScene.acts", "com.uitestScene.acts.MainAbility");
        let t = Rt.create();
        await t.delayMs(Ut);
        let e = await t.findComponent(Ot.checked(false).type("Checkbox"));
        let i = await e.isChecked();
        xt(i == false).assertTrue();
        await Bt("com.uitestScene.acts");
      }));
      Tt("testMatchPattern", 0, (async function() {
        await jt("com.uitestScene.acts", "com.uitestScene.acts.MainAbility");
        let t = Rt.create();
        await t.delayMs(Ut);
        let e = await t.findComponent(Ot.text("next page", At.EQUALS));
        xt(await e.getText() == "next page").assertTrue();
        let i = await t.findComponent(Ot.text("next", At.STARTS_WITH));
        xt(await i.getText() == "next page").assertTrue();
        let s = await t.findComponent(Ot.text("xt page", At.ENDS_WITH));
        xt(await s.getText() == "next page").assertTrue();
        let a = await t.findComponent(Ot.text("ext", At.CONTAINS));
        xt(await a.getText() == "next page").assertTrue();
        await Bt("com.uitestScene.acts");
      }));
      Tt("testDriverClick", 0, (async function() {
        await jt("com.uitestScene.acts", "com.uitestScene.acts.MainAbility");
        let t = Rt.create();
        await t.delayMs(Ut);
        let e = await t.findComponent(Ot.text("next page"));
        let i = await e.getBoundsCenter();
        await t.click(i.x, i.y);
        await t.delayMs(Ut);
        let s = await t.findComponent(Ot.text("back to index"));
        let a = await s.getText();
        xt(a == "back to index").assertTrue();
        await s.click();
        await Bt("com.uitestScene.acts");
      }));
      Tt("testDriverDoubleClick", 0, (async function() {
        await jt("com.uitestScene.acts", "com.uitestScene.acts.MainAbility");
        let t = Rt.create();
        await t.delayMs(Ut);
        let e = await t.findComponent(Ot.text("Click twice"));
        let i = await e.getBoundsCenter();
        await t.doubleClick(i.x, i.y);
        await t.delayMs(Ut);
        let s = await t.findComponent(Ot.text("doubleClick"));
        let a = await s.getText();
        xt(a == "doubleClick").assertTrue();
        await s.click();
        await Bt("com.uitestScene.acts");
      }));
      Tt("testDriverLongClick", 0, (async function() {
        await jt("com.uitestScene.acts", "com.uitestScene.acts.MainAbility");
        let t = Rt.create();
        await t.delayMs(Ut);
        let e = await t.findComponent(Ot.text("next page"));
        let i = await e.getBoundsCenter();
        await t.longClick(i.x, i.y);
        await t.delayMs(Ut);
        let s = await t.findComponent(Ot.text("longClick"));
        let a = await s.getText();
        xt(a == "longClick").assertTrue();
        await s.click();
        await Bt("com.uitestScene.acts");
      }));
      Tt("testUiComponentClick", 0, (async function() {
        await jt("com.uitestScene.acts", "com.uitestScene.acts.MainAbility");
        let t = Rt.create();
        await t.delayMs(Ut);
        let e = await t.findComponent(Ot.text("next page"));
        await e.click();
        await t.delayMs(Ut);
        let i = await t.findComponent(Ot.text("back to index"));
        let s = await i.getText();
        xt(s == "back to index").assertTrue();
        await i.click();
        await Bt("com.uitestScene.acts");
      }));
      Tt("testUiComponentDoubleClick", 0, (async function() {
        await jt("com.uitestScene.acts", "com.uitestScene.acts.MainAbility");
        let t = Rt.create();
        await t.delayMs(Ut);
        let e = await t.findComponent(Ot.text("Click twice"));
        await e.doubleClick();
        await t.delayMs(Ut);
        let i = await t.findComponent(Ot.text("doubleClick"));
        let s = await i.getText();
        xt(s == "doubleClick").assertTrue();
        await i.click();
        await Bt("com.uitestScene.acts");
      }));
      Tt("testUiComponentLongClick", 0, (async function() {
        await jt("com.uitestScene.acts", "com.uitestScene.acts.MainAbility");
        let t = Rt.create();
        await t.delayMs(Ut);
        let e = await t.findComponent(Ot.text("next page"));
        await e.longClick();
        await t.delayMs(Ut);
        let i = await t.findComponent(Ot.text("longClick"));
        let s = await i.getText();
        xt(s == "longClick").assertTrue();
        await i.click();
        await Bt("com.uitestScene.acts");
      }));
      Tt("testKey", 0, (async function() {
        await jt("com.uitestScene.acts", "com.uitestScene.acts.MainAbility");
        let t = Rt.create();
        await t.delayMs(Ut);
        let e = await t.findComponent(Ot.id("my-key"));
        xt(await e.getId() == "my-key").assertTrue();
        await Bt("com.uitestScene.acts");
      }));
      Tt("testType", 0, (async function() {
        await jt("com.uitestScene.acts", "com.uitestScene.acts.MainAbility");
        let t = Rt.create();
        await t.delayMs(Ut);
        let e = await t.findComponent(Ot.type("Text"));
        let i = await e.getType();
        xt(i == "Text").assertTrue();
        await Bt("com.uitestScene.acts");
      }));
      Tt("testClickable", 0, (async function() {
        await jt("com.uitestScene.acts", "com.uitestScene.acts.MainAbility");
        let t = Rt.create();
        await t.delayMs(Ut);
        let e = await t.findComponent(Ot.text("next page").clickable(false));
        let i = await e.isClickable();
        xt(i == false).assertTrue();
        await Bt("com.uitestScene.acts");
      }));
      Tt("testLongClickable", 0, (async function() {
        await jt("com.uitestScene.acts", "com.uitestScene.acts.MainAbility");
        let t = Rt.create();
        await t.delayMs(Ut);
        let e = await t.findComponent(Ot.text("next page").longClickable(false));
        let i = await e.isLongClickable();
        xt(i == false).assertTrue();
        await Bt("com.uitestScene.acts");
      }));
      Tt("testScrollable", 0, (async function() {
        await jt("com.uitestScene.acts", "com.uitestScene.acts.MainAbility");
        let t = Rt.create();
        await t.delayMs(Ut);
        let e = await t.findComponent(Ot.type("Scroll"));
        let i = await e.isScrollable();
        xt(i == true).assertTrue();
        await Bt("com.uitestScene.acts");
      }));
      Tt("testEnabled", 0, (async function() {
        await jt("com.uitestScene.acts", "com.uitestScene.acts.MainAbility");
        let t = Rt.create();
        await t.delayMs(Ut);
        let e = await t.findComponent(Ot.text("next page").enabled(true));
        let i = await e.isEnabled();
        xt(i == true).assertTrue();
        await Bt("com.uitestScene.acts");
      }));
      Tt("testFocused", 0, (async function() {
        await jt("com.uitestScene.acts", "com.uitestScene.acts.MainAbility");
        let t = Rt.create();
        await t.delayMs(Ut);
        let e = await t.findComponent(Ot.text("next page").focused(false));
        let i = await e.isFocused();
        xt(i == false).assertTrue();
        await Bt("com.uitestScene.acts");
      }));
      Tt("testSelected", 0, (async function() {
        await jt("com.uitestScene.acts", "com.uitestScene.acts.MainAbility");
        let t = Rt.create();
        await t.delayMs(Ut);
        let e = await t.findComponent(Ot.text("next page").selected(false));
        let i = await e.isSelected();
        xt(i == false).assertTrue();
        await Bt("com.uitestScene.acts");
      }));
      Tt("testPressBack", 0, (async function() {
        await jt("com.uitestScene.acts", "com.uitestScene.acts.MainAbility");
        let t = Rt.create();
        await t.delayMs(Ut);
        let e = await t.findComponent(Ot.text("next page"));
        await e.click();
        await t.delayMs(Ut);
        await t.pressBack();
        await t.delayMs(Ut);
        let i = await t.findComponent(Ot.text("next page"));
        xt(await i.getText() == "next page").assertTrue();
        await Bt("com.uitestScene.acts");
      }));
      Tt("testFindComponents", 0, (async function() {
        await jt("com.uitestScene.acts", "com.uitestScene.acts.MainAbility");
        let t = Rt.create();
        await t.delayMs(Ut);
        let e = await t.findComponents(Ot.type("Button"));
        xt(await e[0].getText() != null).assertTrue();
        await Bt("com.uitestScene.acts");
      }));
      Tt("testTriggerKey", 0, (async function() {
        await jt("com.uitestScene.acts", "com.uitestScene.acts.MainAbility");
        let t = Rt.create();
        await t.delayMs(Ut);
        let e = await t.findComponent(Ot.text("next page"));
        await e.click();
        await t.delayMs(Ut);
        await t.triggerKey(2);
        await t.delayMs(Ut);
        let i = await t.findComponent(Ot.text("next page"));
        xt(await i.getText() == "next page").assertTrue();
        await Bt("com.uitestScene.acts");
      }));
      Tt("testTriggerCombineKeys", 0, (async function() {
        await jt("com.uitestScene.acts", "com.uitestScene.acts.MainAbility");
        let t = Rt.create();
        await t.delayMs(2e3);
        let e = await t.findComponent(Ot.type("TextInput"));
        let i = await e.getBoundsCenter();
        await e.inputText("123");
        await t.click(i.x, i.y);
        await t.delayMs(Ut);
        await t.triggerCombineKeys(2072, 2017);
        await t.delayMs(Ut);
        await t.triggerCombineKeys(2072, 2019);
        await t.triggerCombineKeys(2072, 2038);
        let s = await t.findComponent(Ot.type("TextInput"));
        xt(await s.getText() == "123123").assertTrue();
        await Bt("com.uitestScene.acts");
      }));
      Tt("testGetUiComponentBounds", 0, (async function() {
        await jt("com.uitestScene.acts", "com.uitestScene.acts.MainAbility");
        let t = Rt.create();
        await t.delayMs(Ut);
        let e = await t.findComponent(Ot.text("next page"));
        xt(e !== null).assertTrue();
        let i = await e.getBounds();
        xt(i !== null).assertTrue();
        xt(i.right).assertLarger(i.left);
        xt(i.bottom).assertLarger(i.top);
        await Bt("com.uitestScene.acts");
      }));
      Tt("testGetUiComponentBoundsCenter", 0, (async function() {
        await jt("com.uitestScene.acts", "com.uitestScene.acts.MainAbility");
        let t = Rt.create();
        await t.delayMs(Ut);
        let e = await t.findComponent(Ot.text("next page"));
        let i = await e.getBoundsCenter();
        xt(i !== null).assertTrue();
        await Bt("com.uitestScene.acts");
      }));
      Tt("testWaitForComponent", 0, (async function() {
        await jt("com.uitestScene.acts", "com.uitestScene.acts.MainAbility");
        let t = Rt.create();
        await t.delayMs(Ut);
        let e = await t.waitForComponent(Ot.text("next page"), Ut);
        xt(e !== null).assertTrue();
        await Bt("com.uitestScene.acts");
      }));
      Tt("testScreenCap", 0, (async function() {
        await jt("com.uitestScene.acts", "com.uitestScene.acts.MainAbility");
        let t = Rt.create();
        await t.delayMs(Ut);
        let e = await t.screenCap("/data/storage/el2/base/cache/1.png");
        xt(e == true).assertTrue();
        await Bt("com.uitestScene.acts");
      }));
      Tt("testAssertComponentExist", 0, (async function() {
        await jt("com.uitestScene.acts", "com.uitestScene.acts.MainAbility");
        let t = Rt.create();
        await t.delayMs(Ut);
        await t.assertComponentExist(Ot.text("next page"));
        await Bt("com.uitestScene.acts");
      }));
      Tt("testIsBefore", 0, (async function() {
        await jt("com.uitestScene.acts", "com.uitestScene.acts.MainAbility");
        let t = Rt.create();
        await t.delayMs(Ut);
        let e = await t.findComponent(Ot.isBefore(Ot.text("Click twice")).type("Button"));
        xt(await e.getType() == "Button").assertTrue();
        await Bt("com.uitestScene.acts");
      }));
      Tt("testIsAfter", 0, (async function() {
        await jt("com.uitestScene.acts", "com.uitestScene.acts.MainAbility");
        let t = Rt.create();
        await t.delayMs(Ut);
        let e = await t.findComponent(Ot.isAfter(Ot.text("next page")).type("Text"));
        xt(await e.getText() == "Click twice").assertTrue();
        await Bt("com.uitestScene.acts");
      }));
      Tt("testSwipe", 0, (async function() {
        await jt("com.uitestScene.acts", "com.uitestScene.acts.MainAbility");
        let t = Rt.create();
        await t.delayMs(Ut);
        await t.swipe(300, 800, 300, 300);
        let e = await t.findComponent(Ot.text("next page"));
        xt(e == null).assertTrue();
        let i = await t.findComponent(Ot.type("Scroll"));
        await i.scrollToTop();
        await Bt("com.uitestScene.acts");
      }));
      Tt("testFling", 0, (async function() {
        await jt("com.uitestScene.acts", "com.uitestScene.acts.MainAbility");
        let t = Rt.create();
        await t.delayMs(Ut);
        await t.fling({
          x: 300,
          y: 600
        }, {
          x: 300,
          y: 300
        }, 20, 600);
        let e = await t.findComponent(Ot.text("next page"));
        xt(e == null).assertTrue();
        let i = await t.findComponent(Ot.type("Scroll"));
        await i.scrollToTop();
        await Bt("com.uitestScene.acts");
      }));
      Tt("testScrollSearch", 0, (async function() {
        await jt("com.uitestScene.acts", "com.uitestScene.acts.MainAbility");
        let t = Rt.create();
        await t.delayMs(Ut);
        let e = await t.findComponent(Ot.type("Scroll"));
        let i = await e.scrollSearch(Ot.text("next page"));
        xt(await i.getText() == "next page").assertTrue();
        await Bt("com.uitestScene.acts");
      }));
      Tt("testScrollToBottom", 0, (async function() {
        await jt("com.uitestScene.acts", "com.uitestScene.acts.MainAbility");
        let t = Rt.create();
        await t.delayMs(Ut);
        let e = await t.findComponent(Ot.type("Scroll"));
        xt(e != null).assertTrue();
        await e.scrollToBottom();
        let i = await t.findComponent(Ot.text("bottom"));
        xt(await i.getText() == "bottom").assertTrue();
        await e.scrollToTop();
        await Bt("com.uitestScene.acts");
      }));
      Tt("testScrollToTop", 0, (async function() {
        await jt("com.uitestScene.acts", "com.uitestScene.acts.MainAbility");
        let t = Rt.create();
        await t.delayMs(Ut);
        let e = await t.findComponent(Ot.type("Scroll"));
        xt(e !== null).assertTrue();
        await e.scrollToBottom();
        await e.scrollToTop();
        let i = await t.findComponent(Ot.text("next page"));
        xt(await i.getText() == "next page").assertTrue();
        await Bt("com.uitestScene.acts");
      }));
      Tt("testPinch", 0, (async function() {
        await jt("com.uitestScene.acts", "com.uitestScene.acts.MainAbility");
        let t = Rt.create();
        await t.delayMs(Ut);
        let e = await t.findComponent(Ot.text("jump"));
        await e.click();
        await t.delayMs(Ut);
        let i = await t.findComponent(Ot.type("Image"));
        let s = await i.getBounds();
        await i.pinchIn(.5);
        await t.delayMs(Ut);
        let a = await t.findComponent(Ot.type("Image"));
        let n = await a.getBounds();
        xt(n != s).assertTrue();
        await a.pinchOut(1.2);
        let c = await t.findComponent(Ot.type("Image"));
        let r = await c.getBounds();
        xt(r != n).assertTrue();
        await t.pressBack();
        await Bt("com.uitestScene.acts");
      }));
      Tt("testInjectMultiPointerAction", 0, (async function() {
        await jt("com.uitestScene.acts", "com.uitestScene.acts.MainAbility");
        let t = Rt.create();
        await t.delayMs(Ut);
        let e = await t.findComponent(Ot.text("jump"));
        await e.click();
        await t.delayMs(Ut);
        let i = await t.findComponent(Ot.type("Image"));
        let s = await i.getBounds();
        let a = _t.create(2, 11);
        await t.delayMs(300);
        a.setPoint(0, 0, {
          x: 245,
          y: 480
        });
        a.setPoint(0, 1, {
          x: 250,
          y: 480
        });
        a.setPoint(0, 2, {
          x: 255,
          y: 480
        });
        a.setPoint(0, 3, {
          x: 260,
          y: 480
        });
        a.setPoint(0, 4, {
          x: 265,
          y: 480
        });
        a.setPoint(0, 5, {
          x: 270,
          y: 480
        });
        a.setPoint(0, 6, {
          x: 275,
          y: 480
        });
        a.setPoint(0, 7, {
          x: 280,
          y: 480
        });
        a.setPoint(0, 8, {
          x: 285,
          y: 480
        });
        a.setPoint(0, 9, {
          x: 290,
          y: 480
        });
        a.setPoint(0, 10, {
          x: 295,
          y: 480
        });
        a.setPoint(1, 0, {
          x: 505,
          y: 480
        });
        a.setPoint(1, 1, {
          x: 500,
          y: 480
        });
        a.setPoint(1, 2, {
          x: 495,
          y: 480
        });
        a.setPoint(1, 3, {
          x: 490,
          y: 480
        });
        a.setPoint(1, 4, {
          x: 485,
          y: 480
        });
        a.setPoint(1, 5, {
          x: 480,
          y: 480
        });
        a.setPoint(1, 6, {
          x: 475,
          y: 480
        });
        a.setPoint(1, 7, {
          x: 470,
          y: 480
        });
        a.setPoint(1, 8, {
          x: 465,
          y: 480
        });
        a.setPoint(1, 9, {
          x: 460,
          y: 480
        });
        a.setPoint(1, 10, {
          x: 455,
          y: 480
        });
        await t.injectMultiPointerAction(a, 600);
        let n = await t.findComponent(Ot.type("Image"));
        let c = await n.getBounds();
        xt(c != s).assertTrue();
        await t.pressBack();
        await Bt("com.uitestScene.acts");
      }));
      Tt("testGetWindowMode", 0, (async function() {
        await jt("com.uitestScene.acts", "com.uitestScene.acts.MainAbility");
        let t = Rt.create();
        await t.delayMs(Ut);
        let e = await t.findWindow({
          bundleName: "com.uitestScene.acts"
        });
        let i = await e.getWindowMode();
        xt(i == Pt.FULLSCREEN).assertTrue();
        try {
          await e.resume();
          let i = await t.findWindow({
            bundleName: "com.uitestScene.acts"
          });
          let s = await i.getWindowMode();
          xt(s == Pt.FLOATING).assertTrue();
          xt(s != Pt.SECONDARY).assertTrue();
          xt(s != Pt.PRIMARY).assertTrue();
          await Bt("com.uitestScene.acts");
        } catch (t) {
          if (t.message == "this device can not support this action") {
            xt(e != null).assertTrue();
          } else {
            xt(false).assertTrue();
          }
        }
      }));
      Tt("testGetBundleName", 0, (async function() {
        await jt("com.uitestScene.acts", "com.uitestScene.acts.MainAbility");
        let t = Rt.create();
        await t.delayMs(Ut);
        let e = await t.findWindow({
          bundleName: "com.uitestScene.acts"
        });
        let i = await e.getBundleName();
        xt(i == "com.uitestScene.acts").assertTrue();
        await Bt("com.uitestScene.acts");
      }));
      Tt("testGetTitle", 0, (async function() {
        await jt("com.uitestScene.acts", "com.uitestScene.acts.MainAbility");
        let t = Rt.create();
        await t.delayMs(Ut);
        let e = await t.findWindow({
          bundleName: "com.uitestScene.acts"
        });
        let i = await e.getTitle();
        xt(i == "").assertTrue();
        await Bt("com.uitestScene.acts");
      }));
      Tt("testWindowMoveTo", 0, (async function() {
        await jt("com.uitestScene.acts", "com.uitestScene.acts.MainAbility");
        let t = Rt.create();
        await t.delayMs(Ut);
        let e = await t.findWindow({
          bundleName: "com.uitestScene.acts"
        });
        try {
          await e.resume();
          await t.delayMs(Ut);
          let i = await t.findWindow({
            bundleName: "com.uitestScene.acts"
          });
          let s = await i.getBounds();
          await i.moveTo(100, 100);
          await t.delayMs(Ut);
          let a = await t.findWindow({
            bundleName: "com.uitestScene.acts"
          });
          let n = await a.getBounds();
          xt(s != n).assertTrue();
          await Bt("com.uitestScene.acts");
        } catch (t) {
          if (t.message == "this device can not support this action") {
            xt(e != null).assertTrue();
          } else {
            xt(false).assertTrue();
          }
        }
      }));
      Tt("testWindowResizeA", 0, (async function() {
        await jt("com.uitestScene.acts", "com.uitestScene.acts.MainAbility");
        let t = Rt.create();
        await t.delayMs(Ut);
        let e = await t.findWindow({
          bundleName: "com.uitestScene.acts"
        });
        try {
          await e.resume();
          await t.delayMs(Ut);
          let i = await t.findWindow({
            bundleName: "com.uitestScene.acts"
          });
          let s = await i.getBounds();
          await i.resize(600, 600, kt.RIGHT_DOWN);
          await t.delayMs(Ut);
          let a = await t.findWindow({
            bundleName: "com.uitestScene.acts"
          });
          let n = await a.getBounds();
          xt(n != s).assertTrue();
          await a.resize(400, 400, kt.RIGHT_UP);
          let c = await t.findWindow({
            bundleName: "com.uitestScene.acts"
          });
          let r = await c.getBounds();
          xt(r != n).assertTrue();
          await c.resize(300, 300, kt.LEFT_DOWN);
          let o = await t.findWindow({
            bundleName: "com.uitestScene.acts"
          });
          let l = await o.getBounds();
          xt(l != r).assertTrue();
          await o.resize(500, 500, kt.LEFT_UP);
          let u = await t.findWindow({
            bundleName: "com.uitestScene.acts"
          });
          let f = await u.getBounds();
          xt(f != l).assertTrue();
          await Bt("com.uitestScene.acts");
        } catch (t) {
          if (t.message == "this device can not support this action") {
            xt(e != null).assertTrue();
          } else {
            xt(false).assertTrue();
          }
        }
      }));
      Tt("testWindowResizeB", 0, (async function() {
        await jt("com.uitestScene.acts", "com.uitestScene.acts.MainAbility");
        let t = Rt.create();
        await t.delayMs(Ut);
        let e = await t.findWindow({
          bundleName: "com.uitestScene.acts"
        });
        try {
          await e.resume();
          await t.delayMs(Ut);
          let i = await t.findWindow({
            bundleName: "com.uitestScene.acts"
          });
          let s = await i.getBounds();
          await i.resize(s.right - s.left, 300, kt.DOWN);
          let a = await t.findWindow({
            bundleName: "com.uitestScene.acts"
          });
          let n = await a.getBounds();
          xt(n != s).assertTrue();
          await a.resize(n.right - n.left, 500, kt.UP);
          let c = await t.findWindow({
            bundleName: "com.uitestScene.acts"
          });
          let r = await c.getBounds();
          xt(r != n).assertTrue();
          await c.resize(300, r.bottom - r.top, kt.LEFT);
          let o = await t.findWindow({
            bundleName: "com.uitestScene.acts"
          });
          let l = await o.getBounds();
          xt(l != r).assertTrue();
          await o.resize(500, l.bottom - l.top, kt.RIGHT);
          let u = await t.findWindow({
            bundleName: "com.uitestScene.acts"
          });
          let f = await u.getBounds();
          xt(f != l).assertTrue();
          await Bt("com.uitestScene.acts");
        } catch (t) {
          if (t.message == "this device can not support this action") {
            xt(e != null).assertTrue();
          } else {
            xt(false).assertTrue();
          }
        }
      }));
      Tt("testWindowAttr", 0, (async function() {
        await jt("com.uitestScene.acts", "com.uitestScene.acts.MainAbility");
        let t = Rt.create();
        await t.delayMs(Ut);
        let e = await t.findWindow({
          bundleName: "com.uitestScene.acts",
          focused: true,
          actived: true,
          title: ""
        });
        await e.focus();
        let i = await e.isFocused();
        let s = await e.isActived();
        xt(i == true).assertTrue();
        xt(s == true).assertTrue();
        await Bt("com.uitestScene.acts");
      }));
      Tt("testWindowMaximize", 0, (async function() {
        await jt("com.uitestScene.acts", "com.uitestScene.acts.MainAbility");
        let t = Rt.create();
        await t.delayMs(Ut);
        let e = await t.findWindow({
          bundleName: "com.uitestScene.acts"
        });
        try {
          await e.resume();
          let i = await t.findWindow({
            bundleName: "com.uitestScene.acts"
          });
          await i.maximize();
          await t.delayMs(Ut);
          let s = await t.findWindow({
            bundleName: "com.uitestScene.acts"
          });
          let a = await s.getWindowMode();
          xt(a == Pt.FULLSCREEN).assertTrue();
          await Bt("com.uitestScene.acts");
        } catch (t) {
          if (t.message == "this device can not support this action") {
            xt(e != null).assertTrue();
          } else {
            xt(false).assertTrue();
          }
        }
      }));
      Tt("testWindowMinimize", 0, (async function() {
        await jt("com.uitestScene.acts", "com.uitestScene.acts.MainAbility");
        let t = Rt.create();
        await t.delayMs(Ut);
        let e = await t.findWindow({
          bundleName: "com.uitestScene.acts"
        });
        try {
          await e.minimize();
          await t.delayMs(Ut);
          let i = await t.findWindow({
            bundleName: "com.uitestScene.acts"
          });
          xt(i == null).assertTrue();
          await Bt("com.uitestScene.acts");
        } catch (t) {
          if (t.message == "this device can not support this action") {
            xt(e != null).assertTrue();
          } else {
            xt(false).assertTrue();
          }
        }
      }));
      Tt("testWindowClose", 0, (async function() {
        await jt("com.uitestScene.acts", "com.uitestScene.acts.MainAbility");
        let t = Rt.create();
        await t.delayMs(Ut);
        let e = await t.findWindow({
          bundleName: "com.uitestScene.acts"
        });
        try {
          await e.close();
          await t.delayMs(Ut);
          let i = await t.findWindow({
            bundleName: "com.uitestScene.acts"
          });
          xt(i == null).assertTrue();
        } catch (t) {
          if (t.message == "this device can not support this action") {
            xt(e != null).assertTrue();
          } else {
            xt(false).assertTrue();
          }
        }
      }));
      Tt("testGetDisplaySize", 0, (async function() {
        await jt("com.uitestScene.acts", "com.uitestScene.acts.MainAbility");
        let t = Rt.create();
        await t.delayMs(Ut);
        let e = await t.getDisplaySize();
        xt(e.x != 0).assertTrue();
        xt(e.y != 0).assertTrue();
        await Bt("com.uitestScene.acts");
      }));
      Tt("testGetDisplayDensity", 0, (async function() {
        await jt("com.uitestScene.acts", "com.uitestScene.acts.MainAbility");
        let t = Rt.create();
        await t.delayMs(Ut);
        let e = await t.getDisplayDensity();
        xt(e.x != 0).assertTrue();
        xt(e.y != 0).assertTrue();
        await Bt("com.uitestScene.acts");
      }));
      Tt("testDisplayRotation", 0, (async function() {
        await jt("com.uitestScene.acts", "com.uitestScene.acts.MainAbility");
        let t = Rt.create();
        await t.delayMs(Ut);
        await t.setDisplayRotation(Et.ROTATION_180);
        let e = await t.getDisplayRotation();
        if (e == Et.ROTATION_180) {
          console.info("The device is displayed in vertical on default");
          await t.setDisplayRotation(Et.ROTATION_90);
          await t.delayMs(Ut);
          let e = await t.getDisplayRotation();
          xt(e == Et.ROTATION_90);
          await t.setDisplayRotation(Et.ROTATION_180);
          await t.delayMs(Ut);
          let i = await t.getDisplayRotation();
          xt(i == Et.ROTATION_180);
          await t.setDisplayRotation(Et.ROTATION_270);
          await t.delayMs(Ut);
          let s = await t.getDisplayRotation();
          xt(s == Et.ROTATION_270);
          await t.setDisplayRotation(Et.ROTATION_0);
          await t.delayMs(Ut);
          let a = await t.getDisplayRotation();
          xt(a == Et.ROTATION_0);
        } else if (e == Et.ROTATION_270) {
          console.info("The device is displayed in horizontal on default");
          await t.setDisplayRotation(Et.ROTATION_90);
          await t.delayMs(Ut);
          let e = await t.getDisplayRotation();
          xt(e == Et.ROTATION_0);
          await t.setDisplayRotation(Et.ROTATION_180);
          await t.delayMs(Ut);
          let i = await t.getDisplayRotation();
          xt(i == Et.ROTATION_270);
          await t.setDisplayRotation(Et.ROTATION_270);
          await t.delayMs(Ut);
          let s = await t.getDisplayRotation();
          xt(s == Et.ROTATION_180);
          await t.setDisplayRotation(Et.ROTATION_0);
          await t.delayMs(Ut);
          let a = await t.getDisplayRotation();
          xt(a == Et.ROTATION_90);
          await t.setDisplayRotation(Et.ROTATION_90);
        }
        await Bt("com.uitestScene.acts");
      }));
      Tt("testSetDisplayRotationEnabled", 0, (async function() {
        await jt("com.uitestScene.acts", "com.uitestScene.acts.MainAbility");
        let t = Rt.create();
        await t.setDisplayRotation(Et.ROTATION_180);
        let e = await t.getDisplayRotation();
        await t.setDisplayRotationEnabled(true);
        await t.setDisplayRotation(Et.ROTATION_90);
        await t.delayMs(Ut);
        let i = await t.getDisplayRotation();
        if (e == Et.ROTATION_180) {
          console.info("The device is displayed in vertical on default");
          xt(i == Et.ROTATION_90);
          await t.setDisplayRotation(Et.ROTATION_0);
        } else {
          xt(i == Et.ROTATION_0);
          console.info("The device is displayed in horizontal on default");
        }
        await Bt("com.uitestScene.acts");
      }));
      Tt("testWakeUpDisplay", 0, (async function() {
        await jt("com.uitestScene.acts", "com.uitestScene.acts.MainAbility");
        let t = Rt.create();
        await t.delayMs(Ut);
        await t.wakeUpDisplay();
        await Bt("com.uitestScene.acts");
      }));
      Tt("testPressHome", 0, (async function() {
        await jt("com.uitestScene.acts", "com.uitestScene.acts.MainAbility");
        let t = Rt.create();
        await t.delayMs(Ut);
        await t.pressHome();
        let e = await t.findComponent(Ot.text("next page"));
        xt(e != null).assertTrue();
        await Bt("com.uitestScene.acts");
      }));
      Tt("testWaitForIdle", 0, (async function() {
        await jt("com.uitestScene.acts", "com.uitestScene.acts.MainAbility");
        let t = Rt.create();
        await t.delayMs(2e3);
        await t.waitForIdle(4e3, 5e3);
        xt(true).assertTrue();
        await Bt("com.uitestScene.acts");
      }));
      Tt("testDrag", 0, (async function() {
        await jt("com.uitestScene.acts", "com.uitestScene.acts.MainAbility");
        let t = Rt.create();
        await t.delayMs(Ut);
        let e = await t.findComponent(Ot.text("jump"));
        await e.longClick();
        await t.delayMs(Ut);
        let i = await t.findComponent(Ot.text("one"));
        let s = await t.findComponent(Ot.text("two"));
        let a = await i.getBoundsCenter();
        let n = await s.getBoundsCenter();
        await t.drag(a.x, a.y, n.x, n.y);
        await t.delayMs(Ut);
        let c = await t.findComponent(Ot.text("one").isBefore(Ot.text("two")));
        xt(c == null).assertTrue();
        await Bt("com.uitestScene.acts");
      }));
      Tt("testDragTo", 0, (async function() {
        await jt("com.uitestScene.acts", "com.uitestScene.acts.MainAbility");
        let t = Rt.create();
        await t.delayMs(Ut);
        let e = await t.findComponent(Ot.text("jump"));
        await e.longClick();
        await t.delayMs(Ut);
        let i = await t.findComponent(Ot.text("one"));
        let s = await t.findComponent(Ot.text("two"));
        await i.dragTo(s);
        await t.delayMs(Ut);
        let a = await t.findComponent(Ot.text("one").isBefore(Ot.text("two")));
        xt(a == null).assertTrue();
        await Bt("com.uitestScene.acts");
      }));
      Tt("testSplit", 0, (async function() {
        await jt("com.uitestScene.acts", "com.uitestScene.acts.MainAbility");
        let t = Rt.create();
        await t.delayMs(Ut);
        let e = await t.findWindow({
          bundleName: "com.uitestScene.acts"
        });
        try {
          await e.split();
          await t.delayMs(Ut);
          let i = await t.findComponent(Ot.type("DecorBar"));
          xt(i == null).assertTrue();
        } catch (t) {
          if (t.message == "this device can not support this action") {
            xt(e != null).assertTrue();
          } else {
            xt(false).assertTrue();
          }
        }
        await Bt("com.uitestScene.acts");
      }));
    }));
  }
  function Vt() {
    Ft();
  }
  var Wt = globalThis.requireNapi("hilog");
  var Ht = globalThis.requireNapi("app.ability.abilityDelegatorRegistry");
  var Lt = {
    onCreate() {
      Wt.info(0, "testTag", "%{public}s", "Application onCreate");
      var t;
      t = Ht.getAbilityDelegator();
      var e;
      e = Ht.getArguments();
      Wt.info(0, "testTag", "%{public}s", "start run testcase!!!");
      e.parameters["-s timeout"] = 3e5;
      setTimeout((() => {
        bt.hypiumTest(t, e, Vt);
      }), 3e3);
    },
    onDestroy() {
      Wt.info(0, "testTag", "%{public}s", "Application onDestroy");
    }
  };
  exports.default = Lt;
})();
//# sourceMappingURL=app.js.map
