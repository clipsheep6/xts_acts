// import {expectedFlightPlans} from './expectations';
import {_faaAirways} from './airways';
import {_faaWaypoints} from './waypoints';
import {UnicodeStrings,useUnicode} from './use-unicode';

interface E<T,V>{}

let TwoPI:number = Math.PI * 2;
let earthRadius:number = 3440.0; // In nautical miles.
let degreeCharacter:string = "\u00b0";
let regExpOptionalUnicodeFlag: string|undefined;
function debugLog(str: string): void {
  // print(str)
}

function keywords(text: string):string {
  if (useUnicode) {
    regExpOptionalUnicodeFlag = "u";
    let str = UnicodeStrings.get(text);
    return str?str:'';
  } else {
    regExpOptionalUnicodeFlag = "";

    return text;
  }
}
function status(text: string) {
  // debugLog("Status: " + text);
}

function error(text: string) {
  // debugLog("Error: " + text);
}

class NumberUtils {
  static toRadians(num: number): number {
    return num * Math.PI / 180;
  }
  static toDegrees(num: number): number {
    return num * 180 / Math.PI;
  }
}


function distanceFromSpeedAndTime(speed: number, time: Time | undefined): number {
  if (time) {
    return speed * time.hours();
  }else{
    return 0
  }

}

let LatRE = new RegExp("^([NS\\-])?(90|[0-8]?\\d)(?:( [0-5]?\\d\\.\\d{0,3})'?|(\\.\\d{0,6})|( ([0-5]?\\d)\" ?([0-5]?\\d)'?))?", "i" + (regExpOptionalUnicodeFlag || ""));

function decimalLatitudeFromString(latitudeString: string): number {
  let match = latitudeString.match(LatRE);

  if (!match)
    return 0;

  let result = 0;
  let sign = 1;

  if (match[1] && (match[1].toUpperCase() == "S" || match[1] == "-"))
    sign = -1;

  result = Number(match[2]);

  if (result != 90) {
    if (match[3]) {

      let minutes = Number(match[3]);
      result = result + (minutes / 60);
    } else if (match[4]) {

      let decimalDegrees = Number(match[4]);
      result = result + decimalDegrees;
    } else if (match[5]) {

      let degrees = Number(match[6]);
      let minutes = Number(match[7]);
      result = result + (degrees + minutes / 60) / 60;
    }
  }
  return result * sign;
}

let LongRE = new RegExp("^([EW\\-]?)(180|(?:1[0-7]|\\d)?\\d)(?:( [0-5]?\\d\\.\\d{0,3})|(\\.\\d{0,6})|( ([0-5]?\\d)\" ?([0-5]?\\d)'?)?)", "i" + (regExpOptionalUnicodeFlag || ""));

function decimalLongitudeFromString(longitudeString: string): number {
  let match = longitudeString.match(LongRE);

  if (!match)
    return 0;

  let result = 0;
  let sign = 1;

  if (match[1] && (match[1].toUpperCase() == "W" || match[1] == "-"))
    sign = -1;

  result = Number(match[2]);

  if (result != 180) {
    if (match[3]) {

      let minutes = Number(match[3]);
      result = result + (minutes / 60);
    } else if (match[4]) {

      let decimalDegrees = Number(match[4]);
      result = result + decimalDegrees;
    } else if (match[5]) {

      let degrees = Number(match[6]);
      let minutes = Number(match[7]);
      result = result + (degrees + minutes / 60) / 60;
    }
  }
  return result * sign;
}
let TimeRE = new RegExp("^([0-9][0-9]?)(?:\:([0-5][0-9]))?(?:\:([0-5][0-9]))?$");

export class Time {
  private _seconds: number;

  constructor(time:string | number) {
  
    if (typeof time === "string") {
      let match = time.match(TimeRE);

      if (!match) {
        this._seconds = 0;
        return;
      }

      if (match[3]) {
        let hours = Number(match[1]);
        let minutes = Number(match[2]);
        let seconds = Number(match[3]);

        this._seconds = (hours * 60 + minutes) * 60 + seconds;
      } else if (match[2]) {
        let minutes = Number(match[1]);
        let seconds = Number(match[2]);

        this._seconds = minutes * 60 + seconds;
      } else if (match[1]) {
        this._seconds = Number(match[1]);
      }else {
        this._seconds = 0
      }
      return;
    }

    if (typeof time === "number") {
      this._seconds = Math.round(time);
      return;
    }

    this._seconds = 0;
  }

  add(otherTime: Time): Time {
    return new Time(this._seconds + otherTime._seconds);
  }



  static differenceBetween(time2: Time | number, time1: Time | number): Time {
    let seconds1: number;
    let seconds2: number;
    if (time1 instanceof Time) {
      seconds1 = time1._seconds;
    } else {
      seconds1 = Math.round(time1.valueOf() / 1000);
    }

    if (time2 instanceof Time) {
      seconds2 = time2._seconds;
    } else {
      seconds2 = Math.round(time2.valueOf() / 1000);
    }

    return new Time(seconds2 - seconds1);
  }

  seconds(): number {
    return this._seconds;
  }

  minutes(): number {
    return this._seconds / 60;
  }

  hours(): number {
    return this._seconds / 3600;
  }

  toString(): string {
    let result = "";
    let seconds = this._seconds % 60;
    if (seconds < 0) {
      result = "-";
      seconds = -seconds;
    }
    let minutes = this._seconds / 60 | 0;
    let hours = minutes / 60 | 0;
    minutes = minutes % 60;

    if (hours) {
      result = result + hours + ":";
    }
    if (minutes < 10 && hours) {
      result = result + "0";
    }
    result = result + minutes + ":";
    if (seconds < 10) {
      result = result + "0";
    }
    result = result + seconds;

    return result;
  }
}
class GeoLocation {
  latitude:number;
  longitude:number;

  constructor(latitude: number, longitude: number) {
    this.latitude = latitude;
    this.longitude = longitude;
  }

  latitudeString(): string {
    let latitude = this.latitude;
    let latitudeDegrees = Math.floor(latitude);
    let latitudeMinutes = Number(((latitude - latitudeDegrees) * 60).toFixed(3));
    let latitudeMinutesFiller = latitudeMinutes < 10 ? " " : "";
    let latitudePrefix = "N";
    if (latitude < 0) {
      latitude = -latitude;
      latitudePrefix = "S";
    }
    return latitudePrefix + latitudeDegrees + degreeCharacter + latitudeMinutesFiller + latitudeMinutes + "'";
  }

