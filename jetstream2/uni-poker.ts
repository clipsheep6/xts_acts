const UNIPOKER_59864 = 59864;
const UNIPOKER_120476 = 120476;
const UNIPOKER_101226 = 101226;
const UNIPOKER_11359 = 11359;
const UNIPOKER_5083 = 5083;
const UNIPOKER_982 = 982;
const UNIPOKER_456 = 456;
const UNIPOKER_370 = 370;
const UNIPOKER_45 = 45;
const UNIPOKER_3 = 3;

const UNIPOKER_60020 = 60020;
const UNIPOKER_120166 = 120166;
const UNIPOKER_101440 = 101440;
const UNIPOKER_11452 = 11452;
const UNIPOKER_5096 = 5096;
const UNIPOKER_942 = 942;
const UNIPOKER_496 = 496;
const UNIPOKER_333 = 333;
const UNIPOKER_67 = 67;
const UNIPOKER_8 = 8;

const UNIPOKER_60065 = 60065;
const UNIPOKER_120262 = 120262;
const UNIPOKER_101345 = 101345;
const UNIPOKER_11473 = 11473;
const UNIPOKER_5093 = 5093;
const UNIPOKER_941 = 941;
const UNIPOKER_472 = 472;
const UNIPOKER_335 = 335;
const UNIPOKER_76 = 76;

const UNIPOKER_60064 = 60064;
const UNIPOKER_120463 = 120463;
const UNIPOKER_101218 = 101218;
const UNIPOKER_11445 = 11445;
const UNIPOKER_5065 = 5065;
const UNIPOKER_938 = 938;
const UNIPOKER_446 = 446;
const UNIPOKER_364 = 364;
const UNIPOKER_58 = 58;

const UNIPOKER_0xf = 0xf;
const UNIPOKER_2000 = 2000;
const UNIPOKER_1000 = 1000;
const UNIPOKER_120 = 120;
const UNIPOKER_20 = 20;
const UNIPOKER_16 = 16;
const UNIPOKER_12 = 12;
const UNIPOKER_10 = 10;
const UNIPOKER_6 = 6;
const UNIPOKER_5 = 5;
const UNIPOKER_4 = 4;
const UNIPOKER_2 = 2;

const UNIPOKER_0x900000 = 0x900000;
const UNIPOKER_0x800000 = 0x800000;
const UNIPOKER_0x700000 = 0x700000;
const UNIPOKER_0x600000 = 0x600000;
const UNIPOKER_0x500000 = 0x500000;
const UNIPOKER_0x400000 = 0x400000;
const UNIPOKER_0x300000 = 0x300000;
const UNIPOKER_0x200000 = 0x200000;
const UNIPOKER_0x100000 = 0x100000;

("use strict");
declare interface ArkTools {
  timeInUs(args: number): number;
}
class Benchmark {
  _players: Player[] = [];
  /*
   * @State
   */
  constructor() {
    this._players.push(new Player("Player 1"));
    this._players.push(new Player("Player 2"));
    this._players.push(new Player("Player 3"));
    this._players.push(new Player("Player 4"));
  }
  /*
   * @Benchmark
   */
  runIteration() {
    playHands(this._players);
  }

  validate() {
    let isInBrowser = true;
    if (this._players.length !== playerExpectations.length) {
      throw new Error(
        "Expect " +
          playerExpectations.length +
          ", but actually have " +
          this._players.length
      );
    }

    if (isInBrowser) {
      for (
        let playerIdx = 0;
        playerIdx < playerExpectations.length;
        playerIdx++
      ) {
        playerExpectations[playerIdx].validate(this._players[playerIdx]);
      }
    }
  }
}

class PlayerExpectation {
  private _wins: number;
  private _handTypeCounts: number[];
  /*
   * @State
   */
  constructor(wins: number, handTypeCounts: number[]) {
    this._wins = wins;
    this._handTypeCounts = handTypeCounts;
  }

