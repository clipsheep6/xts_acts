/*
 * Copyright (C) 2022 Huawei Device Co., Ltd.
 * Licensed under the Apache License, Version 2.0 (the 'License');
 * You may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *     http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * Distributed under the License is distributed on an 'AS IS' BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * Limitations under the License.
 */

import media from '@ohos.multimedia.media'
import {describe, beforeAll, beforeEach, afterEach, afterAll, it, expect} from 'deccjsunit/index'

const MP4 = 'mp4';
const M4A = 'm4a';
const AUDIO = 'audio'
const VIDEO = 'video';
const INPUT_MPEG2 = 'test.mpeg2'
const INPUT_H264 = 'test.h264'
const INPUT_AAC = 'test.aac'
const INPUT_MP3 = 'test.mp3'
const INPUT_MPEG4 = 'test.mpeg4'
const AUDIO_VIDEO = 'audio_video';
const VIDEO_AUDIO = 'video_audio';
const AUDIO_VIDEO_CROSSOVER = 'audio_video_crossover'
const VIDEO_AUDIO_CROSSOVER = 'video_audio_crossover'
const ONLYAUDIO = 'onlyAudio';
const ONLYVIDEO = 'onlyVideo';
const AUDIO_AND_VIDEO = 'Audio_and_Video';
const NONETIMEMS = 'noneTimeMs';
const NONEOFFSET = 'noneOffset';
const NONEFLAGS = 'noneFlags';
const H264_FRAME_SIZE =
    [646, 5855, 3185, 3797, 3055, 5204, 2620, 6262, 2272, 3702, 4108, 4356, 4975, 4590, 3083, 1930, 1801, 1945,
    3475, 4028, 1415, 1930, 2802, 2176, 1727, 2287, 2274, 2033, 2432, 4447, 4130, 5229, 5792, 4217, 5804,
    6586, 7506, 5128, 5549, 6685, 5248, 4819, 5385, 4818, 5239, 4148, 6980, 5124, 4255, 5666, 4756, 4975,
    3840, 4913, 3649, 4002, 4926, 4284, 5329, 4305, 3750, 4770, 4090, 4767, 3995, 5039, 3820, 4566, 5556,
    4029, 3755, 5059, 3888, 3572, 4680, 4662, 4259, 3869, 4306, 3519, 3160, 4400, 4426, 4370, 3489, 4907,
    4102, 3723, 4420, 4347, 4117, 4578, 4470, 4579, 4128, 4157, 4226, 4742, 3616, 4476, 4084, 4623, 3736,
    4207, 3644, 4349, 4948, 4009, 3583, 4658, 3974, 5441, 4049, 3786, 4093, 3375, 4207, 3787, 4365, 2905,
    4371, 4132, 3633, 3652, 2977, 4387, 3368, 3887, 3464, 4198, 4690, 4467, 2931, 3573, 4652, 3901, 4403,
    3120, 3494, 4666, 3898, 3607, 3272, 4070, 3151, 3237, 3936, 3962, 3637, 3716, 3735, 4371, 3141, 3322,
    4401, 3579, 4006, 2720, 3526, 4796, 3737, 3824, 3257, 4310, 2992, 3537, 3209, 3453, 3819, 3212, 4384,
    3571, 3682, 3344, 3017, 3960, 2737, 1970, 2433, 1442, 1560, 4710, 1070, 877, 833, 838, 776, 735, 1184,
    1172, 699, 723, 2828, 4257, 4329, 3567, 5365, 4213, 3612, 4833, 3388, 3553, 3535, 4937, 4057, 3990,
    5047, 4197, 4656, 3219, 3661, 3666, 3908, 4385, 4350, 3636, 4038, 5213, 3677, 3789, 4221, 4137, 4440,
    3447, 3836, 3912, 4806, 3100, 2963, 5204, 2394, 2391, 1772, 1586, 1598, 2558, 2663, 4537, 3530, 4045,
    4641, 5723, 3688, 4231, 3420, 3462, 3828, 4764, 3944, 4499, 4375, 4597, 4305, 3872, 3969, 2805, 4398,
    3480, 4105, 3890, 3761, 3652, 4356, 2771, 3972, 2930, 3456, 3236, 4648, 3627, 2689, 3827, 2254, 3492,
    2988, 4408, 3007, 4611, 3018, 4783, 2556, 3263, 4536, 4159, 3818, 5093, 3539, 4336, 3400, 3871, 4019,
    4619, 5520, 3781, 4026, 4864, 3340, 4153, 4641, 4292, 4071, 4144, 5109, 3695, 4512, 3882, 3943, 4152,
    4133, 3862, 4717, 3431, 4984, 4164, 4359, 3401, 3727, 4256, 3563, 4694, 3225, 3984, 2432, 3790, 2827,
    3595, 4124, 3854, 2890, 3477, 3989, 3251, 3714, 3345, 4742, 1967, 3931, 1985, 1737, 1854, 2192, 2370,
    2083, 3265, 3312, 3071, 4255, 3994, 4563, 4650, 4885, 3868, 4698, 3103, 3682, 4197, 5532, 3963, 4756,
    4067, 3917, 3667, 3812, 4793, 3260, 3763, 4670, 3184, 2930, 3558, 3245, 4120, 4700, 3671, 4442, 3406,
    4862, 4331, 5064, 4058, 4075, 3160, 3930, 5187, 3816, 3795, 3085, 3564, 3856, 3948, 4474, 3511, 4108,
    4789, 2944, 3323, 2162, 2657, 2219, 1653, 2824, 2716, 3523, 2760, 3328, 3042, 3828, 3759, 3950, 3830,
    3336, 4457, 3193, 3706, 4314, 3937, 3422, 4067, 5328, 3693, 4567, 3444, 4317, 4929, 3838, 4129, 2975,
    4227, 4639, 4348, 2935, 3999, 4745, 3919, 3694, 2602, 4538, 4637, 4250, 3716, 3513, 3856, 4916, 4460,
    4263, 4153, 4299, 3577, 5527, 2486, 3332, 4133, 4145, 3369, 3576, 3940, 4304, 3179, 5266, 3536, 3622,
    2684, 3449, 3621, 4363, 4216, 4913, 5026, 3336, 3057, 2782, 3716, 3036, 4438, 3904, 4823, 1761, 2045,
    1446, 3210, 1625, 2400, 3489, 4719, 3954, 3756, 4940, 2371, 4516, 3739, 3572, 2644, 3837, 4915, 2251,
    4248, 4019, 4407, 4217, 2913, 5106];