  longitudeString(): string {
    let longitude = this.longitude;
    let longitudePrefix = "E";
    let longitudeDegrees = Math.floor(longitude);
    let longitudeMinutes = Number(((longitude - longitudeDegrees) * 60).toFixed(3));
    let longitudeMinutesFiller = longitudeMinutes < 10 ? " " : "";
    if (longitude < 0) {
      longitude = -longitude;
      longitudePrefix = "W";
    }
    return longitudePrefix + longitudeDegrees + degreeCharacter + longitudeMinutesFiller + longitudeMinutes + "'";
  }

  distanceTo(otherLocation: GeoLocation): number {
    let dLat = NumberUtils.toRadians((otherLocation.latitude - this.latitude));
    let dLon = NumberUtils.toRadians((otherLocation.longitude - this.longitude));
    let a = Math.sin(dLat / 2) * Math.sin(dLat / 2) +
      Math.cos(NumberUtils.toRadians(this.latitude)) * Math.cos(NumberUtils.toRadians(otherLocation.latitude)) *
      Math.sin(dLon / 2) * Math.sin(dLon / 2);
    let c = 2 * Math.atan2(Math.sqrt(a), Math.sqrt(1 - a));
    return earthRadius * c;
  }

  bearingFrom(otherLocation: GeoLocation, magneticVariation?: number): number {
    if (magneticVariation === undefined)
      magneticVariation = 0;

    let dLon = NumberUtils.toRadians((this.longitude - otherLocation.longitude));
    let thisLatitudeRadians = NumberUtils.toRadians(this.latitude);
    let otherLatitudeRadians = NumberUtils.toRadians(otherLocation.latitude);
    let y = Math.sin(dLon) * Math.cos(NumberUtils.toRadians(this.latitude));
    let x = Math.cos(otherLatitudeRadians) * Math.sin(thisLatitudeRadians) -
      Math.sin(otherLatitudeRadians) * Math.cos(thisLatitudeRadians) * Math.cos(dLon);
    return (NumberUtils.toDegrees(Math.atan2(y, x)) + 720 + magneticVariation) % 360;
  }

  bearingTo(otherLocation: GeoLocation, magneticVariation?: number): number {
    if (magneticVariation === undefined)
      magneticVariation = 0;

    let dLon = NumberUtils.toRadians((otherLocation.longitude - this.longitude));
    let thisLatitudeRadians = NumberUtils.toRadians(this.latitude);
    let otherLatitudeRadians = NumberUtils.toRadians(otherLocation.latitude);
    let y = Math.sin(dLon) * Math.cos(NumberUtils.toRadians(otherLocation.latitude));
    let x = Math.cos(thisLatitudeRadians) * Math.sin(otherLatitudeRadians) -
      Math.sin(thisLatitudeRadians) * Math.cos(otherLatitudeRadians) * Math.cos(dLon);
    return (NumberUtils.toDegrees(Math.atan2(y, x)) + 720 + magneticVariation) % 360;
  }

  locationFrom(bearing: number, distance: number, magneticVariation?: number): GeoLocation {
    if (magneticVariation === undefined)
      magneticVariation = 0;

    let bearingRadians = NumberUtils.toDegrees((bearing - magneticVariation));
    let thisLatitudeRadians = NumberUtils.toRadians(this.latitude);
    let angularDistance = distance / earthRadius;
    let latitudeRadians = Math.asin(Math.sin(thisLatitudeRadians) * Math.cos(angularDistance) +
      Math.cos(thisLatitudeRadians) * Math.sin(angularDistance) * Math.cos(bearingRadians));
    let longitudeRadians = NumberUtils.toRadians(this.longitude) +
    Math.atan2(Math.sin(bearingRadians) * Math.sin(angularDistance) * Math.cos(thisLatitudeRadians),
      Math.cos(angularDistance) - Math.sin(thisLatitudeRadians) * Math.sin(latitudeRadians));

    return new GeoLocation(NumberUtils.toDegrees(latitudeRadians), NumberUtils.toDegrees(longitudeRadians));
  }

  toString(): string {
    return "(" + this.latitudeString() + ", " + this.longitudeString() + ")";
  }
}
class FaaWaypoints {
  private static instance: FaaWaypoints | null = null;
  waypoints: Map<string,Map<string,string|number>> = new Map();

  constructor() {
    if (!FaaWaypoints.instance) {
      FaaWaypoints.instance = this;
    }
  }

  find(waypoint: string): Map<string,string|number>|undefined  {
    return this.waypoints.get(waypoint);
  }
}


let faaWaypoints = new FaaWaypoints();
class FaaAirways {
  private static instance: FaaAirways;
  private airways:Map<string,Map<string,string|string[]>> = new Map();

  constructor() {
    if (!FaaAirways.instance) {
      FaaAirways.instance = this;
      this.airways = _faaAirways as Map<string,Map<string,string|string[]>>;
    }

    return FaaAirways.instance;
  }

  isAirway(identifier: string): boolean {
    let rs = !!(this.airways.get(identifier));
    return rs
  }

  resolveAirway(airwayID: string, entryPoint: string, exitPoint: string): string[] {
    let airway = this.airways.get(airwayID);
    if (!airway) {
      return [];
    }
    let fixes =  airway.get("fixes")?airway.get("fixes")! as string[]:[]
    let entryIndex = fixes.indexOf(entryPoint) as number;
    let exitIndex = fixes.indexOf(exitPoint) as number;



    if (entryIndex === -1 || exitIndex === -1) {
      return [];
    }

    let strid = (entryIndex <= exitIndex) ? 1 : -1;
    let route: string[] = [];

    for (let idx = entryIndex; idx !== exitIndex; idx = idx + strid) {
      route.push(fixes[idx]);
    }

    route.push(fixes[exitIndex]);

    return route;
  }
}

let faaAirways = new FaaAirways();
class UserWaypoints {
  static instance: UserWaypoints | null = null;
  waypoints: Map<string,Map<string,string|number>> = new Map();

