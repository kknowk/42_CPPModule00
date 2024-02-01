# プロジェクトタイトル

42_CPPModule00

## 概要

C++の最初の課題です。
オブジェクト指向プログラミングについて詳しく学びます。


## プロジェクトの目的

42Tokyoの課題であり、また、  
ex00/は引数を大文字に変えます。  
ex02/は電話帳を実装します。
C++での標準入出力の制御を学習します。

## チャレンジした点

ex01にてプログラム実行中にコントロールD（EOF）をすると無限ループしてしまいました。  
なので

```php
if (std::cin.eof())
  break ;
```

とEOFを検知しなければならないことを知りました。
また、二つのクラスにまたがった実装をしました。


## 学んだこと
標準入出力の制御の仕方。  
classによるオブジェクト志向の考え方。  
また、privateとpublicの使い方を学びました。


## 使用方法

> - **ex00**
> ```bash php
> #!/bin/bash
> 42_CPPModule00
> cd ex00
> make
> ./megaphone "任意のアルファベット文字列"
> 大文字のアルファベット文字列 （出力）
> ./megaphone
> * LOUD AND UNBEARABLE FEEDBACK NOISE * （エラー出力）
> ```

> - **ex01**
> ```bash php
> #!/bin/bash
> cd ../ex01
> make
> ./phonebook
> Enter command (ADD, SEARCH, EXIT):  (以下プログラムが始まります。)

## ex01の例

**ADDの例**  
新しい連絡先を保存します。　
```text
first name, last name, nickname, phone number, and darkest secret
```
の項目の入力を求められるので、入力してください。
phone numberは10桁のみ有効です。

> - **ADDのコード例**
> ```bash php  
> Enter command (ADD, SEARCH, EXIT): ADD (ADDを入力)
> First Name: hello (helloを入力)
> Last Name: kity (kityを入力)
> Nickname: kity (kityを入力)
> Phone Number: 0123456789 (0123456789を入力)
> Darkest Secret: zituhainu (zituhainuを入力)
> Enter command (ADD, SEARCH, EXIT): SEARCH (SEARCHを入力)
>         0|     hello|      kity|      kity
> Enter index to display full contact details: 0 (0を入力)
> First Name: hello 
> Last Name: kity
> Nickname: kity
> Phone Number: 0123456789
> Darkest Secret: zituhainu
> ```

**SEARCHの例**  
ADDで追加した連絡先のリストを見れます。  
最大8件まで保存可能で、Maxの状態で新しい連絡先を入れるともっとも古い連絡先を上書きします。
SEARCHのコード例はADDを参照してください。


**終わる方法**  
コントロールCかDを実行、または『EXIT』と入力するとループから抜けられます。

## 技術スタック

C++言語