  validate(player: Player) {
    if (player.wins !== this._wins) {
      throw new Error(
        "Expected " +
          player.name +
          " to have " +
          this._wins +
          ", but they have " +
          player.wins
      );
    }

    let actualHandTypeCounts = player.handTypeCounts;
    if (player.handTypeCounts.length !== actualHandTypeCounts.length) {
      throw new Error(
        "Expected " +
          player.name +
          " to have " +
          this._handTypeCounts.length +
          " hand types, but they have " +
          actualHandTypeCounts.length
      );
    }

    for (
      let handTypeIdx = 0;
      handTypeIdx < this._handTypeCounts.length;
      handTypeIdx++
    ) {
      if (
        this._handTypeCounts[handTypeIdx] !== actualHandTypeCounts[handTypeIdx]
      ) {
        throw new Error(
          "Expected " +
            player.name +
            " to have " +
            this._handTypeCounts[handTypeIdx] +
            " " +
            PlayerExpectation._handTypes[handTypeIdx] +
            " hands, but they have " +
            actualHandTypeCounts[handTypeIdx]
        );
      }
    }
  }

  private static _handTypes: string[] = [
    "High Cards",
    "Pairs",
    "Two Pairs",
    "Three of a Kinds",
    "Straights",
    "Flushes",
    "Full Houses",
    "Four of a Kinds",
    "Straight Flushes",
    "Royal Flushes",
  ];
}

let playerExpectations: PlayerExpectation[] = [];
playerExpectations.push(
  new PlayerExpectation(UNIPOKER_59864, [
    UNIPOKER_120476,
    UNIPOKER_101226,
    UNIPOKER_11359,
    UNIPOKER_5083,
    UNIPOKER_982,
    UNIPOKER_456,
    UNIPOKER_370,
    UNIPOKER_45,
    UNIPOKER_3,
    0,
  ])
);
playerExpectations.push(
  new PlayerExpectation(UNIPOKER_60020, [
    UNIPOKER_120166,
    UNIPOKER_101440,
    UNIPOKER_11452,
    UNIPOKER_5096,
    UNIPOKER_942,
    UNIPOKER_496,
    UNIPOKER_333,
    UNIPOKER_67,
    UNIPOKER_8,
    0,
  ])
);
playerExpectations.push(
  new PlayerExpectation(UNIPOKER_60065, [
    UNIPOKER_120262,
    UNIPOKER_101345,
    UNIPOKER_11473,
    UNIPOKER_5093,
    UNIPOKER_941,
    UNIPOKER_472,
    UNIPOKER_335,
    UNIPOKER_76,
    UNIPOKER_3,
    0,
  ])
);
playerExpectations.push(
  new PlayerExpectation(UNIPOKER_60064, [
    UNIPOKER_120463,
    UNIPOKER_101218,
    UNIPOKER_11445,
    UNIPOKER_5065,
    UNIPOKER_938,
    UNIPOKER_446,
    UNIPOKER_364,
    UNIPOKER_58,
    UNIPOKER_3,
    0,
  ])
);

class CardDeck {
  private _cards: string[] = [];
  /*
   * @State
   */
  constructor() {
    this.newDeck();
  }

  newDeck() {
    // Make a shallow copy of a new deck
    this._cards = CardDeck.newDeck.slice(0);
  }

  shuffle() {
    this.newDeck();

    for (let index = 52; index !== 0; ) {
      // Select a random card
      let randomIndex = Math.floor(Math.random() * index);
      index -= 1;

      // Swap the current card with the random card
      let tempCard = this._cards[index];
      this._cards[index] = this._cards[randomIndex];
      this._cards[randomIndex] = tempCard;
    }
  }

  dealOneCard() {
    return this._cards.shift();
  }

  static cardRank(card: string): number {
    // This returns a numeric value for a card.
    // Ace is highest.

    let rankOfCard = card.codePointAt(0)! & UNIPOKER_0xf;
    if (rankOfCard === 0x1) {
      // Make Aces higher than Kings
      return UNIPOKER_0xf;
    }
    return rankOfCard;
  }

  static cardName(card: string) {
    if (typeof card == "string") {
      let result = card.codePointAt(0)!;
      return CardDeck.rankNames[result & UNIPOKER_0xf];
    }
    return "";
  }