  constructor() {
    if (!UserWaypoints.instance) {
      UserWaypoints.instance = this;
      this.waypoints = new Map();
    }
    return UserWaypoints.instance;
  }

  clear(): void {
    this.waypoints = new Map();
  }

  find(waypoint: string): Map<string,string|number>|undefined {
    return this.waypoints.get(waypoint);
  }

  update(name: string, description: string, latitude: string | number, longitude: string | number): void {
    let decimalLatitude = typeof latitude === "string" ? decimalLatitudeFromString(latitude) : latitude;
    let decimalLongitude = typeof longitude === "string" ? decimalLongitudeFromString(longitude) : longitude;
    this.waypoints.set(name.toUpperCase(),new Map<string,string|number>([
      ["name",name],
      ["description",description],
      ["latitude",decimalLatitude],
      ["longitude",decimalLongitude]
    ]))

  }
}
let userWaypoints: UserWaypoints = new UserWaypoints();


class EngineConfig {
  type: string;
  _fuelFlow: number;
  _trueAirspeed: number;
  static allConfigs:EngineConfig[] = [];
  static allConfigsByType:E<string,EngineConfig> = {};
  static Taxi:number = 0;
  static Runup:number = 1;
  static Takeoff:number = 2;
  static Climb:number = 3;
  static Cruise:number = 4;
  static Pattern:number = 5;

  constructor(type: string, fuelFlow: number, trueAirspeed: number) {
    this.type = type;
    this._fuelFlow = fuelFlow;
    this._trueAirspeed = trueAirspeed;
  }

  get trueAirspeed(): number {
    return this._trueAirspeed;
  }

  get fuelFlow(): number {
    return this._fuelFlow;
  }

  static appendConfig(type: string, fuelFlow: number, trueAirspeed: number): void {
    if (EngineConfig.allConfigsByType[type]) {
      error("Duplicate Engine configuration: " + type);
      return;
    }

    const newConfig = new EngineConfig(type, fuelFlow, trueAirspeed);
    EngineConfig.allConfigs.push(newConfig);
    EngineConfig.allConfigsByType[type] = newConfig;
  }

  static getConfig(n: number): EngineConfig | undefined {
    if (n >= EngineConfig.allConfigs.length)
      return undefined;

    return EngineConfig.allConfigs[n];
  }
}
class Waypoint {
  name: string;
  type: string;
  description: string;
  latitude: number;
  longitude: number;

  constructor(name: string, type: string, description: string, latitude: number, longitude: number) {
    this.name = name;
    this.type = type;
    this.description = description;
    this.latitude = latitude;
    this.longitude = longitude;
  }
}
class Leg {
  previous: Leg | undefined;
  next: Leg | undefined;
  fix: string;
  location: GeoLocation ;
  originalLocation: GeoLocation | undefined;
  course: number;
  distance: number;
  trueAirspeed: number;
  windDirection: number;
  windSpeed: number;
  heading: number;
  estGS: number;
  startFlightTiming: boolean;
  stopFlightTiming: boolean;
  engineConfig: number;
  fuelFlow: number;
  distanceRemaining: number;
  estimatedTimeEnroute: Time;
  estTimeRemaining: Time;
  estFuel: number;
  type: string;
  extraTurns: number;
  climbTime:Time;
  index:number;

  constructor(fix: string, location: GeoLocation | undefined) {
    this.previous = undefined;
    this.next = undefined;
    this.fix = fix;
    this.location = location ? location : new GeoLocation(0,0);
    this.course = 0;
    this.distance = 0;
    this.trueAirspeed = 0;
    this.windDirection = 0;
    this.windSpeed = 0;
    this.heading = 0;
    this.estGS = 0;
    this.startFlightTiming = false;
    this.stopFlightTiming = false;
    this.engineConfig = EngineConfig.Cruise;
    this.fuelFlow = 0;
    this.distanceRemaining = 0;
    this.estimatedTimeEnroute = new Time(0);
    this.estTimeRemaining = new Time(0);
    this.estFuel = 0;
    this.originalLocation = undefined;
    this.type = "";
    this.extraTurns=0;
    this.climbTime=new Time(0);
    this.index=0;
  }
  fixName(): string {
    return this.fix;
  }

  toString(): string {
    return this.fix;
  }

  setPrevious(leg: Leg | undefined): void {
    this.previous = leg;
  }

  previousLeg(): Leg | undefined {
    return this.previous;
  }

  setNext(leg: Leg | undefined): void {
    this.next = leg;
  }

  nextLeg(): Leg | undefined {
    return this.next;
  }

  setWind(windDirection: number, windSpeed: number): void {
    this.windDirection = windDirection;
    this.windSpeed = windSpeed;
  }

  isSameWind(windDirection: number, windSpeed: number): boolean {
    return this.windDirection === windDirection && this.windSpeed === windSpeed;
  }

  windToString(): string {
    if (!this.windSpeed) {
      return "";
    }

    return (this.windDirection ? this.windDirection : "360") + "@" + this.windSpeed;
  }

  setTrueAirspeed(trueAirspeed: number): void {
    this.trueAirspeed = trueAirspeed;
  }

  isStandardTrueAirspeed(): boolean {
    let engineConfig = EngineConfig.getConfig(this.engineConfig);
    if (engineConfig instanceof EngineConfig) {
      return this.trueAirspeed === engineConfig.trueAirspeed;
    }else{
      return false;
    }
  }

  trueAirspeedToString(): string {
    return this.trueAirspeed + "kts";
  }

  updateDistanceAndBearing(other: GeoLocation): void {
    this.distance = this.location.distanceTo(other);
    this.course = Math.round(this.location.bearingFrom(other));
    if (this.estGS !== 0) {
      let estimatedTimeEnrouteInSeconds = Math.round(this.distance * 3600 / this.estGS);
      this.estimatedTimeEnroute = new Time(estimatedTimeEnrouteInSeconds);
    }

    if (this.estimatedTimeEnroute.seconds())
      this.estFuel = this.fuelFlow * this.estimatedTimeEnroute.hours();
  }

  propagateWind(): void {
    let windDirection = this.windDirection;
    let windSpeed = this.windSpeed;

    windDirection = (windDirection + 360) % 360;
    if (!windDirection)
      windDirection = 360;

    for (let currLeg:Leg|undefined = this; currLeg != undefined; currLeg = currLeg.nextLeg()) {
      currLeg.windDirection = windDirection;
      currLeg.windSpeed = windSpeed;
      if (currLeg.stopFlightTiming)
        break;
    }
  }

