# 3. Which of the following are invalid constants? Why?
| Constant      | isValid           | Why          |
| ------------- | ----------------- | ------------ |
|  123.456      | [x] Yes : []  No  |              |
|  0x10         | [x] Yes : []  No  |              |
|  0X0G1        | []  Yes : [x] No  | G != Hex     |
|  0001         | [x] Yes : []  No  |              |
|  0xFFFF       | [x] Yes : []  No  |              |
|  123L         | [x] Yes : []  No  |              |
|  0Xab05       | [x] Yes : []  No  |              |
|  0L           | [x] Yes : []  No  |              |
|  -597.25      | [x] Yes : []  No  |              |
|  +12          | [x] Yes : []  No  |              |
|  .0001        | []  Yes : [x] No  |  missing 0   |
|  98.6F        | [x] Yes : []  No  |              |
|  98.7U        | []  Yes : [x] No  |  should be u |
|  17777s       | []  Yes : [x] No  |              |
|  0996         | [x] Yes : []  No  |              |
|  -12E-12      | [x] Yes : []  No  |              |
|  07777        | [x] Yes : []  No  |              |
|  1234uL       | [x] Yes : []  No  |              |
|  1.2Fe-7      | []  Yes : [x] No  |  Fe ?        |
|  07777        | [x] Yes : []  No  |              |
|  1.234L       | [x] Yes : []  No  |              |
|  197u         | [x] Yes : [] No   |              |
|  100U         | [x] Yes : [] No   |              |
|  0XABCDEF     | [x] Yes : []  No  |              |
|  0xabcu       | []  Yes : [x] No  | u != hex     |
|  +123         | [x] Yes : []  No  |              |
| ------------- | ----------------- | ------------ |