const H264_FRAME_FLAG =
    ['C', 'I', 3185, 3797, 3055, 5204, 2620, 6262, 2272, 3702, 4108, 4356, 4975, 4590, 3083, 1930, 1801, 1945,
    3475, 4028, 1415, 1930, 2802, 2176, 1727, 2287, 2274, 2033, 2432, 4447, 4130, 5229, 5792, 4217, 5804,
    6586, 7506, 5128, 5549, 6685, 5248, 4819, 5385, 4818, 5239, 4148, 6980, 5124, 4255, 5666, 4756, 4975,
    3840, 4913, 3649, 4002, 4926, 4284, 5329, 4305, 3750, 4770, 4090, 4767, 3995, 5039, 3820, 4566, 5556,
    4029, 3755, 5059, 3888, 3572, 4680, 4662, 4259, 3869, 4306, 3519, 3160, 4400, 4426, 4370, 3489, 4907,
    4102, 3723, 4420, 4347, 4117, 4578, 4470, 4579, 4128, 4157, 4226, 4742, 3616, 4476, 4084, 4623, 3736,
    4207, 3644, 4349, 4948, 4009, 3583, 4658, 3974, 5441, 4049, 3786, 4093, 3375, 4207, 3787, 4365, 2905,
    4371, 4132, 3633, 3652, 2977, 4387, 3368, 3887, 3464, 4198, 4690, 4467, 2931, 3573, 4652, 3901, 4403,
    3120, 3494, 4666, 3898, 3607, 3272, 4070, 3151, 3237, 3936, 3962, 3637, 3716, 3735, 4371, 3141, 3322,
    4401, 3579, 4006, 2720, 3526, 4796, 3737, 3824, 3257, 4310, 2992, 3537, 3209, 3453, 3819, 3212, 4384,
    3571, 3682, 3344, 3017, 3960, 2737, 1970, 2433, 1442, 1560, 4710, 1070, 877, 833, 838, 776, 735, 1184,
    1172, 699, 723, 2828, 4257, 4329, 3567, 5365, 4213, 3612, 4833, 3388, 3553, 3535, 4937, 4057, 3990,
    5047, 4197, 4656, 3219, 3661, 3666, 3908, 4385, 4350, 3636, 4038, 5213, 3677, 3789, 4221, 4137, 4440,
    3447, 3836, 3912, 4806, 3100, 2963, 5204, 2394, 2391, 1772, 1586, 1598, 2558, 2663, 4537, 3530, 4045,
    4641, 5723, 3688, 4231, 3420, 3462, 3828, 4764, 3944, 4499, 4375, 4597, 4305, 3872, 3969, 2805, 4398,
    3480, 4105, 3890, 3761, 3652, 4356, 2771, 3972, 2930, 3456, 3236, 4648, 3627, 2689, 3827, 2254, 3492,
    2988, 4408, 3007, 4611, 3018, 4783, 2556, 3263, 4536, 4159, 3818, 5093, 3539, 4336, 3400, 3871, 4019,
    4619, 5520, 3781, 4026, 4864, 3340, 4153, 4641, 4292, 4071, 4144, 5109, 3695, 4512, 3882, 3943, 4152,
    4133, 3862, 4717, 3431, 4984, 4164, 4359, 3401, 3727, 4256, 3563, 4694, 3225, 3984, 2432, 3790, 2827,
    3595, 4124, 3854, 2890, 3477, 3989, 3251, 3714, 3345, 4742, 1967, 3931, 1985, 1737, 1854, 2192, 2370,
    2083, 3265, 3312, 3071, 4255, 3994, 4563, 4650, 4885, 3868, 4698, 3103, 3682, 4197, 5532, 3963, 4756,
    4067, 3917, 3667, 3812, 4793, 3260, 3763, 4670, 3184, 2930, 3558, 3245, 4120, 4700, 3671, 4442, 3406,
    4862, 4331, 5064, 4058, 4075, 3160, 3930, 5187, 3816, 3795, 3085, 3564, 3856, 3948, 4474, 3511, 4108,
    4789, 2944, 3323, 2162, 2657, 2219, 1653, 2824, 2716, 3523, 2760, 3328, 3042, 3828, 3759, 3950, 3830,
    3336, 4457, 3193, 3706, 4314, 3937, 3422, 4067, 5328, 3693, 4567, 3444, 4317, 4929, 3838, 4129, 2975,
    4227, 4639, 4348, 2935, 3999, 4745, 3919, 3694, 2602, 4538, 4637, 4250, 3716, 3513, 3856, 4916, 4460,
    4263, 4153, 4299, 3577, 5527, 2486, 3332, 4133, 4145, 3369, 3576, 3940, 4304, 3179, 5266, 3536, 3622,
    2684, 3449, 3621, 4363, 4216, 4913, 5026, 3336, 3057, 2782, 3716, 3036, 4438, 3904, 4823, 1761, 2045,
    1446, 3210, 1625, 2400, 3489, 4719, 3954, 3756, 4940, 2371, 4516, 3739, 3572, 2644, 3837, 4915, 2251,
    4248, 4019, 4407, 4217, 2913, 5106];