  updateForWind(): void {
    if (!this.windSpeed || !this.trueAirspeed) {
      this.heading = this.course;
      this.estGS = this.trueAirspeed;
      return;
    }

    let windDirectionRadians = NumberUtils.toRadians(this.windDirection);
    let courseRadians = NumberUtils.toRadians(this.course);
    let swc = (this.windSpeed / this.trueAirspeed) * Math.sin(windDirectionRadians - courseRadians);
    if (Math.abs(swc) > 1) {
      status("Wind to strong to fly!");
      return;
    }

    let headingRadians = courseRadians + Math.asin(swc);
    if (headingRadians < 0)
      headingRadians += TwoPI;
    if (headingRadians > TwoPI)
      headingRadians -= TwoPI;
    let groundSpeed = this.trueAirspeed * Math.sqrt(1 - swc * swc) - this.windSpeed * Math.cos(windDirectionRadians - courseRadians);
    if (groundSpeed < 0) {
      status("Wind to strong to fly!");
      return;
    }

    this.estGS = groundSpeed;
    this.heading = Math.round(NumberUtils.toDegrees(headingRadians));
  }

  calculate(): void {
    let engineConfig = EngineConfig.getConfig(this.engineConfig);

    if (!this.trueAirspeed)
      this.trueAirspeed = engineConfig? engineConfig.trueAirspeed:0;
    this.fuelFlow = engineConfig? engineConfig.fuelFlow : 0;

    this.updateForWind();
  }

  updateForward() {
    let _previousLeg:Leg | undefined = this.previousLeg();
    let havePrevious = true;
    if (!_previousLeg) {
      havePrevious = false;
      _previousLeg = this;
    }
    let previousLeg = _previousLeg!
    let thisLegType = this.type;
    if (thisLegType == "Climb" && havePrevious)
      this.location = previousLeg.location;
    else {
      this.updateDistanceAndBearing(previousLeg.location);
      this.updateForWind();
      let nextLeg = this.nextLeg();
      let previousLegType = previousLeg.type;
      if (havePrevious) {
        if (previousLegType == "Climb") {
          let climbDistance = distanceFromSpeedAndTime(previousLeg!.estGS, previousLeg.climbTime);
          if (climbDistance < this.distance) {
            let climbStartLocation = previousLeg.location;
            let climbEndLocation = climbStartLocation.locationFrom(this.course, climbDistance);
            previousLeg.location = climbEndLocation;
            previousLeg.updateDistanceAndBearing(climbStartLocation);
            this.estimatedTimeEnroute = new Time(0);
            this.updateDistanceAndBearing(climbEndLocation);
          } else {
            status("Not enough distance to climb in leg #" + previousLeg.index);
          }
        } else if ((thisLegType == "Left" || thisLegType == "Right") && nextLeg && nextLeg.location) {
          let standardRateCircumference = this.trueAirspeed / 30;
          let standardRateRadius = standardRateCircumference / TwoPI;
          let offsetInboundBearing = 360 + previousLeg.course + (thisLegType == "Left" ? -90 : 90);
          offsetInboundBearing = Math.round((offsetInboundBearing + 360) % 360);
          if (!previousLeg.originalLocation)
            previousLeg.originalLocation = previousLeg.location;
          let previousLocation = previousLeg.originalLocation;
          let inboundLocation = previousLocation.locationFrom(offsetInboundBearing, standardRateRadius);
          let bearingToNext = Math.round(nextLeg.location.bearingFrom(previousLocation));
          let offsetOutboundBearing = bearingToNext + (thisLegType == "Left" ? 90 : -90);
          offsetOutboundBearing = (offsetOutboundBearing + 360) % 360;
          let outboundLocation = previousLocation.locationFrom(offsetOutboundBearing, standardRateRadius);
          let turnAngle = thisLegType == "Left" ? (360 + bearingToNext - previousLeg.course) : (360 + previousLeg.course - bearingToNext);
          turnAngle = (turnAngle + 360) % 360;
          this.estimatedTimeEnroute = new Time(Math.round((turnAngle + 360 * this.extraTurns) / 3));
          this.estFuel = this.fuelFlow * this.estimatedTimeEnroute.hours();
          this.location = outboundLocation;
          this.distance = distanceFromSpeedAndTime(this.trueAirspeed, this.estimatedTimeEnroute);
          previousLeg!.location = inboundLocation;
          let prevPrevLeg = previousLeg.previousLeg();
          if (prevPrevLeg) {
            previousLeg!.estimatedTimeEnroute = new Time(0);
            previousLeg!.updateDistanceAndBearing(prevPrevLeg.location);
          }
        }
      }
    }
  }

  updateBackward() {
    let nextLeg = this.nextLeg();
    let distanceRemaining: number;
    let timeRemaining:Time;

    if (nextLeg) {
      distanceRemaining = nextLeg.distanceRemaining;
      timeRemaining = nextLeg.estTimeRemaining as Time;
    } else {
      distanceRemaining = 0;
      timeRemaining = new Time(0);
    }

    if (this.stopFlightTiming || timeRemaining.seconds()) {
      this.distanceRemaining = distanceRemaining + this.distance;;
      this.estTimeRemaining = timeRemaining.add(this.estimatedTimeEnroute);
    } else {
      this.estTimeRemaining = new Time(0);
    }
  }
}
let RallyLegWithFixRE = new RegExp("^([0-9a-zA-Z\.]{3,16})\\|(" + keywords("START") + "|" + keywords("TIMING") + ")", "i" + regExpOptionalUnicodeFlag);

class RallyLeg extends Leg {
  static startLocation: GeoLocation | undefined;
  static startFix:string = "";
  static totalTaxiTime:Time | undefined;
  static taxiSegments:[];

  constructor(type: string, fix: string, location: GeoLocation | undefined, engineConfig: number) {
    super(fix, location);
    this.type = type;
    this.engineConfig = engineConfig;
  }

  fixName(): string {
    return this.type;
  }

  toString(): string {
    return this.fixName();
  }