  private static rankNames = [
    "",
    "Ace",
    "2",
    "3",
    "4",
    "5",
    "6",
    "7",
    "8",
    "9",
    "10",
    "Jack",
    "",
    "Queen",
    "King",
  ];
  private static newDeck = [
    // Spades
    "\u{1f0a1}",
    "\u{1f0a2}",
    "\u{1f0a3}",
    "\u{1f0a4}",
    "\u{1f0a5}",
    "\u{1f0a6}",
    "\u{1f0a7}",
    "\u{1f0a8}",
    "\u{1f0a9}",
    "\u{1f0aa}",
    "\u{1f0ab}",
    "\u{1f0ad}",
    "\u{1f0ae}",
    // Hearts
    "\u{1f0b1}",
    "\u{1f0b2}",
    "\u{1f0b3}",
    "\u{1f0b4}",
    "\u{1f0b5}",
    "\u{1f0b6}",
    "\u{1f0b7}",
    "\u{1f0b8}",
    "\u{1f0b9}",
    "\u{1f0ba}",
    "\u{1f0bb}",
    "\u{1f0bd}",
    "\u{1f0be}",
    // Clubs
    "\u{1f0d1}",
    "\u{1f0d2}",
    "\u{1f0d3}",
    "\u{1f0d4}",
    "\u{1f0d5}",
    "\u{1f0d6}",
    "\u{1f0d7}",
    "\u{1f0d8}",
    "\u{1f0d9}",
    "\u{1f0da}",
    "\u{1f0db}",
    "\u{1f0dd}",
    "\u{1f0de}",
    // Diamondss
    "\u{1f0c1}",
    "\u{1f0c2}",
    "\u{1f0c3}",
    "\u{1f0c4}",
    "\u{1f0c5}",
    "\u{1f0c6}",
    "\u{1f0c7}",
    "\u{1f0c8}",
    "\u{1f0c9}",
    "\u{1f0ca}",
    "\u{1f0cb}",
    "\u{1f0cd}",
    "\u{1f0ce}",
  ];
}
/*
 * @Generator
 */
class Hand {
  private _rank: number = 0;
  private _cards: string[] = [];
  /*
   * @State
   */
  constructor() {
    this.clear();
  }
  clear() {
    this._cards = [];
    this._rank = 0;
  }

  takeCard(card: string) {
    this._cards.push(card);
  }

