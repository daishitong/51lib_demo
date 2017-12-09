# StepperMotor_Control
简介：步进电机控制，2相4线步进电机8拍，4根线为：A+、B+、A-、B-。先正转，然后反转，最后停止。  

>使用端口：`P2.4`、`P2.5`、`P2.6`、`P2.7`。  

参考时序如下：

节拍号 | 电流方向 | `P2.7`(`B-`) | `P2.6`(`A-`) | `P2.5`(`B+`) | `P2.4`(`A+`) | bin | hex  
----- | -------- |------ | ------ | ------- | ------ | --- | ---
1 | `A+` -> `A-` | 0 | 0 | 0 | 1 | b0001 | 0x1
2 | `A+` -> `A-`,`B+` -> `B-` | 0 | 0 | 1 | 1 | b0011 | 0x3
3 | `B+` -> `B-` | 0 | 0 | 1 | 0 | b0010 | 0x2
4 | `B+` -> `B-`,`A-` -> `A+` | 0 | 1 | 1 | 0 | b0110 | 0x6
5 | `A-` -> `A+` | 0 | 1 | 0 | 0 | b0100 | 0x4
6 | `A-` -> `A+`,`B-` -> `B+` | 1 | 1 | 0 | 0 | b1100 | 0xc
7 | `B-` -> `B+` | 1 | 0 | 0 | 0 | b1000 | 0x8
8 | `B-` -> `B+`,`A+` -> `A-` | 1 | 0 | 0 | 1 | b1001 | 0x9