  static reset() {
    RallyLeg.startLocation = undefined;
    RallyLeg.startFix = "";
    RallyLeg.totalTaxiTime = new Time(0);
    RallyLeg.taxiSegments = [];
  }

  static fixNeeded(fix: string): string {
    let match = fix.match(RallyLegWithFixRE);

    if (!match)
      return "";

    return match![1].toString();
  }

  static getLegWithFix(waypointText: string, fix: string, location: GeoLocation): Leg | undefined{
    let match = waypointText.match(RallyLegWithFixRE);

    if (!match)
      return undefined;

    let legType = match[2].toString().toUpperCase();
    if (legType == keywords("START")) {
      if (RallyLeg.startLocation) {
        status("Trying to create second start leg");
        return undefined;
      }

      RallyLeg.startLocation = location;
      RallyLeg.startFix = fix;
      RallyLeg.totalTaxiTime = new Time(0);
      RallyLeg.taxiSegments = [];

      return new StartLeg(waypointText, fix, location);
    }

    if (legType == keywords("TIMING"))
      return new TimingLeg(waypointText, fix, location);

    error("Unhandled Rally Leg type " + legType);
    return undefined;
  }
}

class StartLeg extends RallyLeg {
  constructor(fixText: string, fix: string, location: GeoLocation) {
    super("Start", fix, location, EngineConfig.Taxi);
  }

  fixName(): string {
    return this.fix + "|Start";
  }
}

class TimingLeg extends RallyLeg {
  constructor(fixText: string, fix: string, location: GeoLocation) {
    super("Timing", fix, location, EngineConfig.Cruise);
    this.stopFlightTiming = true;
  }

  fixName(): string {
    return this.fix + "|Timing";
  }
}

let RallyLegNoFixRE = new RegExp(keywords("TAXI") + "|" + keywords("RUNUP") + "|" + keywords("TAKEOFF") + "|" + keywords("CLIMB") + "|" + keywords("PATTERN") + "|" + keywords("LEFT") + "|" + keywords("RIGHT"), "i" + regExpOptionalUnicodeFlag);

class RallyLegWithoutFix extends RallyLeg {
  constructor(type: string, CommentsAsFix: string, location: GeoLocation | undefined, engineConfig: number) {
    super(type, CommentsAsFix, location, engineConfig);
  }

  setPrevious(previous: Leg): void {
    if (this.setLocationFromPrevious() && previous)
      this.location = previous.location;

    super.setPrevious(previous);
  }

  setLocationFromPrevious(): boolean {
    return false;
  }

  static isRallyLegWithoutFix(fix: string): boolean {
    let barPosition = fix.indexOf("|");
    let firstPart = barPosition < 0 ? fix : fix.substring(0, barPosition);
firstPart.includes("2")

    return firstPart.search(RallyLegNoFixRE) > -1 ? true : false;
  }

  static getLegNoFix(waypointText: string): Leg | undefined {
    let barPosition = waypointText.indexOf("|");
    let firstPart = barPosition < 0 ? waypointText : waypointText.substring(0, barPosition);
    firstPart = firstPart.toUpperCase();
    let match = firstPart.match(RallyLegNoFixRE);

    if (!match)
      return undefined;

    let legType = match[0].toString();

    if (legType === keywords("TAXI"))
      return new TaxiLeg(waypointText);

    if (legType === keywords("RUNUP"))
      return new RunupLeg(waypointText);

    if (legType === keywords("TAKEOFF")) {
      if (!RallyLegWithoutFix.startLocation) {
        status("Trying to create a Takeoff leg without start leg");
        return undefined;
      }

      return new TakeoffLeg(waypointText);
    }

    if (legType === keywords("CLIMB"))
      return new ClimbLeg(waypointText);

    if (legType === keywords("PATTERN"))
      return new PatternLeg(waypointText);

    if (legType === keywords("LEFT") || legType === keywords("RIGHT"))
      return new TurnLeg(waypointText, legType === keywords("RIGHT"));

    error("Unhandled Rally Leg type " + legType);
    return undefined;
  }
}

let TaxiLegRE = new RegExp("^" + keywords("TAXI") + "(?:\\|([0-9][0-9]?(?:\:[0-5][0-9])?))?$", "i" + regExpOptionalUnicodeFlag);

class TaxiLeg extends RallyLegWithoutFix {
  constructor(fixText: string) {
    let match = fixText.match(TaxiLegRE);

    super("Taxi", "", new GeoLocation(-1, -1), EngineConfig.Taxi);

    let taxiTimeString = "5:00";
    if (match && match[1])
      taxiTimeString = match![1].toString();

    this.estimatedTimeEnroute = new Time(taxiTimeString);
  }

  setLocationFromPrevious(): boolean {
    return true;
  }

  fixName(): string {
    return "Taxi|" + this.estimatedTimeEnroute.toString();
  }
}

let RunupLegRE = new RegExp("^" + keywords("RUNUP") + "(?:\\|([0-9][0-9]?(?:\:[0-5][0-9])?))?$", "i" + regExpOptionalUnicodeFlag);

class RunupLeg extends RallyLegWithoutFix {
  constructor(fixText: string) {
    let match = fixText.match(RunupLegRE);

    super("Runup", "", new GeoLocation(-1, -1), EngineConfig.Runup);

    let runupTimeString = "30";
    if (match && match[1])
      runupTimeString = match![1].toString();

    this.estimatedTimeEnroute = new Time(runupTimeString);
  }

  setLocationFromPrevious(): boolean {
    return true;
  }

  fixName(): string {
    return "Runup|" + this.estimatedTimeEnroute.toString();
  }
}

let TakeoffLegRE = new RegExp("^" + keywords("TAKEOFF") + "(?:\\|([0-9][0-9]?(?:\:[0-5][0-9])?))?(?:\\|([0-9]{1,2}|[0-2][0-9][0-9]|3[0-5][0-9]|360)(?:@)(\\d{1,2}(?:\\.\\d{1,4})?))?$", "i" + regExpOptionalUnicodeFlag);

class TakeoffLeg extends RallyLegWithoutFix {
  bearingFromStart:number;
  distanceFromStart:number;

