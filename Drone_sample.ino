#include<CoDrone.h>　//CoDroneのライブラリを読み込む
 
//一度だけ実行されるコマンドをsetup()に書く
 
void setup() {
 
CoDrone.begin(115200);　//USBシリアル接続にする
 
CoDrone.AutoConnect(NearbyDrone);　//近くにあるドローンに接続する
 
CoDrone.PrintDroneAddress();  //シリアルモニタに接続する
 
}
 
void loop() {
 
//複数回ドローンに動作させたいプログラムを書く
 
}