const AAC_FRAME_SIZE = [361, 368, 22, 20, 20, 20, 20, 20, 18, 198, 513, 499, 534, 522, 541, 608, 596, 613, 631, 543,
563, 505, 411, 375, 402, 361, 396, 405, 372, 402, 382, 371, 363, 366, 401, 390, 519, 325, 367,
365, 389, 358, 389, 413, 327, 493, 378, 360, 359, 387, 356, 391, 362, 360, 393, 408, 384, 348,
361, 437, 494, 381, 397, 329, 365, 376, 354, 376, 347, 541, 366, 377, 370, 365, 368, 366, 358,
366, 401, 395, 393, 385, 348, 365, 386, 375, 381, 371, 549, 335, 376, 362, 390, 391, 350, 380,
368, 360, 387, 408, 392, 383, 390, 418, 353, 383, 375, 410, 355, 375, 437, 413, 393, 427, 397,
397, 363, 418, 393, 412, 373, 433, 323, 381, 396, 391, 372, 400, 397, 294, 280, 391, 405, 378,
410, 505, 411, 385, 380, 377, 345, 393, 375, 377, 378, 351, 401, 377, 404, 368, 370, 402, 386,
398, 393, 392, 386, 403, 360, 393, 373, 386, 362, 344, 416, 355, 380, 353, 398, 422, 386, 365,
335, 340, 383, 371, 386, 375, 399, 398, 352, 387, 380, 390, 391, 390, 385, 404, 384, 407, 365,
348, 388, 388, 385, 392, 383, 462, 463, 466, 392, 351, 358, 385, 358, 389, 378, 359, 349, 424,
335, 392, 347, 348, 379, 302, 295, 357, 458, 466, 460, 370, 390, 402, 405, 411, 378, 383, 351,
413, 420, 362, 343, 369, 367, 378, 355, 385, 410, 420, 375, 398, 394, 384, 376, 400, 395, 389,
395, 363, 422, 364, 365, 380, 395, 364, 395, 350, 319, 308, 374, 560, 503, 500, 438, 427, 445,
416, 366, 424, 331, 354, 376, 381, 387, 369, 382, 343, 366, 442, 419, 348, 362, 354, 405, 419,
332, 376, 388, 405, 365, 428, 379, 384, 387, 403, 385, 344, 366, 381, 366, 371, 286, 328, 470,
413, 404, 409, 406, 376, 370, 380, 393, 345, 400, 386, 397, 376, 407, 364, 362, 351, 377, 345,
375, 413, 353, 419, 382, 379, 383, 444, 392, 368, 374, 376, 349, 413, 405, 374, 355, 412, 385,
356, 277, 361, 461, 398, 431, 381, 405, 389, 374, 392, 377, 407, 377, 389, 406, 391, 378, 420,
388, 372, 372, 350, 373, 446, 399, 354, 368, 350, 373, 418, 390, 366, 367, 351, 414, 413, 362,
373, 364, 312, 400, 391, 371, 384, 478, 391, 400, 344, 360, 383, 349, 370, 393, 369, 364, 366,
401, 377, 360, 392, 398, 388, 358, 374, 386, 395, 374, 419, 376, 393, 376, 348, 416, 381, 363,
376, 381, 369, 378, 416, 366, 379, 363, 430, 368, 358, 470, 296, 358];
const MPEG4_FRAME_SIZE = [
    40288, 32946, 8929, 2315, 821, 1240, 647, 578, 724, 595, 627, 647,
    13350, 714, 425, 441, 509, 453, 501, 607, 589, 483, 521, 616,
    8819, 643, 455, 612, 558, 534, 596, 527, 552, 503, 587, 637,
    7794, 905, 718, 668, 606, 619, 697, 851, 799, 763, 735, 747,
    7682, 1026, 700, 758, 899, 824, 795, 762, 770, 849, 797, 959,
    9310, 755, 685, 693, 714, 783, 801, 810, 894, 834, 833, 814,
    8007, 976, 808, 949, 1023, 905, 855, 854, 909, 913, 1011, 1093,
    7931, 1160, 942, 978, 934, 1063, 972, 1057, 987, 987, 1019, 1019,
    7805, 1250, 1074, 1019, 1003, 1086, 1007, 1008, 1069, 1151, 1009, 1018,
    7875, 1221, 1009, 1017, 1095, 1108, 1049, 1011, 1119, 1089, 1023, 1011,
    9214, 976, 935, 1124, 1157, 1094, 1135, 1080, 1150, 1084, 1092, 1246,
    7798, 1340, 1050, 995, 1080, 987, 1038, 1192, 1183, 1007, 973, 1024,
    7633, 1210, 875, 999, 1010, 1049, 1058, 879, 989, 826, 915, 991,
    7436, 1256, 1006, 845, 986, 832, 905, 930, 918, 925, 837, 788,
    7289, 1126, 784, 843, 876, 837, 809, 727, 847, 705, 767, 834,
    8302, 712, 586, 651, 685, 617, 693, 686, 771, 694, 772, 587,
    7294, 786, 572, 632, 708, 719, 638, 564, 624, 607, 611, 748,
    7161, 996, 715, 547, 665, 557, 685, 494, 604, 549, 526, 547,
    7093, 906, 722, 475, 598, 525, 631, 511, 548, 564, 577, 504,
    7034, 940, 636, 544, 598, 581, 615, 555, 538, 606, 599, 605,
    7974, 570, 461, 445, 540, 546, 582, 535, 602, 500, 821, 503,
    7189, 778, 522, 560, 554, 568, 524, 530, 586, 607, 543, 622,
    7032, 909, 533, 611, 559, 575, 607, 562, 559, 592, 553, 598,
    6927, 924, 612, 576, 583, 575, 553, 620, 649, 653, 542, 571,
    6871, 983, 492, 548, 593, 613, 477, 555, 620, 570, 521, 615,
    7837, 583, 440, 510, 550, 567, 502, 638, 624, 561, 561, 627,
    7035, 858, 507, 579, 550, 503, 470, 573, 560, 546, 482, 667,
    6896, 864, 460, 598, 514, 558, 539, 618, 673, 579, 517, 591,
    6872, 964, 585, 622, 618, 610, 504, 652, 614, 661, 545, 709,
    6946, 894, 505, 652, 596, 693, 526, 671, 602, 623, 537, 686,
    8042, 687, 448, 526, 572, 574, 557, 660, 704, 643, 567, 704,
    6972, 874, 548, 652, 579, 691, 568, 638, 721, 600, 670, 698,
    6999, 922, 573, 604, 639, 681, 672, 622, 662, 599, 627, 640,
    7046, 951, 678, 605, 676, 615, 642, 508, 680, 753, 613, 650,
    7058, 987, 633, 632, 645, 687, 622, 741, 648, 767, 638, 703,
    8547, 779, 548, 674, 659, 812, 697, 776, 733, 825, 715, 723,
    7344, 990, 625, 707, 738, 770, 693, 732, 721, 817, 724, 818,
    7327, 1114, 680, 726, 740, 793, 821, 771, 731, 818, 707, 794,
    7356, 1085, 748, 748, 731, 777, 699, 756, 743, 837, 777, 839,
    7380, 1120, 740, 748, 786, 909, 818, 849, 819, 953, 744, 766,
    9423, 829, 668, 771, 810, 915, 845, 894, 892, 983, 882, 872,
    7751, 1131, 804, 830, 820, 887, 800, 775, 1082, 845, 874, 1034,
    7872, 1115, 871, 884, 917, 856, 1010, 915, 837, 887, 993, 913,
    7986, 1123, 980, 866, 928, 869, 907, 880, 842, 902, 910, 857,
    7987, 1066, 877, 879, 904, 898, 994, 909, 893, 882, 972, 953,
    10693, 913, 884, 906, 963, 977, 1103, 1097, 1114, 1047, 1124, 1056,
    8313, 1183, 1076, 957, 948, 977, 1079, 989, 1000, 1044, 1129, 1090,
    8338, 1206, 1013, 1003, 1043, 1091, 1153, 1012, 989, 970, 1025, 1004,
    8281, 1376, 1092, 1012, 977, 971, 1020, 1004, 976, 993, 1010, 1035,
    8213, 1241, 957, 967, 970, 989, 1017, 1001, 969, 933, 937, 942,
    10633, 941,
];
const MP3_FRAME_SIZE = [
    192, 192, 192, 192, 192, 192, 192, 192, 192, 192, 192, 192, 192, 192, 192, 192, 192, 192, 192, 192, 192,
    192, 192, 192, 192, 192, 192, 192, 192, 192, 192, 192, 192, 192, 192, 192, 192, 192, 192, 192, 192, 192,
    192, 192, 192, 192, 192, 192, 192, 192, 192, 192, 192, 192, 192, 192, 192, 192, 192, 192, 192, 192, 192,
    192, 192, 192, 192, 192, 192, 192, 192, 192, 192, 192, 192, 192, 192, 192, 192, 192, 192, 192, 192, 192,
    192, 192, 192, 192, 192, 192, 192, 192, 192, 192, 192, 192, 192, 192, 192, 192, 192, 192, 192, 192, 192,
    192, 192, 192, 192, 192, 192, 192, 192, 192, 192, 192, 192, 192, 192, 192, 192, 192, 192, 192, 192, 192,
    192, 192, 192, 192, 192, 192, 192, 192, 192, 192, 192, 192, 192, 192, 192, 192, 192, 192, 192, 192, 192,
    192, 192, 192, 192, 192, 192, 192, 192, 192, 192, 192, 192, 192, 192, 192, 192, 192, 192, 192, 192, 192,
    192, 192, 192, 192, 192, 192, 192, 192, 192, 192, 192, 192, 192, 192, 192, 192, 192, 192, 192, 192, 192,
    192, 192, 192, 192, 192, 192, 192, 192, 192, 192, 192, 192, 192, 192, 192, 192, 192, 192, 192, 192, 192,
    192, 192, 192, 192, 192, 192, 192, 192, 192, 192, 192, 192, 192, 192, 192, 192, 192, 192, 192, 192, 192,
    192, 192, 192, 192, 192, 192, 192, 192, 192, 192, 192, 192, 192, 192, 192, 192, 192, 192, 192, 192, 192,
    192, 192, 192, 192, 192, 192, 192, 192, 192, 192, 192, 192, 192, 192, 192, 192, 192, 192, 192, 192, 192,
    192, 192, 192, 192, 192, 192, 192, 192, 192, 192, 192, 192, 192, 192, 192, 192, 192, 192, 192, 192, 192,
    192, 192, 192, 192, 192, 192, 192, 192, 192, 192, 192, 192, 192, 192, 192, 192, 192, 192, 192, 192, 192,
    192, 192, 192, 192, 192, 192, 192, 192, 192, 192, 192, 192, 192, 192, 192, 192, 192, 192, 192, 192, 192,
    192, 192, 192, 192, 192, 192, 192, 192, 192, 192, 192, 192, 192, 192, 192, 192, 192, 192, 192, 192, 192,
    192, 192, 192, 192, 192, 192, 192, 192, 192, 192, 192, 192, 192, 192, 192, 192, 192, 192, 192, 192, 192,
    192, 192, 192, 192, 192, 192, 192, 192, 192, 192, 192, 192, 192, 192, 192, 192, 192, 192, 192, 192, 192,
    192, 192, 192, 192, 192, 192, 192, 192, 192, 192, 192, 192, 192, 192, 192, 192, 192, 192, 192, 192, 192,
    192, 192, 192, 192, 192, 192, 192, 192, 192, 192, 192, 192, 192, 192, 192, 192, 192, 192, 192, 192, 192,
    192, 192, 192, 192, 192, 192, 192, 192, 192, 192, 192, 192, 192, 192, 192, 192, 192, 192, 192, 192, 192,
    192, 192, 192, 192, 192, 192, 192, 192, 192, 192, 192, 192, 192, 192, 192, 192, 192, 192, 192, 192, 192,
    192, 192, 192, 192, 192, 192, 192, 192, 192, 192, 192, 192, 192, 192, 192, 192, 192, 192, 192, 192, 192,
    192, 192, 192, 192, 192, 192, 192, 192, 192, 192, 192, 192, 192, 192, 192, 192, 192, 192, 192, 192, 192,
    192, 192, 192, 192, 192, 192, 192, 192, 192, 192, 192, 192, 192, 192, 192, 192, 192, 192, 192, 192, 192,
    192, 192, 192, 192, 192, 192, 192, 192, 192, 192, 192, 192, 192, 192, 192, 192, 192, 192, 192, 192, 192,
    192, 192, 192, 192, 192, 192, 192, 192
];
const MPEG2_FRAME_SIZE =
    [646, 5855, 3185, 3797, 3055, 5204, 2620, 6262, 2272, 3702, 4108, 4356, 4975, 4590, 3083, 1930, 1801, 1945,
    3475, 4028, 1415, 1930, 2802, 2176, 1727, 2287, 2274, 2033, 2432, 4447, 4130, 5229, 5792, 4217, 5804,
    6586, 7506, 5128, 5549, 6685, 5248, 4819, 5385, 4818, 5239, 4148, 6980, 5124, 4255, 5666, 4756, 4975,
    3840, 4913, 3649, 4002, 4926, 4284, 5329, 4305, 3750, 4770, 4090, 4767, 3995, 5039, 3820, 4566, 5556,
    4029, 3755, 5059, 3888, 3572, 4680, 4662, 4259, 3869, 4306, 3519, 3160, 4400, 4426, 4370, 3489, 4907,
    4102, 3723, 4420, 4347, 4117, 4578, 4470, 4579, 4128, 4157, 4226, 4742, 3616, 4476, 4084, 4623, 3736,
    4207, 3644, 4349, 4948, 4009, 3583, 4658, 3974, 5441, 4049, 3786, 4093, 3375, 4207, 3787, 4365, 2905,
    4371, 4132, 3633, 3652, 2977, 4387, 3368, 3887, 3464, 4198, 4690, 4467, 2931, 3573, 4652, 3901, 4403,
    3120, 3494, 4666, 3898, 3607, 3272, 4070, 3151, 3237, 3936, 3962, 3637, 3716, 3735, 4371, 3141, 3322,
    4401, 3579, 4006, 2720, 3526, 4796, 3737, 3824, 3257, 4310, 2992, 3537, 3209, 3453, 3819, 3212, 4384,
    3571, 3682, 3344, 3017, 3960, 2737, 1970, 2433, 1442, 1560, 4710, 1070, 877, 833, 838, 776, 735, 1184,
    1172, 699, 723, 2828, 4257, 4329, 3567, 5365, 4213, 3612, 4833, 3388, 3553, 3535, 4937, 4057, 3990,
    5047, 4197, 4656, 3219, 3661, 3666, 3908, 4385, 4350, 3636, 4038, 5213, 3677, 3789, 4221, 4137, 4440,
    3447, 3836, 3912, 4806, 3100, 2963, 5204, 2394, 2391, 1772, 1586, 1598, 2558, 2663, 4537, 3530, 4045,
    4641, 5723, 3688, 4231, 3420, 3462, 3828, 4764, 3944, 4499, 4375, 4597, 4305, 3872, 3969, 2805, 4398,
    3480, 4105, 3890, 3761, 3652, 4356, 2771, 3972, 2930, 3456, 3236, 4648, 3627, 2689, 3827, 2254, 3492,
    2988, 4408, 3007, 4611, 3018, 4783, 2556, 3263, 4536, 4159, 3818, 5093, 3539, 4336, 3400, 3871, 4019,
    4619, 5520, 3781, 4026, 4864, 3340, 4153, 4641, 4292, 4071, 4144, 5109, 3695, 4512, 3882, 3943, 4152,
    4133, 3862, 4717, 3431, 4984, 4164, 4359, 3401, 3727, 4256, 3563, 4694, 3225, 3984, 2432, 3790, 2827,
    3595, 4124, 3854, 2890, 3477, 3989, 3251, 3714, 3345, 4742, 1967, 3931, 1985, 1737, 1854, 2192, 2370,
    2083, 3265, 3312, 3071, 4255, 3994, 4563, 4650, 4885, 3868, 4698, 3103, 3682, 4197, 5532, 3963, 4756,
    4067, 3917, 3667, 3812, 4793, 3260, 3763, 4670, 3184, 2930, 3558, 3245, 4120, 4700, 3671, 4442, 3406,
    4862, 4331, 5064, 4058, 4075, 3160, 3930, 5187, 3816, 3795, 3085, 3564, 3856, 3948, 4474, 3511, 4108,
    4789, 2944, 3323, 2162, 2657, 2219, 1653, 2824, 2716, 3523, 2760, 3328, 3042, 3828, 3759, 3950, 3830,
    3336, 4457, 3193, 3706, 4314, 3937, 3422, 4067, 5328, 3693, 4567, 3444, 4317, 4929, 3838, 4129, 2975,
    4227, 4639, 4348, 2935, 3999, 4745, 3919, 3694, 2602, 4538, 4637, 4250, 3716, 3513, 3856, 4916, 4460,
    4263, 4153, 4299, 3577, 5527, 2486, 3332, 4133, 4145, 3369, 3576, 3940, 4304, 3179, 5266, 3536, 3622,
    2684, 3449, 3621, 4363, 4216, 4913, 5026, 3336, 3057, 2782, 3716, 3036, 4438, 3904, 4823, 1761, 2045,
    1446, 3210, 1625, 2400, 3489, 4719, 3954, 3756, 4940, 2371, 4516, 3739, 3572, 2644, 3837, 4915, 2251,
    4248, 4019, 4407, 4217, 2913, 5106];