  score() {
    // Sort highest rank to lowest
    this._cards.sort((a, b): number => {
      return CardDeck.cardRank(b) - CardDeck.cardRank(a);
    });

    let handString = this._cards.join("");

    let flushResult = handString.match(Hand.FlushRegExp);
    let straightResult = handString.match(Hand.StraightRegExp);
    let ofAKindResult = handString.match(Hand.OfAKindRegExp);

    if (flushResult !== null && flushResult !== undefined) {
      if (straightResult !== null && straightResult !== undefined) {
        if (straightResult[1] !== null && straightResult[1] !== undefined) {
          this._rank = Hand.RoyalFlush;
        } else {
          this._rank = Hand.StraightFlush;
        }
      } else {
        this._rank = Hand.Flush;
      }
      this._rank |=
        (CardDeck.cardRank(this._cards[0]) << UNIPOKER_16) |
        (CardDeck.cardRank(this._cards[1]) << UNIPOKER_12);
    } else if (straightResult !== null && straightResult !== undefined) {
      this._rank =
        Hand.Straight |
        (CardDeck.cardRank(this._cards[0]) << UNIPOKER_16) |
        (CardDeck.cardRank(this._cards[1]) << UNIPOKER_12);
    } else if (ofAKindResult !== null && ofAKindResult !== undefined) {
      // When comparing lengths, a matched unicode character has a length of 2.
      // Therefore expected lengths are doubled, e.g a pair will have a match length of 4.
      if (ofAKindResult[0].length == UNIPOKER_8) {
        this._rank = Hand.FourOfAKind | CardDeck.cardRank(this._cards[0]);
      } else {
        // Found pair or three of a kind.  Check for two pair or full house.
        let firstOfAKind = ofAKindResult[0];
        let remainingCardsIndex =
          handString.indexOf(firstOfAKind) + firstOfAKind.length;
        let secondOfAKindResult = handString
          .slice(remainingCardsIndex)
          .match(Hand.OfAKindRegExp);
        if (remainingCardsIndex <= UNIPOKER_6 && secondOfAKindResult) {
          let secondOfAKind = secondOfAKindResult[0];
          // Three of a Kinds + Pairs, or Pairs + Three of a Kinds
          if (
            (firstOfAKind.length == UNIPOKER_6 &&
              secondOfAKind.length == UNIPOKER_4) ||
            (firstOfAKind.length == UNIPOKER_4 &&
              secondOfAKind.length == UNIPOKER_6)
          ) {
            let threeOfAKindCardRank = 0;
            let twoOfAKindCardRank = 0;

            if (firstOfAKind.length == UNIPOKER_6) {
              threeOfAKindCardRank = CardDeck.cardRank(
                firstOfAKind.slice(0, UNIPOKER_2)
              );
              twoOfAKindCardRank = CardDeck.cardRank(
                secondOfAKind.slice(0, UNIPOKER_2)
              );
            } else {
              threeOfAKindCardRank = CardDeck.cardRank(
                secondOfAKind.slice(0, UNIPOKER_2)
              );
              twoOfAKindCardRank = CardDeck.cardRank(
                firstOfAKind.slice(0, UNIPOKER_2)
              );
            }
            this._rank =
              Hand.FullHouse |
              (threeOfAKindCardRank << UNIPOKER_16) |
              (threeOfAKindCardRank << UNIPOKER_12) |
              (threeOfAKindCardRank << UNIPOKER_8) |
              (twoOfAKindCardRank << UNIPOKER_4) |
              twoOfAKindCardRank;
          } else if (
            firstOfAKind.length == UNIPOKER_4 &&
            secondOfAKind.length == UNIPOKER_4
          ) {
            let firstPairCardRank = CardDeck.cardRank(
              firstOfAKind.slice(0, UNIPOKER_2)
            );
            let SecondPairCardRank = CardDeck.cardRank(
              secondOfAKind.slice(0, UNIPOKER_2)
            );
            let otherCardRank = 0;
            // Due to sorting, the other card is at index 0, 4 or 8
            if (firstOfAKind.codePointAt(0) == handString.codePointAt(0)) {
              if (
                secondOfAKind.codePointAt(0) ==
                handString.codePointAt(UNIPOKER_4)
              ) {
                otherCardRank = CardDeck.cardRank(
                  handString.slice(UNIPOKER_8, UNIPOKER_10)
                );
              } else {
                otherCardRank = CardDeck.cardRank(
                  handString.slice(UNIPOKER_4, UNIPOKER_6)
                );
              }
            } else {
              otherCardRank = CardDeck.cardRank(
                handString.slice(0, UNIPOKER_2)
              );
            }
            this._rank =
              Hand.TwoPair |
              (firstPairCardRank << UNIPOKER_16) |
              (firstPairCardRank << UNIPOKER_12) |
              (SecondPairCardRank << UNIPOKER_8) |
              (SecondPairCardRank << UNIPOKER_4) |
              otherCardRank;
          }
        } else {
          let ofAKindCardRank = CardDeck.cardRank(
            firstOfAKind.slice(0, UNIPOKER_2)
          );
          let otherCardsRank = 0;
          for (let card of this._cards) {
            let cardRank = CardDeck.cardRank(card);
            if (cardRank != ofAKindCardRank) {
              otherCardsRank = (otherCardsRank << UNIPOKER_4) | cardRank;
            }
          }
          if (firstOfAKind.length == UNIPOKER_6) {
            this._rank =
              Hand.ThreeOfAKind |
              (ofAKindCardRank << UNIPOKER_16) |
              (ofAKindCardRank << UNIPOKER_12) |
              (ofAKindCardRank << UNIPOKER_8) |
              otherCardsRank;
          } else {
            this._rank =
              Hand.Pair |
              (ofAKindCardRank << UNIPOKER_16) |
              (ofAKindCardRank << UNIPOKER_12) |
              otherCardsRank;
          }
        }
      }
    } else {
      this._rank = 0;
      for (let card of this._cards) {
        let cardRank = CardDeck.cardRank(card);
        this._rank = (this._rank << UNIPOKER_4) | cardRank;
      }
    }
  }
  get rank() {
    return this._rank;
  }

  toString() {
    return this._cards.join("");
  }