  constructor(fixText: string) {
    let match = fixText.match(TakeoffLegRE);

    let bearingFromStart = 0;
    let distanceFromStart = 0;
    let takeoffEndLocation = RallyLeg.startLocation;
    if (match && match[2] && match[3]) {
      bearingFromStart = Number(match[2]) % 360;
      distanceFromStart = Number(match[3]);
      takeoffEndLocation = RallyLeg.startLocation?.locationFrom(bearingFromStart, distanceFromStart);
    }

    super("Takeoff", "", takeoffEndLocation, EngineConfig.Takeoff);

    this.bearingFromStart = bearingFromStart;
    this.distanceFromStart = distanceFromStart;
    let takeoffTimeString = "2:00";
    if (match && match[1])
      takeoffTimeString = match![1].toString();

    this.estimatedTimeEnroute = new Time(takeoffTimeString);
    this.startFlightTiming = true;
  }

  fixName(): string {
    let result = "Takeoff";

    if (this.estimatedTimeEnroute.seconds() != 120)
      result += "|" + this.estimatedTimeEnroute.toString();
    if (this.distanceFromStart)
      result += "|" + this.bearingFromStart + "@" + this.distanceFromStart;

    return result;
  }
}

let ClimbLegRE = new RegExp("^" + keywords("CLIMB") + "(?:\\|)(\\d{3,5})(?:\\|([0-9][0-9]?(?:\:[0-5][0-9])?))$", "i" + regExpOptionalUnicodeFlag);

class ClimbLeg extends RallyLegWithoutFix {
  altitude:number;
  constructor(fixText:string) {
    let match = fixText.match(ClimbLegRE);
    let altitude = 5500;
    if (match && match[1])
      altitude = Number(match[1]);

    super("Climb", altitude + "\"", undefined, EngineConfig.Climb);

    let timeToClimb = "8:00";
    if (match && match[2])
      timeToClimb = match[2];

    this.altitude = altitude;
    this.estimatedTimeEnroute = new Time(timeToClimb);
    this.climbTime = this.estimatedTimeEnroute;
  }

  setLocationFromPrevious() {
    return true;
  }

  fixName():string {
    return "Climb|" + this.altitude + "|" + this.estimatedTimeEnroute.toString();
  }
}

let PatternLegRE = new RegExp("^" + keywords("PATTERN") + "(?:\\|([0-9][0-9]?(?:\:[0-5][0-9])?))$", "i" + regExpOptionalUnicodeFlag);

class PatternLeg extends RallyLegWithoutFix {
  constructor(fixText:string) {
    super("Pattern", "", undefined, EngineConfig.Pattern);

    let match = fixText.match(PatternLegRE);
    let patternTimeString = match && match[1]?match[1]:"";
    this.estimatedTimeEnroute = new Time(patternTimeString);
  }

  setLocationFromPrevious() {
    return true;
  }

  fixName():string {
    return "Pattern|" + this.estimatedTimeEnroute.toString();
  }
}


let TurnLegRE = new RegExp("^(" + keywords("LEFT") + "|" + keywords("RIGHT") + ")(?:\\|\\+(\\d))?$", "i");

class TurnLeg extends RallyLegWithoutFix {
  constructor(fixText:string, isRightTurn:boolean) {
    let match = fixText.match(TurnLegRE);

    let direction = "Left";
    if (match && match[1])
      direction = match[1].toString().toUpperCase() == keywords("LEFT") ? "Left" : "Right";

    let engineConfig = EngineConfig.Cruise;

    super(direction, "", new GeoLocation(-1, -1), engineConfig);

    this.extraTurns = (match && match[2]) ? Number(match[2]) : 0;
  }

  fixName():string {
    let result = this.type;
    if (this.extraTurns)
      result = result + ("|+" + this.extraTurns);

    return result;
  }
}
let LegModifier = new RegExp("(360|3[0-5][0-9]|[0-2][0-9]{2}|[0-9]{1,2})@([0-9]{1,3})|([1-9][0-9]{1,2}|0)kts", "i");

class FlightPlan {
  _name:string;
  _route:string;
  _firstLeg:Leg | undefined;
  _lastLeg:Leg | undefined;
  _legCount:number;
  _defaultWindDirection:number;
  _defaultWindSpeed:number;
  _trueAirspeedOverride:number;
  _timeToGate:Time|undefined;
  _totalFuel:number;
  _totalTime: Time;
  _gateTime: Time;

  constructor(name: string, route: string) {
    this._name = name;
    this._route = route;
    this._firstLeg = undefined;
    this._lastLeg = undefined;
    this._legCount = 0;
    this._defaultWindDirection = 0;
    this._defaultWindSpeed = 0;
    this._trueAirspeedOverride = 0;
    this._timeToGate = undefined;
    this._totalFuel = 0;
    this._totalTime = new Time(0);
    this._gateTime = new Time(0);

    RallyLeg.reset(); //  Refactor to make this more OO
  }

  clear() {

  }

  appendLeg(leg: Leg | undefined) {
    if (!this._firstLeg)
      this._firstLeg = leg;
    if (this._lastLeg)
      this._lastLeg.setNext(leg);
    leg?.setPrevious(this._lastLeg);
    leg?.setNext(undefined);

    if (this._trueAirspeedOverride) {
      leg?.setTrueAirspeed(this._trueAirspeedOverride);
      this.clearTrueAirspeedOverride();
    }

    if (this._defaultWindSpeed)
      leg?.setWind(this._defaultWindDirection, this._defaultWindSpeed);

    this._lastLeg = leg;
    this._legCount++;
  }

  setDefaultWind(windDirection: number, windSpeed: number) {
    this._defaultWindDirection = windDirection;
    this._defaultWindSpeed = windSpeed;
  }

  clearTrueAirspeedOverride() {
    this._trueAirspeedOverride = 0;
  }

  setTrueAirspeedOverride(trueAirspeed: number) {
    this._trueAirspeedOverride = trueAirspeed;
  }

  isLegModifier(fix: string): boolean {
    return fix.search(LegModifier) > -1 ? true : false;
  }

  processLegModifier(fix: string): void {
    let match = fix.match(LegModifier);

    if (match) {
      if (match[1] && match[2]) {
        let windDirection = Number(match[1]) % 360;
        let windSpeed = Number(match[2]);

        this.setDefaultWind(windDirection, windSpeed);
      } else if (match[3]) {
        let trueAirspeed = Number(match[3]);
        this.setTrueAirspeedOverride(trueAirspeed);
      }
    }
  }