export const AUDIODESCRIPTION_AAC = {
    'codec_mime': 'audio/mp4a-latm',
    'sample_rate': 44100,
    'channel_count': 2,
}

export const AUDIODESCRIPTION_MP3 = {
    'codec_mime': 'audio/mpeg',
    'sample_rate': 44100,
    'channel_count': 2,
}

export const VIDEODESCRIPTION_MPEG2 = {
    'codec_mime': 'video/mpeg2',
    'width': 480,
    'height': 640,
    'frame_rate': 30,
}

export const VIDEODESCRIPTION_H264 = {
    'codec_mime': 'video/avc',
    'width': 480,
    'height': 640,
    'frame_rate': 30,
}

export const VIDEODESCRIPTION_MPEG4 = {
    'codec_mime': 'video/mp4v-es',
    'width': 480,
    'height': 640,
    'frame_rate': 30,
}

const VIDEODESCRIPTION_MPEG4_NONECODEC_MIME = {
    'width': 480,
    'height': 640,
    'frame_rate': 30,
}

const VIDEODESCRIPTION_MPEG4_NONEWIDTH = {
    'codec_mime': 'video/mp4v-es',
    'height': 640,
    'frame_rate': 30,
}

const VIDEODESCRIPTION_MPEG4_NONEHEIGHT = {
    'codec_mime': 'video/mp4v-es',
    'width': 480,
    'frame_rate': 30,
}