  private static FlushRegExp = new RegExp(
    "([\u{1f0a1}-\u{1f0ae}]{5})|([\u{1f0b1}-\u{1f0be}]{5})|([\u{1f0c1}-\u{1f0ce}]{5})|([\u{1f0d1}-\u{1f0de}]{5})",
    "u"
  );
  private static StraightRegExp = new RegExp(
    "([\u{1f0a1}\u{1f0b1}\u{1f0d1}\u{1f0c1}][\u{1f0ae}\u{1f0be}\u{1f0de}\u{1f0ce}][\u{1f0ad}\u{1f0bd}\u{1f0dd}\u{1f0cd}][\u{1f0ab}\u{1f0bb}\u{1f0db}\u{1f0cb}][\u{1f0aa}\u{1f0ba}\u{1f0da}\u{1f0ca}])|[\u{1f0ae}\u{1f0be}\u{1f0de}\u{1f0ce}][\u{1f0ad}\u{1f0bd}\u{1f0dd}\u{1f0cd}][\u{1f0ab}\u{1f0bb}\u{1f0db}\u{1f0cb}][\u{1f0aa}\u{1f0ba}\u{1f0da}\u{1f0ca}][\u{1f0a9}\u{1f0b9}\u{1f0d9}\u{1f0c9}]|[\u{1f0ad}\u{1f0bd}\u{1f0dd}\u{1f0cd}][\u{1f0ab}\u{1f0bb}\u{1f0db}\u{1f0cb}][\u{1f0aa}\u{1f0ba}\u{1f0da}\u{1f0ca}][\u{1f0a9}\u{1f0b9}\u{1f0d9}\u{1f0c9}][\u{1f0a8}\u{1f0b8}\u{1f0d8}\u{1f0c8}]|[\u{1f0ab}\u{1f0bb}\u{1f0db}\u{1f0cb}][\u{1f0aa}\u{1f0ba}\u{1f0da}\u{1f0ca}][\u{1f0a9}\u{1f0b9}\u{1f0d9}\u{1f0c9}][\u{1f0a8}\u{1f0b8}\u{1f0d8}\u{1f0c8}][\u{1f0a7}\u{1f0b7}\u{1f0d7}\u{1f0c7}]|[\u{1f0aa}\u{1f0ba}\u{1f0da}\u{1f0ca}][\u{1f0a9}\u{1f0b9}\u{1f0d9}\u{1f0c9}][\u{1f0a8}\u{1f0b8}\u{1f0d8}\u{1f0c8}][\u{1f0a7}\u{1f0b7}\u{1f0d7}\u{1f0c7}][\u{1f0a6}\u{1f0b6}\u{1f0d6}\u{1f0c6}]|[\u{1f0a9}\u{1f0b9}\u{1f0d9}\u{1f0c9}][\u{1f0a8}\u{1f0b8}\u{1f0d8}\u{1f0c8}][\u{1f0a7}\u{1f0b7}\u{1f0d7}\u{1f0c7}][\u{1f0a6}\u{1f0b6}\u{1f0d6}\u{1f0c6}][\u{1f0a5}\u{1f0b5}\u{1f0d5}\u{1f0c5}]|[\u{1f0a8}\u{1f0b8}\u{1f0d8}\u{1f0c8}][\u{1f0a7}\u{1f0b7}\u{1f0d7}\u{1f0c7}][\u{1f0a6}\u{1f0b6}\u{1f0d6}\u{1f0c6}][\u{1f0a5}\u{1f0b5}\u{1f0d5}\u{1f0c5}][\u{1f0a4}\u{1f0b4}\u{1f0d4}\u{1f0c4}]|[\u{1f0a7}\u{1f0b7}\u{1f0d7}\u{1f0c7}][\u{1f0a6}\u{1f0b6}\u{1f0d6}\u{1f0c6}][\u{1f0a5}\u{1f0b5}\u{1f0d5}\u{1f0c5}][\u{1f0a4}\u{1f0b4}\u{1f0d4}\u{1f0c4}][\u{1f0a3}\u{1f0b3}\u{1f0d3}\u{1f0c3}]|[\u{1f0a6}\u{1f0b6}\u{1f0d6}\u{1f0c6}][\u{1f0a5}\u{1f0b5}\u{1f0d5}\u{1f0c5}][\u{1f0a4}\u{1f0b4}\u{1f0d4}\u{1f0c4}][\u{1f0a3}\u{1f0b3}\u{1f0d3}\u{1f0c3}][\u{1f0a2}\u{1f0b2}\u{1f0d2}\u{1f0c2}]|[\u{1f0a1}\u{1f0b1}\u{1f0d1}\u{1f0c1}][\u{1f0a5}\u{1f0b5}\u{1f0d5}\u{1f0c5}][\u{1f0a4}\u{1f0b4}\u{1f0d4}\u{1f0c4}][\u{1f0a3}\u{1f0b3}\u{1f0d3}\u{1f0c3}][\u{1f0a2}\u{1f0b2}\u{1f0d2}\u{1f0c2}]",
    "u"
  );
  private static OfAKindRegExp = new RegExp(
    "(?:[\u{1f0a1}\u{1f0b1}\u{1f0d1}\u{1f0c1}]{2,4})|(?:[\u{1f0ae}\u{1f0be}\u{1f0de}\u{1f0ce}]{2,4})|(?:[\u{1f0ad}\u{1f0bd}\u{1f0dd}\u{1f0cd}]{2,4})|(?:[\u{1f0ab}\u{1f0bb}\u{1f0db}\u{1f0cb}]{2,4})|(?:[\u{1f0aa}\u{1f0ba}\u{1f0da}\u{1f0ca}]{2,4})|(?:[\u{1f0a9}\u{1f0b9}\u{1f0d9}\u{1f0c9}]{2,4})|(?:[\u{1f0a8}\u{1f0b8}\u{1f0d8}\u{1f0c8}]{2,4})|(?:[\u{1f0a7}\u{1f0b7}\u{1f0d7}\u{1f0c7}]{2,4})|(?:[\u{1f0a6}\u{1f0b6}\u{1f0d6}\u{1f0c6}]{2,4})|(?:[\u{1f0a5}\u{1f0b5}\u{1f0d5}\u{1f0c5}]{2,4})|(?:[\u{1f0a4}\u{1f0b4}\u{1f0d4}\u{1f0c4}]{2,4})|(?:[\u{1f0a3}\u{1f0b3}\u{1f0d3}\u{1f0c3}]{2,4})|(?:[\u{1f0a2}\u{1f0b2}\u{1f0d2}\u{1f0c2}]{2,4})",
    "u"
  );

