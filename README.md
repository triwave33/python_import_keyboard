# python_import_keyboard

![python_import_keyboard](https://user-images.githubusercontent.com/36175603/74598633-fb164780-50b7-11ea-86f8-5582ee110118.gif)

Pythonのimport文を入力する（だけの）キーボード

- 必要なもの
  - ハードウェア
    - ぺらねこふぁくとりー 左手用マクロキーパッドキット『TONE』    
      - https://booth.pm/ja/items/1392390
      - 左手用となってますが、基板が2枚入っていて右用にもできます（今回は左手用で作っています）
  - ソフトウェア
    - qmk_firmware
      - キーマッププログラムのビルド
      - https://github.com/qmk/qmk_firmware
    - QMK TOOLBOX
      - 基板への書き込み用
      - https://github.com/qmk/qmk_toolbox
      
  - インストール、使用方法などはぺらねこふぁくとりーさんのgithub (https://github.com/peraneko/TONE)
  を参考にしました。（ありがとうございます）
  
  - 使用方法
  
  1. 上記リンクを参考にQMK TOOLBOXTONEへのキーマップファイル（.hex）を書き込みできるようにしておく
  2. TONEフォルダ以下にこのリポジトリのimport_libraryをコピーする
  3. 
  ```
  make tone:import_library
  ```
  
  git cloneしたqmk_firmwareの
  
  
  
      
      