const VIDEODESCRIPTION_MPEG4_NONEFRAME_RATE = {
    'codec_mime': 'video/mp4v-es',
    'width': 480,
    'height': 640,
}

const AUDIODESCRIPTION_AAC_NONECODEC_MIME = {
    'sample_rate': 44100,
    'channel_count': 2,
}

const AUDIODESCRIPTION_AAC_NONESAMPLE_RATE = {
    'codec_mime': 'audio/mp4a-latm',
    'channel_count': 2,
}

const AUDIODESCRIPTION_AAC_NONECHANNEL_COUNT = {
    'codec_mime': 'audio/mp4a-latm',
    'sample_rate': 44100,
}

export const AUDIO_AAC = {
    audioDescription: AUDIODESCRIPTION_AAC,
    audioInputFileName: INPUT_AAC,
    outputFormat: M4A,
    mediaType: ONLYAUDIO,
    writeType: AUDIO,
    audioFrameSize: AAC_FRAME_SIZE
}

export const AUDIO_MP3 = {
    audioDescription: AUDIODESCRIPTION_MP3,
    audioInputFileName: INPUT_MP3,
    outputFormat: M4A,
    mediaType: ONLYAUDIO,
    writeType: AUDIO,
    audioFrameSize: MP3_FRAME_SIZE
}