  private static RoyalFlush = UNIPOKER_0x900000;
  private static StraightFlush = UNIPOKER_0x800000;
  private static FourOfAKind = UNIPOKER_0x700000;
  private static FullHouse = UNIPOKER_0x600000;
  private static Flush = UNIPOKER_0x500000;
  private static Straight = UNIPOKER_0x400000;
  private static ThreeOfAKind = UNIPOKER_0x300000;
  private static TwoPair = UNIPOKER_0x200000;
  private static Pair = UNIPOKER_0x100000;
}

class Player extends Hand {
  private _name: string;
  private _wins: number;
  private _handTypeCounts: number[];
  /*
   * @State
   */
  constructor(name: string) {
    super();
    this._name = name;
    this._wins = 0;
    this._handTypeCounts = [0, 0, 0, 0, 0, 0, 0, 0, 0, 0];
  }

  scoreHand() {
    this.score();
    let handType = this.rank >> UNIPOKER_20;
    this._handTypeCounts[handType] += 1;
  }

  wonHand() {
    this._wins += 1;
  }

  get name() {
    return this._name;
  }

  get hand() {
    return super.toString();
  }

  get wins() {
    return this._wins;
  }

  get handTypeCounts() {
    return this._handTypeCounts;
  }
}

function playHands(players: Player[]) {
  let cardDeck = new CardDeck();
  let handsPlayed = 0;
  let highestRank = 0;

  do {
    cardDeck.shuffle();
    for (let player of players) {
      player.clear();
    }
    for (let i = 0; i < UNIPOKER_5; i++) {
      for (let player of players) player.takeCard(cardDeck.dealOneCard()!);
    }

    for (let player of players) {
      player.scoreHand();
    }
    handsPlayed += 1;

    highestRank = 0;

    for (let player of players) {
      if (player.rank > highestRank) {
        highestRank = player.rank;
      }
    }

    for (let player of players) {
      // We count ties as wins for each player.
      if (player.rank == highestRank) {
        player.wonHand();
      }
    }
  } while (handsPlayed < UNIPOKER_2000);
}


function run(logsEnabled: boolean): void {
  let benchmark: Benchmark = new Benchmark();
  let startTime = ArkTools.timeInUs();
  let results: number[] = [];
  for (let i = 0; i < UNIPOKER_120; i++) {
    benchmark.runIteration();
  }
  let endTime = ArkTools.timeInUs();
  let time = (endTime - startTime) / UNIPOKER_1000;
  print("uni-poker: ms =", time);
  if (logsEnabled) {
    for (let index = 0; index < benchmark._players.length; index++) {
      print(
        `players ${index} wins:${benchmark._players[index].wins} handTypeCounts:${benchmark._players[index].handTypeCounts}`
      );
    }
  }
}

run(false);