  resolveWaypoint(waypointText: string): void {
    if (this.isLegModifier(waypointText))
      this.processLegModifier(waypointText);
    else if (RallyLegWithoutFix.isRallyLegWithoutFix(waypointText)) {
      let rallyLeg = RallyLegWithoutFix.getLegNoFix(waypointText);
      if (rallyLeg)
        this.appendLeg(rallyLeg);
    } else {
      let fixName = RallyLeg.fixNeeded(waypointText);
      let isRallyWaypoint = false;

      if (fixName)
        isRallyWaypoint = true;
      else
        fixName = waypointText;

      let waypoint = userWaypoints.find(fixName);
      if (!waypoint)
        waypoint = faaWaypoints.find(fixName);
      if (!waypoint) {
        error("Couldn't find waypoint \"" + waypointText + "\"");
        return;
      }

      let location = new GeoLocation(waypoint.get("latitude") as number , waypoint.get("longitude") as number);

      if (isRallyWaypoint) {
        let rallyLeg = RallyLeg.getLegWithFix(waypointText, fixName, location);
        this.appendLeg(rallyLeg);
      } else
        this.appendLeg(new Leg(waypoint.get("name") as string, location));
    }
  }

  parseRoute(): void {
    let waypointsToLookup = this._route.split(" ");
    let priorWaypoint = "";

    for (let waypointIndex = 0; waypointIndex < waypointsToLookup.length; waypointIndex++) {
      let currentWaypoint = waypointsToLookup[waypointIndex].toUpperCase();
      if (faaAirways.isAirway(currentWaypoint) && (waypointIndex + 1) < waypointsToLookup.length) {
        let exitWaypointFix = waypointsToLookup[waypointIndex + 1];
        let airwayFixes = faaAirways.resolveAirway(currentWaypoint, priorWaypoint, exitWaypointFix);

        for (let airwayFixIndex = 1; airwayFixIndex < airwayFixes.length - 1; airwayFixIndex++)
          this.resolveWaypoint(airwayFixes[airwayFixIndex]);
      } else
        this.resolveWaypoint(currentWaypoint);

      priorWaypoint = currentWaypoint;
    }
  }
  calculate() {
    if (!this._firstLeg)
      return;

    let haveStartTiming = false;
    let haveStopTiming = false;
    for (let thisLeg:Leg | undefined = this._firstLeg; thisLeg; thisLeg = thisLeg.nextLeg()) {
      thisLeg.calculate();
      if (thisLeg.startFlightTiming) {
        if (haveStartTiming)
          status("Have duplicate Start timing leg in row " + thisLeg.toString());
        haveStartTiming = true;
      }
      if (thisLeg.stopFlightTiming) {
        if (haveStopTiming)
          status("Have duplicate Timing leg in row " + thisLeg.toString());
        haveStopTiming = true;
      }
    }

    if (!haveStartTiming && this._firstLeg)
      this._firstLeg.startFlightTiming = true;
    if (!haveStopTiming && this._lastLeg)
      this._lastLeg.stopFlightTiming = true;

    for (let thisLeg:Leg | undefined = this._firstLeg; thisLeg; thisLeg = thisLeg.nextLeg())
      thisLeg.updateForward();

    for (let thisLeg:Leg | undefined = this._lastLeg; thisLeg; thisLeg = thisLeg.previousLeg())
      thisLeg.updateBackward();

    for (let thisLeg:Leg | undefined = this._firstLeg; thisLeg; thisLeg = thisLeg.nextLeg()) {
      if (thisLeg.startFlightTiming)
        this._gateTime = thisLeg.estTimeRemaining;
    }

    this._totalTime = this._firstLeg.estTimeRemaining;
  }

  resolvedRoute():string {
    let result = "";
    let lastWindDirection = 0;
    let lastWindSpeed = 0;
    let legIndex = 0;
    let currentLeg = this._firstLeg;

    for (; currentLeg; currentLeg = currentLeg.nextLeg(), legIndex++) {

      if (legIndex)
        result = result + " ";

      if (!currentLeg.isSameWind(lastWindDirection, lastWindSpeed)) {
        result = result + currentLeg.windToString() + " ";
        lastWindDirection = currentLeg.windDirection;
        lastWindSpeed = currentLeg.windSpeed;
      }

      if (!currentLeg.isStandardTrueAirspeed())
        result = result + currentLeg.trueAirspeedToString() + " ";

      result = result + currentLeg.toString();
    }

    return result;
  }
  name(): string {
    return this._name;
  }

  totalTime(): Time {
    return this._totalTime;
  }

  gateTime(): Time {
    return this._gateTime;
  }

  toString(): string {
    let result = "";
    let lastWindDirection = 0;
    let lastWindSpeed = 0;
    let legIndex = 0;
    let currentLeg = this._firstLeg;

    for (; currentLeg; currentLeg = currentLeg.nextLeg(), legIndex++) {

      if (legIndex)
        result = result + " ";

      if (!currentLeg.isSameWind(lastWindDirection, lastWindSpeed)) {
        result = result + currentLeg.windToString() + " ";
        lastWindDirection = currentLeg.windDirection;
        lastWindSpeed = currentLeg.windSpeed;
      }

      if (!currentLeg.isStandardTrueAirspeed())
        result = result + currentLeg.trueAirspeedToString() + " ";

      result = result + currentLeg.toString();
      result = result + " " + currentLeg.location + " " + currentLeg.distance.toFixed(2) + "nm " + currentLeg.estGS.toFixed(2) + "kts " + currentLeg.estimatedTimeEnroute + " ";
    }

    result = result + " gate time " + this._gateTime.seconds();
    result = result + " total time " + (this._firstLeg?this._firstLeg.estTimeRemaining.seconds():"");
    return result;
  }
}
function EngineConfigAppendConfig() {
  EngineConfig.appendConfig("Taxi", 2, 0);
  EngineConfig.appendConfig("Runup", 8, 0);
  EngineConfig.appendConfig("Takeoff", 27, 105);
  EngineConfig.appendConfig("Climb", 22, 125);
  EngineConfig.appendConfig("Cruise", 15, 142);
  EngineConfig.appendConfig("Pattern", 11, 95);
}
export class ExpectedFlightPlan {
  _name: string;
  _route: string;
  _expectedRoute: string;
  _expectedTotalTime: Time | undefined;
  _expectedGateTime: Time | undefined;
  _flightPlan: FlightPlan;