export const VIDEO_H264 = {
    videoDescription: VIDEODESCRIPTION_H264,
    videoInputFileName: INPUT_H264,
    outputFormat: MP4,
    mediaType: ONLYVIDEO,
    writeType: VIDEO,
    videoFrameSize: H264_FRAME_SIZE,
    videoFrameFlag: H264_FRAME_FLAG
}

export const VIDEO_MPEG2 = {
    videoDescription: VIDEODESCRIPTION_MPEG2,
    videoInputFileName: INPUT_MPEG2,
    outputFormat: MP4,
    mediaType: ONLYVIDEO,
    writeType: VIDEO,
    videoFrameSize: MPEG2_FRAME_SIZE
}

export const VIDEO_MPEG4 = {
    videoDescription: VIDEODESCRIPTION_MPEG4,
    videoInputFileName: INPUT_MPEG4,
    outputFormat: MP4,
    mediaType: ONLYVIDEO,
    writeType: VIDEO,
    videoFrameSize: MPEG4_FRAME_SIZE,
}

export const AAC_H264 = {
    audioDescription: AUDIODESCRIPTION_AAC,
    videoDescription: VIDEODESCRIPTION_H264,
    audioInputFileName: INPUT_AAC,
    videoInputFileName: INPUT_H264,
    outputFormat: MP4,
    mediaType: AUDIO_AND_VIDEO,
    writeType: VIDEO_AUDIO,
    audioFrameSize: AAC_FRAME_SIZE,
    videoFrameSize: H264_FRAME_SIZE,
    videoFrameFlag: H264_FRAME_FLAG
}

export const AAC_MPEG4 = {
    audioDescription: AUDIODESCRIPTION_AAC,
    videoDescription: VIDEODESCRIPTION_MPEG4,
    audioInputFileName: INPUT_AAC,
    videoInputFileName: INPUT_MPEG4,
    outputFormat: MP4,
    mediaType: AUDIO_AND_VIDEO,
    writeType: AUDIO_VIDEO,
    audioFrameSize: AAC_FRAME_SIZE,
    videoFrameSize: MPEG4_FRAME_SIZE
}

export const MP3_H264 = {
    audioDescription: AUDIODESCRIPTION_MP3,
    videoDescription: VIDEODESCRIPTION_H264,
    audioInputFileName: INPUT_MP3,
    videoInputFileName: INPUT_H264,
    outputFormat: MP4,
    mediaType: AUDIO_AND_VIDEO,
    writeType: AUDIO_VIDEO,
    audioFrameSize: MP3_FRAME_SIZE,
    videoFrameSize: H264_FRAME_SIZE,
    videoFrameFlag: H264_FRAME_FLAG
}

