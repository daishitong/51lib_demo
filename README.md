# 51lib_demo
[51公用代码库示例](https://github.com/daishitong/51lib_demo)
>通过51公用代码库示例，了解51公用代码库的使用方法。  
开发环境：Keil uVision5。

序号 | 工程名 | 简介 | 端口
--- | ------ | ---- | ---
00|EmptyDemo|一个空白可编译的工程示例|-
01|Led_Blink|Led闪烁，频率1Hz|P2.0
02|Key_Control_Led|按键切换Led闪烁频率。按键单击，Led慢闪烁；按键双击，Led快速闪烁。Led闪烁时，再单击按键，闪烁停止。|P2.0,P2.1
03|Passive_Buzzer|无源蜂鸣器，演奏"两只老虎"|P2.2
04|Serial|通过串口传输数据，并返回两个数据乘法计算结果。掌握串口字符串的格式化及使用。|P3.0/RXD,P3.1/TXD
05|Serial_Led|串口控制Led亮或灭|P3.0/RXD,P3.1/TXD,P2.0
06|Ultrasound_Led|超声波模块获取障碍物距离，然后根据阈值控制Led亮或灭|P2.3,P2.4,P2.0
07|Ultrasound_Serial|超声波模块获取障碍物距离，然后通过串口返回数据|P2.3,P2.4,P3.0/RXD,P3.1/TXD
08|Servo_Control|舵机控制。通过1个IO口控制舵机进行连续往复运动，并在经过`1000us`、`1500us`、`2000us`位置停留片刻。|P2.7
09|DCMoto_Control|直流电机控制。先正转从小到大，再反转从小到大|P2.6,P2.7
10|StepperMotor_Control|步进电机控制。先正转，然后反转，最后停止|P2.4,P2.5,P2.6,P2.7

## Change Log
### v1.0.0 2017/12/9
1. 添加[51demo](https://github.com/daishitong/51demo)的10个例程。
