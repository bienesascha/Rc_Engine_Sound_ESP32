const unsigned int sampleRate = 22050;
const unsigned int sampleCount = 3387;
const signed char samples[] = {//0
0, 0, 0, -1, -2, -3, -3, -3, -2, -4, -6, -4, 0, 4, 5, 5, //16
6, 4, 2, 1, 1, 1, 4, 5, -3, -7, -7, -6, -2, 6, 10, 12, //32
8, 5, 6, 5, 8, 10, 8, 11, 22, 22, 19, 17, 14, 9, 7, 10, //48
15, 22, 30, 32, 33, 30, 23, 15, 4, -2, -9, -14, -13, -11, -11, 3, //64
16, 24, 31, 36, 39, 33, 26, 24, 23, 22, 19, 13, 7, 9, 13, 14, //80
8, 2, 0, -1, 3, 13, 19, 27, 33, 35, 34, 28, 26, 27, 29, 27, //96
20, 16, 20, 26, 32, 37, 40, 37, 37, 39, 40, 41, 44, 46, 45, 42, //112
40, 38, 41, 42, 37, 30, 27, 22, 23, 21, 23, 27, 30, 33, 31, 29, //128
27, 30, 34, 34, 29, 18, 9, 6, 9, 12, 15, 15, 14, 18, 24, 26, //144
29, 30, 28, 19, 17, 18, 18, 19, 19, 16, 14, 15, 16, 14, 11, 7, //160
8, 13, 17, 20, 20, 19, 20, 23, 27, 32, 41, 47, 53, 59, 65, 67, //176
67, 66, 64, 60, 56, 47, 47, 50, 52, 55, 59, 59, 58, 53, 47, 45, //192
47, 56, 62, 67, 66, 60, 51, 48, 47, 45, 42, 39, 39, 46, 57, 66, //208
73, 77, 77, 70, 62, 56, 53, 46, 39, 30, 25, 23, 26, 36, 40, 40, //224
38, 36, 37, 44, 46, 46, 45, 42, 38, 35, 32, 30, 29, 28, 26, 19, //240
8, 1, 0, 4, 9, 10, 8, 3, 1, 2, 6, 10, 9, 9, 5, -7, //256
-9, -6, -1, 2, 3, -3, -9, -14, -16, -13, -8, -7, -6, -6, -10, -13, //272
-18, -24, -31, -35, -36, -37, -42, -43, -42, -39, -36, -29, -26, -28, -32, -31, //288
-27, -16, -7, -1, 2, 4, 7, 9, 9, 8, 5, 2, -3, -8, -11, -13, //304
-14, -13, -17, -23, -29, -35, -39, -46, -54, -66, -77, -83, -86, -88, -87, -87, //320
-85, -82, -82, -87, -90, -95, -100, -106, -114, -114, -109, -100, -94, -88, -86, -87, //336
-86, -87, -91, -96, -99, -102, -103, -100, -96, -85, -80, -77, -77, -76, -69, -58, //352
-49, -41, -33, -27, -23, -11, -7, -2, 1, 1, -10, -15, -15, -14, -12, -13, //368
-21, -28, -32, -30, -27, -21, -11, -10, -11, -11, -5, -4, 0, 10, 16, 17, //384
13, 18, 23, 27, 33, 34, 31, 28, 32, 38, 47, 56, 67, 69, 70, 73, //400
71, 70, 68, 65, 60, 46, 39, 39, 45, 47, 45, 41, 35, 39, 47, 52, //416
56, 59, 64, 72, 68, 64, 59, 48, 36, 22, 14, 9, 12, 19, 23, 24, //432
24, 25, 26, 26, 34, 36, 34, 27, 18, 19, 16, 11, 8, 0, -10, -20, //448
-19, -18, -18, -17, -17, -16, -10, -3, 3, 7, 7, 4, -1, -12, -26, -32, //464
-25, -23, -28, -38, -45, -39, -19, -11, -3, 0, -4, -11, -17, -27, -35, -33, //480
-29, -29, -35, -39, -39, -37, -34, -40, -52, -62, -63, -57, -46, -38, -33, -32, //496
-29, -27, -25, -28, -34, -41, -50, -57, -59, -55, -55, -55, -51, -49, -48, -46, //512
-46, -49, -52, -55, -57, -56, -54, -54, -56, -59, -61, -67, -71, -71, -72, -74, //528
-76, -78, -76, -70, -64, -61, -59, -57, -52, -47, -52, -58, -62, -64, -63, -64, //544
-70, -77, -77, -70, -64, -57, -55, -53, -51, -51, -51, -48, -40, -35, -32, -34, //560
-46, -51, -56, -59, -56, -55, -58, -57, -50, -40, -30, -21, -14, -15, -19, -24, //576
-31, -40, -36, -29, -25, -22, -21, -21, -16, -12, -7, -5, 2, 8, 11, 17, //592
22, 21, 19, 14, 8, 4, 4, 10, 22, 25, 31, 39, 41, 47, 51, 49, //608
43, 35, 29, 19, 14, 13, 15, 18, 22, 27, 28, 33, 40, 44, 45, 44, //624
42, 38, 37, 36, 37, 33, 29, 29, 26, 27, 31, 37, 44, 48, 51, 55, //640
56, 57, 56, 51, 44, 35, 33, 36, 41, 46, 50, 52, 54, 57, 62, 70, //656
73, 69, 64, 55, 48, 46, 46, 49, 49, 50, 51, 55, 68, 74, 78, 76, //672
69, 57, 49, 44, 45, 49, 54, 58, 59, 61, 62, 61, 60, 59, 57, 56, //688
55, 55, 66, 71, 73, 73, 69, 66, 62, 59, 57, 55, 55, 55, 54, 52, //704
50, 49, 53, 56, 57, 56, 57, 59, 58, 57, 54, 47, 41, 38, 38, 38, //720
38, 37, 35, 34, 34, 33, 31, 29, 27, 26, 29, 34, 39, 42, 44, 43, //736
41, 38, 37, 37, 36, 35, 33, 33, 34, 36, 39, 40, 39, 35, 26, 21, //752
15, 14, 13, 13, 12, 12, 16, 19, 21, 22, 24, 23, 19, 15, 11, 12, //768
15, 15, 14, 11, 10, 8, 5, 0, -5, -6, -7, -8, -9, -12, -10, -10, //784
-10, -11, -16, -20, -20, -16, -8, 1, 14, 18, 18, 17, 16, 17, 13, 6, //800
0, -8, -16, -23, -27, -28, -28, -26, -24, -26, -25, -24, -22, -18, -13, -9, //816
-11, -17, -22, -24, -23, -18, -14, -16, -23, -33, -41, -41, -37, -28, -23, -21, //832
-19, -18, -17, -18, -20, -25, -30, -35, -40, -44, -48, -45, -42, -41, -40, -37, //848
-36, -40, -47, -53, -58, -63, -64, -62, -62, -67, -74, -80, -92, -97, -99, -100, //864
-103, -107, -101, -90, -81, -76, -73, -73, -71, -67, -60, -52, -48, -44, -42, -41, //880
-41, -42, -42, -43, -45, -46, -44, -38, -32, -32, -33, -37, -42, -45, -47, -51, //896
-59, -68, -76, -81, -76, -68, -61, -53, -48, -45, -48, -49, -51, -56, -60, -65, //912
-64, -60, -57, -48, -30, -23, -22, -25, -34, -46, -52, -49, -47, -44, -41, -38, //928
-28, -18, -6, 4, 11, 19, 19, 20, 24, 29, 34, 30, 25, 15, 9, 13, //944
21, 29, 31, 34, 38, 44, 61, 72, 75, 73, 71, 65, 54, 51, 51, 51, //960
48, 47, 51, 60, 71, 77, 81, 77, 72, 66, 59, 48, 36, 26, 17, 12, //976
9, 10, 17, 29, 39, 47, 54, 62, 68, 74, 78, 77, 74, 66, 45, 27, //992
18, 15, 15, 21, 29, 29, 30, 33, 35, 36, 36, 35, 31, 25, 18, 9, //1008
4, -3, -5, -9, -20, -23, -13, -2, 4, 7, 6, 4, 9, 12, 9, -3, //1024
-29, -47, -61, -66, -64, -52, -44, -41, -36, -33, -30, -27, -27, -29, -35, -41, //1040
-45, -48, -43, -35, -33, -33, -29, -24, -22, -17, -15, -15, -12, -9, -9, -9, //1056
-7, -3, 4, 9, 8, 8, 5, -2, -1, -3, -7, -9, -9, -10, -13, -11, //1072
-7, -5, -5, -9, -10, -11, -14, -15, -24, -29, -32, -35, -34, -33, -33, -29, //1088
-25, -21, -24, -29, -35, -35, -34, -34, -33, -33, -33, -33, -35, -36, -43, -55, //1104
-58, -62, -63, -63, -60, -52, -49, -46, -48, -51, -57, -59, -63, -70, -72, -75, //1120
-74, -71, -70, -66, -61, -55, -56, -63, -66, -64, -62, -60, -60, -63, -63, -60, //1136
-56, -49, -45, -43, -41, -34, -24, -11, -8, -11, -13, -15, -25, -29, -34, -33, //1152
-33, -33, -24, -20, -14, -11, -8, -2, 9, 13, 15, 15, 16, 15, 12, 10, //1168
7, 2, 7, 14, 17, 25, 35, 45, 56, 60, 62, 66, 68, 65, 55, 44, //1184
35, 32, 30, 29, 31, 32, 35, 42, 50, 59, 65, 70, 73, 75, 72, 56, //1200
47, 42, 38, 36, 33, 25, 26, 31, 38, 44, 45, 46, 45, 43, 40, 38, //1216
32, 27, 24, 24, 25, 27, 30, 33, 36, 39, 42, 40, 37, 35, 33, 32, //1232
30, 30, 32, 33, 31, 30, 30, 28, 26, 28, 34, 38, 41, 42, 43, 43, //1248
43, 46, 49, 46, 44, 42, 39, 37, 41, 47, 53, 57, 60, 66, 70, 71, //1264
71, 70, 67, 59, 55, 52, 51, 53, 55, 61, 65, 67, 68, 69, 69, 70, //1280
73, 79, 82, 81, 73, 68, 67, 69, 70, 67, 64, 64, 63, 61, 57, 53, //1296
53, 52, 51, 47, 42, 39, 40, 40, 39, 36, 32, 29, 29, 34, 40, 42, //1312
39, 40, 40, 39, 40, 41, 40, 40, 39, 37, 30, 19, 12, 4, -2, -7, //1328
-12, -14, -10, -8, -6, -3, -3, -4, -4, -1, 3, 5, 3, 1, -1, -4, //1344
-6, -4, -2, -2, -1, 0, 2, 5, 10, 10, 9, 4, -5, -8, -9, -8, //1360
-7, -9, -11, -13, -11, -10, -11, -13, -15, -17, -17, -13, -10, -9, -7, -9, //1376
-11, -13, -13, -12, -9, -8, -11, -15, -22, -29, -35, -36, -35, -34, -32, -27, //1392
-26, -24, -23, -23, -22, -25, -27, -31, -37, -40, -39, -36, -34, -34, -39, -46, //1408
-58, -68, -77, -85, -91, -95, -93, -90, -88, -85, -85, -86, -89, -90, -90, -90, //1424
-92, -93, -90, -87, -86, -85, -83, -85, -87, -88, -90, -89, -90, -93, -95, -95, //1440
-93, -87, -81, -83, -84, -81, -77, -72, -65, -61, -61, -62, -65, -66, -66, -65, //1456
-64, -65, -65, -61, -57, -57, -58, -59, -57, -53, -49, -43, -38, -33, -27, -25, //1472
-23, -23, -23, -21, -19, -20, -20, -20, -16, -7, 7, 10, 11, 11, 11, 7, //1488
2, -4, -5, -6, -10, -15, -16, -14, -9, -4, 4, 17, 24, 28, 30, 33, //1504
39, 40, 37, 30, 23, 22, 22, 21, 21, 21, 23, 29, 40, 46, 50, 49, //1520
46, 45, 42, 39, 39, 40, 45, 47, 46, 47, 47, 48, 47, 41, 37, 34, //1536
40, 46, 53, 55, 54, 55, 56, 54, 49, 46, 44, 43, 40, 37, 28, 26, //1552
25, 27, 30, 29, 31, 38, 46, 53, 59, 62, 58, 58, 59, 59, 61, 56, //1568
51, 44, 35, 32, 31, 31, 32, 36, 39, 46, 58, 61, 61, 57, 51, 45, //1584
35, 26, 15, 9, 8, 8, 5, 0, -4, -5, -3, 1, 2, -2, -5, -5, //1600
-3, -4, -8, -10, -11, -15, -23, -28, -33, -34, -33, -33, -34, -31, -27, -22, //1616
-19, -26, -31, -31, -25, -21, -21, -27, -33, -34, -33, -31, -28, -21, -17, -15, //1632
-16, -18, -23, -29, -30, -32, -34, -31, -29, -23, -21, -19, -17, -20, -23, -23, //1648
-21, -20, -23, -30, -37, -41, -46, -49, -48, -43, -44, -46, -44, -40, -37, -34, //1664
-33, -34, -40, -47, -58, -64, -66, -67, -68, -74, -75, -71, -63, -54, -49, -48, //1680
-50, -48, -49, -51, -49, -45, -46, -46, -46, -50, -52, -50, -47, -44, -40, -37, //1696
-32, -25, -21, -17, -16, -20, -26, -26, -23, -20, -18, -16, -15, -15, -19, -20, //1712
-17, -16, -12, -9, -8, -6, -6, -7, -4, 0, 6, 10, 12, 14, 12, 11, //1728
11, 7, 2, -7, -10, -9, -6, -3, 1, 4, 10, 16, 20, 23, 30, 34, //1744
36, 40, 44, 46, 45, 44, 44, 43, 40, 34, 32, 30, 28, 25, 23, 28, //1760
31, 32, 35, 37, 38, 38, 38, 35, 32, 32, 31, 27, 19, 16, 16, 16, //1776
19, 21, 21, 22, 23, 30, 33, 35, 38, 37, 34, 27, 25, 26, 28, 27, //1792
23, 18, 16, 15, 12, 11, 15, 18, 21, 22, 22, 23, 31, 35, 38, 40, //1808
38, 36, 32, 31, 31, 30, 27, 24, 24, 24, 24, 27, 30, 35, 40, 47, //1824
54, 61, 66, 66, 63, 57, 55, 54, 50, 48, 49, 54, 60, 65, 61, 59, //1840
59, 59, 58, 56, 58, 62, 69, 71, 71, 69, 63, 56, 51, 44, 38, 30, //1856
29, 28, 29, 35, 41, 46, 42, 35, 32, 32, 36, 37, 36, 31, 27, 25, //1872
23, 24, 24, 21, 20, 21, 25, 29, 34, 39, 43, 38, 33, 33, 35, 37, //1888
36, 29, 19, 12, 11, 13, 12, 10, 8, 8, 9, 9, 12, 15, 18, 22, //1904
23, 20, 14, 11, 10, 7, 1, -7, -9, -9, -7, -2, 6, 10, 12, 15, //1920
21, 30, 36, 40, 35, 28, 19, 12, 12, 9, 6, 0, -7, -12, -13, -11, //1936
-11, -10, -6, -4, 3, 7, 7, 6, 3, -3, -5, -4, 0, 3, -1, -8, //1952
-11, -14, -13, -9, -4, -1, -3, -6, -11, -17, -30, -39, -47, -54, -61, -66, //1968
-74, -76, -76, -76, -73, -72, -73, -72, -70, -70, -72, -70, -65, -61, -61, -59, //1984
-57, -61, -64, -68, -72, -77, -80, -79, -80, -84, -86, -85, -80, -76, -72, -69, //2000
-70, -70, -69, -67, -66, -61, -54, -49, -43, -42, -44, -47, -53, -63, -72, -81, //2016
-86, -87, -83, -83, -83, -83, -82, -78, -69, -58, -55, -55, -59, -62, -72, -76, //2032
-76, -75, -77, -81, -83, -82, -77, -70, -68, -69, -73, -73, -70, -61, -48, -28, //2048
-24, -21, -16, -13, -8, 5, 11, 14, 11, 8, 14, 20, 30, 31, 25, 17, //2064
6, 8, 13, 13, 11, 7, 8, 11, 16, 22, 30, 40, 40, 36, 33, 31, //2080
29, 32, 30, 29, 31, 38, 47, 57, 63, 68, 75, 85, 103, 111, 109, 94, //2096
79, 68, 52, 48, 45, 42, 47, 55, 67, 77, 83, 89, 97, 103, 103, 105, //2112
107, 104, 100, 90, 76, 62, 54, 52, 46, 46, 47, 44, 46, 42, 34, 36, //2128
34, 39, 44, 42, 41, 38, 31, 25, 25, 28, 19, 15, 5, -7, -10, -6, //2144
1, 8, 8, 10, 11, 7, 5, -1, -7, -9, -12, -22, -25, -30, -34, -30, //2160
-24, -15, -12, -6, 4, 10, 19, 17, 15, 8, -2, -10, -32, -46, -57, -61, //2176
-59, -53, -46, -39, -34, -30, -25, -17, -13, -11, -10, -9, -11, -21, -28, -34, //2192
-39, -40, -39, -33, -25, -19, -7, 5, 10, 7, 1, -3, -8, -17, -25, -27, //2208
-25, -28, -27, -26, -20, -15, -11, -9, -11, -20, -27, -29, -30, -35, -39, -37, //2224
-37, -36, -35, -30, -21, -18, -21, -26, -32, -39, -44, -46, -53, -55, -53, -47, //2240
-48, -51, -52, -52, -48, -48, -49, -48, -48, -46, -41, -36, -32, -31, -36, -42, //2256
-54, -59, -62, -62, -57, -53, -54, -53, -49, -47, -47, -47, -49, -51, -54, -55, //2272
-55, -52, -53, -56, -56, -58, -59, -51, -45, -38, -35, -32, -30, -29, -30, -31, //2288
-33, -35, -37, -39, -40, -36, -28, -20, -9, -6, -1, 4, 8, 13, 17, 16, //2304
17, 17, 15, 12, 11, 13, 19, 21, 18, 17, 18, 22, 25, 28, 32, 39, //2320
42, 44, 40, 34, 30, 25, 23, 26, 27, 29, 27, 27, 28, 30, 33, 35, //2336
35, 34, 35, 36, 37, 37, 36, 37, 39, 38, 38, 42, 47, 52, 55, 55, //2352
59, 62, 61, 57, 52, 47, 42, 41, 39, 37, 39, 41, 40, 35, 30, 25, //2368
24, 20, 14, 11, 9, 11, 15, 18, 16, 14, 13, 12, 10, 8, 8, 12, //2384
17, 19, 24, 32, 40, 43, 42, 39, 36, 36, 37, 39, 41, 44, 46, 44, //2400
42, 38, 34, 41, 51, 58, 62, 64, 67, 68, 65, 63, 63, 63, 60, 50, //2416
45, 42, 43, 49, 52, 53, 53, 54, 56, 56, 58, 57, 57, 58, 57, 54, //2432
49, 44, 36, 26, 21, 23, 26, 29, 34, 41, 49, 56, 55, 54, 53, 49, //2448
47, 46, 45, 43, 40, 38, 36, 38, 37, 34, 31, 29, 28, 25, 21, 23, //2464
26, 27, 32, 31, 28, 25, 20, 15, 12, 13, 16, 19, 23, 24, 23, 23, //2480
23, 19, 15, 8, 4, 1, -2, -1, 5, 5, 3, 2, 0, 1, 4, 1, //2496
-2, 0, 3, 3, 4, 3, 3, 3, 4, 4, 1, 0, -2, -8, -14, -22, //2512
-29, -34, -37, -36, -28, -25, -26, -29, -31, -33, -32, -31, -34, -38, -36, -33, //2528
-26, -22, -20, -18, -17, -14, -11, -10, -12, -16, -21, -34, -45, -53, -60, -67, //2544
-72, -80, -83, -86, -87, -86, -85, -87, -89, -93, -99, -102, -102, -105, -108, -114, //2560
-120, -123, -125, -122, -122, -124, -123, -124, -125, -126, -127, -125, -122, -122, -125, -125, //2576
-121, -117, -113, -104, -96, -85, -73, -62, -45, -38, -35, -31, -32, -37, -45, -51, //2592
-54, -54, -52, -53, -52, -50, -43, -37, -31, -20, -17, -16, -15, -11, -9, -12, //2608
-13, -14, -19, -21, -18, -10, -11, -12, -10, -8, -8, -7, -2, -1, -4, -6, //2624
-7, -8, -13, -15, -20, -26, -19, -5, 14, 33, 45, 43, 34, 30, 33, 39, //2640
46, 54, 58, 65, 72, 78, 79, 74, 70, 64, 56, 45, 43, 52, 62, 69, //2656
71, 68, 67, 74, 80, 82, 81, 74, 76, 85, 93, 101, 104, 86, 67, 49, //2672
37, 34, 39, 51, 63, 72, 72, 74, 78, 75, 67, 50, 39, 31, 23, 28, //2688
38, 51, 55, 48, 43, 50, 60, 68, 74, 69, 66, 70, 68, 58, 48, 31, //2704
28, 31, 26, 21, 27, 40, 48, 55, 53, 53, 62, 67, 64, 55, 40, 27, //2720
14, 8, 3, -3, -7, -6, -7, -10, -13, -19, -25, -26, -29, -36, -41, -38, //2736
-37, -45, -48, -51, -53, -58, -61, -60, -61, -54, -52, -57, -59, -50, -35, -27, //2752
-26, -32, -38, -36, -31, -28, -33, -40, -46, -48, -51, -54, -57, -59, -56, -48, //2768
-44, -48, -50, -44, -43, -47, -53, -54, -51, -46, -42, -42, -45, -42, -27, -21, //2784
-25, -30, -34, -32, -28, -30, -34, -40, -41, -37, -37, -37, -33, -30, -30, -33, //2800
-33, -31, -31, -33, -33, -40, -42, -39, -37, -39, -38, -36, -37, -40, -47, -54, //2816
-53, -54, -53, -52, -54, -59, -71, -71, -66, -61, -59, -58, -50, -47, -44, -40, //2832
-42, -47, -52, -57, -61, -64, -64, -52, -48, -45, -45, -49, -44, -43, -45, -47, //2848
-46, -45, -44, -40, -40, -42, -39, -35, -33, -28, -19, -14, -14, -10, -7, -4, //2864
-6, -8, -9, -8, -1, 3, 3, 2, 4, 13, 12, 11, 10, 9, 8, 7, //2880
12, 20, 28, 39, 47, 46, 42, 40, 39, 39, 32, 25, 23, 25, 29, 36, //2896
38, 41, 41, 41, 39, 38, 42, 42, 42, 41, 41, 44, 52, 55, 51, 47, //2912
38, 35, 33, 32, 33, 34, 33, 34, 34, 33, 31, 31, 26, 20, 15, 13, //2928
9, 1, -2, -2, 1, 1, 5, 16, 23, 29, 30, 25, 20, 20, 21, 24, //2944
24, 23, 26, 28, 30, 31, 34, 36, 39, 41, 41, 46, 51, 55, 57, 57, //2960
54, 50, 51, 50, 52, 54, 60, 66, 68, 74, 76, 80, 81, 77, 72, 66, //2976
64, 64, 65, 70, 76, 76, 72, 68, 64, 57, 49, 46, 46, 45, 44, 50, //2992
55, 63, 69, 72, 74, 67, 62, 57, 54, 55, 55, 58, 59, 59, 57, 51, //3008
43, 38, 33, 31, 30, 28, 24, 21, 19, 20, 22, 22, 26, 28, 29, 28, //3024
25, 25, 26, 27, 24, 19, 13, 9, 10, 11, 10, 9, 11, 20, 25, 29, //3040
29, 28, 26, 24, 18, 13, 12, 14, 14, 13, 12, 9, 8, 12, 17, 19, //3056
24, 28, 33, 34, 31, 31, 33, 32, 28, 16, 8, 3, 2, 0, -3, 1, //3072
7, 13, 16, 18, 25, 34, 44, 50, 50, 46, 34, 23, 11, 0, -6, -6, //3088
-3, 1, 1, -2, -2, 1, -1, -7, -12, -18, -22, -24, -25, -25, -28, -37, //3104
-52, -61, -67, -72, -79, -83, -87, -88, -85, -81, -79, -80, -88, -96, -105, -113, //3120
-118, -119, -116, -107, -98, -95, -95, -101, -109, -117, -120, -121, -119, -109, -101, -96, //3136
-97, -96, -90, -87, -84, -83, -86, -89, -93, -96, -97, -98, -100, -100, -102, -100, //3152
-95, -88, -79, -60, -50, -42, -33, -23, -19, -20, -22, -26, -30, -33, -32, -24, //3168
-18, -9, -2, -3, -5, -7, -5, 1, 6, 10, 17, 21, 25, 22, 10, -4, //3184
-17, -18, -15, -10, -1, 24, 40, 53, 55, 50, 43, 32, 24, 14, 9, 14, //3200
20, 36, 37, 30, 25, 16, 9, 5, -1, 7, 27, 40, 49, 49, 45, 42, //3216
44, 44, 33, 38, 40, 42, 49, 38, 34, 36, 42, 51, 61, 66, 69, 72, //3232
65, 59, 44, 37, 28, 12, -1, -3, 22, 33, 42, 53, 61, 67, 66, 59, //3248
41, 28, 23, 27, 28, 29, 30, 31, 31, -3, -27, -45, -53, -49, -44, -24, //3264
-3, 19, 32, 44, 48, 39, 31, 11, -6, -21, -54, -68, -76, -74, -65, -51, //3280
-40, -27, -9, -4, 5, 6, 2, -5, -13, -14, -18, -21, -28, -37, -45, -49, //3296
-43, -39, -33, -30, -25, -14, -5, -6, -11, -16, -13, -3, -8, -13, -10, -8, //3312
-2, 3, -17, -31, -35, -41, -44, -39, -45, -45, -38, -28, -19, -26, -33, -30, //3328
-26, -32, -40, -41, -39, -35, -37, -43, -57, -60, -59, -58, -58, -58, -54, -54, //3344
-56, -57, -55, -54, -51, -49, -51, -51, -43, -33, -33, -39, -50, -62, -69, -65, //3360
-67, -63, -50, -37, -26, -20, -19, -21, -24, -25, -26, -28, -27, -22, -19, -15, //3376
-9, -8, -4, -1, 0, -1, -2, -3, -2, -1, 0, };