export const MP3_MPEG4 = {
    audioDescription: AUDIODESCRIPTION_MP3,
    videoDescription: VIDEODESCRIPTION_MPEG4,
    audioInputFileName: INPUT_MP3,
    videoInputFileName: INPUT_MPEG4,
    outputFormat: MP4,
    mediaType: AUDIO_AND_VIDEO,
    writeType: AUDIO_VIDEO,
    audioFrameSize: MP3_FRAME_SIZE,
    videoFrameSize: MPEG4_FRAME_SIZE
}

export const FUNCTION_1000 = {
    audioDescription: AUDIODESCRIPTION_AAC,
    videoDescription: VIDEODESCRIPTION_H264,
    audioInputFileName: INPUT_AAC,
    videoInputFileName: INPUT_H264,
    outputFormat: MP4,
    mediaType: AUDIO_AND_VIDEO,
    writeType: AUDIO_VIDEO,
    rotation: 90,
    location: { latitude: 50, longitude: 100 },
    audioFrameSize: AAC_FRAME_SIZE,
    videoFrameSize: H264_FRAME_SIZE,
    videoFrameFlag: H264_FRAME_FLAG
}

export const FUNCTION_1600 = {
    audioDescription: AUDIODESCRIPTION_AAC,
    videoDescription: VIDEODESCRIPTION_H264,
    audioInputFileName: INPUT_AAC,
    videoInputFileName: INPUT_H264,
    outputFormat: MP4,
    mediaType: AUDIO_AND_VIDEO,
    writeType: AUDIO_VIDEO_CROSSOVER,
    audioFrameSize: AAC_FRAME_SIZE,
    videoFrameSize: H264_FRAME_SIZE,
    videoFrameFlag: H264_FRAME_FLAG
}

export const FUNCTION_1700 = {
    audioDescription: AUDIODESCRIPTION_AAC,
    videoDescription: VIDEODESCRIPTION_H264,
    audioInputFileName: INPUT_AAC,
    videoInputFileName: INPUT_H264,
    outputFormat: MP4,
    mediaType: AUDIO_AND_VIDEO,
    writeType: VIDEO_AUDIO_CROSSOVER,
    audioFrameSize: AAC_FRAME_SIZE,
    videoFrameSize: H264_FRAME_SIZE,
    videoFrameFlag: H264_FRAME_FLAG
}

export const FUNCTION_1900 = {
    videoDescription: VIDEODESCRIPTION_H264,
    videoInputFileName: INPUT_H264,
    outputFormat: MP4,
    mediaType: ONLYVIDEO,
    writeType: VIDEO,
    rotation: 0,
    videoFrameSize: H264_FRAME_SIZE,
    videoFrameFlag: H264_FRAME_FLAG
}

export const FUNCTION_2000 = {
    videoDescription: VIDEODESCRIPTION_H264,
    videoInputFileName: INPUT_H264,
    outputFormat: MP4,
    mediaType: ONLYVIDEO,
    writeType: VIDEO,
    rotation: 90,
    videoFrameSize: H264_FRAME_SIZE,
    videoFrameFlag: H264_FRAME_FLAG
}

export const FUNCTION_2100 = {
    videoDescription: VIDEODESCRIPTION_MPEG4,
    videoInputFileName: INPUT_MPEG4,
    outputFormat: MP4,
    mediaType: ONLYVIDEO,
    writeType: VIDEO,
    rotation: 180,
    videoFrameSize: MPEG4_FRAME_SIZE,
}

export const FUNCTION_2200 = {
    videoDescription: VIDEODESCRIPTION_MPEG4,
    videoInputFileName: INPUT_MPEG4,
    outputFormat: MP4,
    mediaType: ONLYVIDEO,
    writeType: VIDEO,
    rotation: 270,
    videoFrameSize: MPEG4_FRAME_SIZE,
}

export const FUNCTION_2300 = {
    videoDescription: VIDEODESCRIPTION_MPEG4,
    videoInputFileName: INPUT_MPEG4,
    outputFormat: MP4,
    mediaType: ONLYVIDEO,
    writeType: VIDEO,
    location: { longitude: 50, latitude: 90 },
    videoFrameSize: MPEG4_FRAME_SIZE,
}

export const RELIABILITY_0700 = {
    audioDescription: AUDIODESCRIPTION_AAC,
    videoDescription: VIDEODESCRIPTION_H264,
    audioInputFileName: INPUT_AAC,
    videoInputFileName: INPUT_H264,
    outputFormat: MP4,
    mediaType: AUDIO_AND_VIDEO,
    writeType: VIDEO,
    audioFrameSize: AAC_FRAME_SIZE,
    videoFrameSize: H264_FRAME_SIZE,
    videoFrameFlag: H264_FRAME_FLAG
}

export const RELIABILITY_1100 = {
    videoDescription: VIDEODESCRIPTION_MPEG4,
    videoInputFileName: INPUT_MPEG4,
    outputFormat: MP4,
    mediaType: ONLYVIDEO,
    writeType: VIDEO,
    videoFrameSize: [132],
}

export const RELIABILITY_1700 = {
    videoDescription: VIDEODESCRIPTION_H264,
    videoInputFileName: INPUT_H264,
    outputFormat: MP4,
    rotation: 60,
    mediaType: ONLYVIDEO,
    writeType: VIDEO,
    videoFrameSize: H264_FRAME_SIZE,
    videoFrameFlag: H264_FRAME_FLAG
}

export const RELIABILITY_1900 = {
    videoDescription: VIDEODESCRIPTION_H264,
    videoInputFileName: INPUT_H264,
    outputFormat: MP4,
    mediaType: ONLYVIDEO,
    writeType: VIDEO,
    location: { latitude: 50, longitude: -200 },
    videoFrameSize: H264_FRAME_SIZE,
    videoFrameFlag: H264_FRAME_FLAG
}