  constructor(name: string, route: string, expectedRoute: string, expectedTotalTime: Time, expectedGateTime: Time | undefined) {
    this._name = name;
    this._route = route;
    this._expectedRoute = expectedRoute;
    this._expectedTotalTime = expectedTotalTime;
    this._expectedGateTime = expectedGateTime;
    this._flightPlan = new FlightPlan(this._name, this._route);
  }

  reset(): void {
    this._flightPlan = new FlightPlan(this._name, this._route);
  }

  resolveRoute(): void {
    this._flightPlan.parseRoute();
  }

  calculate(): void {
    this._flightPlan.calculate();
  }

  checkExpectations(): void {
    if (this._expectedRoute) {
      let computedRoute = this._flightPlan.resolvedRoute();
      if (this._expectedRoute != computedRoute)
        error("Flight plan " + this._flightPlan.name() + " route different than expected (\"" + this._expectedRoute + "\"), got (\"" + computedRoute + "\")");
    }

    if (this._expectedTotalTime) {
      let computedTotalTime = this._flightPlan.totalTime();
      let deltaTime = Math.abs(Time.differenceBetween(this._expectedTotalTime, computedTotalTime).seconds());
      if (deltaTime > 5)
        error("Flight plan " + this._flightPlan.name() + " total time different than expected (" + this._expectedTotalTime + "), got (" + computedTotalTime + ")");
    }

    if (this._expectedGateTime) {
      let computedGateTime = this._flightPlan.gateTime();
      let deltaTime = Math.abs(Time.differenceBetween(this._expectedGateTime, computedGateTime).seconds());
      if (deltaTime > 5)
        error("Flight plan " + this._flightPlan.name() + " gate time different than expected (" + this._expectedGateTime + "), got (" + computedGateTime + ")");
    }
  }
}
function setupUserWaypoints()
{
  EngineConfigAppendConfig()
  userWaypoints.clear();
  userWaypoints.update("Oilcamp", "Oil storage in the middle of no where", "36.68471", "-120.50277");
  userWaypoints.update("I5.Westshields", "I5 & West Shields", "36.77774", "-120.72426");
  userWaypoints.update("I5.165", "Intersection of I5 and CA165", "36.93022", "-120.84068");
  userWaypoints.update("I5.VOLTA", "I5 & Volta Road", "37.01419", "-120.92878");
  userWaypoints.update("PT.ALPHA", "Intersection of I5 and CA152", "37.05665", "-120.96990");
  userWaypoints.update("Jellysferry", "Jelly's Ferry bridge across Sacramento River", "N40 19.037", "W122 11.359");
  userWaypoints.update("Howie", "RDD Timing Point", "N40 21.893", "W121.8876");
  userWaypoints.update("Hale", "2014 Leg 1 Timing", "N39 33.621", "W119 14.438");
  userWaypoints.update("Winnie", "2014 Leg 2 Timing", "N40 50.499", "W114 12.595");
  userWaypoints.update("WindRiver", "2014 Leg 3 Timing", "N42 43.733", "W108 38.800");
  userWaypoints.update("Buff", "2014 Leg 4 Timing", "N43 59.455", "W103 16.171");
  userWaypoints.update("Omega", "2014 Leg 5 Timing", "N44 53.388", "W95 38.935");
  userWaypoints.update("Paul", "2014 Leg 6 Timing", "N43 22.027", "W89 37.111");
  userWaypoints.update("MicrowaveSt", "2014 Microwave Station", "N40 24.89", "W117 12.37");
  userWaypoints.update("RanchTower", "2014 Ranch/Tower", "N41 6.16", "W115 5.43");
  userWaypoints.update("FremontIsland", "2014 Fremont Island", "N41 10.49", "W112 20.64");
  userWaypoints.update("Tremonton", "2014 Tremonton", "N41 42.86", "W112 11.05");
  userWaypoints.update("RandomPoint", "2014 Random Point", "N42", "W111 03");
  userWaypoints.update("Farson", "2014 Farson", "N42 6.40", "W109 26.95");
  userWaypoints.update("Midwest", "2014 Midwest", "N43 24.49", "W109 16.68");
  userWaypoints.update("Bill", "2014 Bill", "N43 13.96", "W105 15.60");
  userWaypoints.update("MMNHS", "2014 MMNHS", "N43 52.67", "W101 57.65");
  userWaypoints.update("Tracks", "2014 Tracks", "N44 21", "W100 22");
  userWaypoints.update("Towers", "2014 Towers", "N43 34.25", "W92 25.64");
  userWaypoints.update("IsletonBridge", "Isleton Bridge", "N38 10.32", "W121 35.62");
  userWaypoints.update("Mystery15", "2015 Mystery", "N38 46.22", "W122 34.25");
  userWaypoints.update("Paskenta", "Paskenta Town", "N39 53.13", "W122 32.36");
  userWaypoints.update("Bonanza", "Bonanza Town", "N42 12.15", "W121 24.53");
  userWaypoints.update("Silverlake", "Silverlake", "N43 07.41", "W121 03.74");
  userWaypoints.update("Millican", "Bend Timing Start", "N43 52.75", "W120 55.13");
  userWaypoints.update("Goering", "Bend Timing", "N44 05.751", "W120 56.834");
  userWaypoints.update("Constantia2", "Our Constantia Wpt", "N39 56.068", "W120 0.831");
  userWaypoints.update("Hallelujah2", "Reno Timing", "N39 46.509", "W120 2.336");
  userWaypoints.update("Redding.Pond", "Pond 6nm North of KRDD", "N40 36", "W122 17");
  userWaypoints.update("Thunderhill", "Thunder Hill Race Track", "N39 32.36", "W122 19.83");
  userWaypoints.update("CascadeHighway", "Cascade Wonderland Highway", "N40 46.63", "W122 19.12");
  userWaypoints.update("Eagleville", "Eagleville closed airport", "N41 18.73", "W120 3.00");
  userWaypoints.update("DuckLakePass", "Saddle near Duck Lake", "N41 3.00", "W120 3.00");
}



export {keywords,setupUserWaypoints,faaWaypoints};