export const RELIABILITY_2000 = {
    videoDescription: VIDEODESCRIPTION_H264,
    videoInputFileName: INPUT_H264,
    outputFormat: MP4,
    mediaType: ONLYVIDEO,
    writeType: VIDEO,
    location: { latitude: 200, longitude: 45 },
    videoFrameSize: H264_FRAME_SIZE,
    videoFrameFlag: H264_FRAME_FLAG
}

export const RELIABILITY_2100 = {
    videoDescription: VIDEODESCRIPTION_H264,
    videoInputFileName: INPUT_H264,
    outputFormat: MP4,
    mediaType: ONLYVIDEO,
    writeType: VIDEO,
    location: { latitude: 100, longitude: -200 },
    videoFrameSize: H264_FRAME_SIZE,
    videoFrameFlag: H264_FRAME_FLAG
}

export const RELIABILITY_2600 = {
    audioDescription: AUDIODESCRIPTION_AAC_NONECODEC_MIME,
    audioInputFileName: INPUT_AAC,
    outputFormat: M4A,
    mediaType: ONLYAUDIO,
    writeType: AUDIO,
    audioFrameSize: AAC_FRAME_SIZE
}

export const RELIABILITY_2700 = {
    audioDescription: AUDIODESCRIPTION_AAC_NONESAMPLE_RATE,
    audioInputFileName: INPUT_AAC,
    outputFormat: M4A,
    mediaType: ONLYAUDIO,
    writeType: AUDIO,
    audioFrameSize: AAC_FRAME_SIZE
}

export const RELIABILITY_2800 = {
    audioDescription: AUDIODESCRIPTION_AAC_NONECHANNEL_COUNT,
    audioInputFileName: INPUT_AAC,
    outputFormat: M4A,
    mediaType: ONLYAUDIO,
    writeType: AUDIO,
    audioFrameSize: AAC_FRAME_SIZE
}

export const RELIABILITY_2900 = {
    videoDescription: VIDEODESCRIPTION_MPEG4_NONEWIDTH,
    videoInputFileName: INPUT_MPEG4,
    outputFormat: MP4,
    mediaType: ONLYVIDEO,
    writeType: VIDEO,
    videoFrameSize: MPEG4_FRAME_SIZE,
}

export const RELIABILITY_3000 = {
    videoDescription: VIDEODESCRIPTION_MPEG4_NONEHEIGHT,
    videoInputFileName: INPUT_MPEG4,
    outputFormat: MP4,
    mediaType: ONLYVIDEO,
    writeType: VIDEO,
    videoFrameSize: MPEG4_FRAME_SIZE,
}

export const RELIABILITY_3100 = {
    videoDescription: VIDEODESCRIPTION_MPEG4_NONEFRAME_RATE,
    videoInputFileName: INPUT_MPEG4,
    outputFormat: MP4,
    mediaType: ONLYVIDEO,
    writeType: VIDEO,
    videoFrameSize: MPEG4_FRAME_SIZE,
}

export const RELIABILITY_3200 = {
    videoDescription: VIDEODESCRIPTION_MPEG4_NONECODEC_MIME,
    videoInputFileName: INPUT_MPEG4,
    outputFormat: MP4,
    mediaType: ONLYVIDEO,
    writeType: VIDEO,
    videoFrameSize: MPEG4_FRAME_SIZE,
}

export const RELIABILITY_3300 = {
    audioDescription: AUDIODESCRIPTION_AAC_NONESAMPLE_RATE,
    videoDescription: VIDEODESCRIPTION_H264,
    audioInputFileName: INPUT_AAC,
    videoInputFileName: INPUT_H264,
    outputFormat: MP4,
    mediaType: AUDIO_AND_VIDEO,
    writeType: AUDIO_VIDEO,
    audioFrameSize: AAC_FRAME_SIZE,
    videoFrameSize: H264_FRAME_SIZE,
    videoFrameFlag: H264_FRAME_FLAG
}

export const RELIABILITY_3400 = {
    audioDescription: AUDIODESCRIPTION_MP3,
    videoDescription: VIDEODESCRIPTION_MPEG4_NONEFRAME_RATE,
    audioInputFileName: INPUT_MP3,
    videoInputFileName: INPUT_MPEG4,
    outputFormat: MP4,
    mediaType: AUDIO_AND_VIDEO,
    writeType: VIDEO_AUDIO_CROSSOVER,
    audioFrameSize: MP3_FRAME_SIZE,
    videoFrameSize: MPEG4_FRAME_SIZE
}

export const RELIABILITY_3500 = {
    videoDescription: VIDEODESCRIPTION_H264,
    videoInputFileName: INPUT_H264,
    outputFormat: MP4,
    mediaType: ONLYVIDEO,
    writeType: VIDEO,
    sampleInfoType: NONETIMEMS,
    videoFrameSize: H264_FRAME_SIZE,
    videoFrameFlag: H264_FRAME_FLAG,
}

export const RELIABILITY_3600 = {
    videoDescription: VIDEODESCRIPTION_H264,
    videoInputFileName: INPUT_H264,
    outputFormat: MP4,
    mediaType: ONLYVIDEO,
    writeType: VIDEO,
    sampleInfoType: NONEOFFSET,
    videoFrameSize: H264_FRAME_SIZE,
    videoFrameFlag: H264_FRAME_FLAG
}

export const RELIABILITY_3700 = {
    audioDescription: AUDIODESCRIPTION_AAC,
    audioInputFileName: INPUT_AAC,
    outputFormat: M4A,
    mediaType: ONLYAUDIO,
    writeType: AUDIO,
    sampleInfoType: NONEFLAGS,
    audioFrameSize: AAC_FRAME_SIZE
}

