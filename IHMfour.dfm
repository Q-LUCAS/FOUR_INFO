object Form1: TForm1
  Left = 0
  Top = 0
  Caption = 'Form1'
  ClientHeight = 243
  ClientWidth = 472
  Color = clBtnFace
  Font.Charset = DEFAULT_CHARSET
  Font.Color = clWindowText
  Font.Height = -11
  Font.Name = 'Tahoma'
  Font.Style = []
  OldCreateOrder = False
  PixelsPerInch = 96
  TextHeight = 13
  object Label1: TLabel
    Left = 15
    Top = 176
    Width = 129
    Height = 13
    Caption = 'Temperature en temp reel:'
  end
  object LblTemp: TLabel
    Left = 158
    Top = 176
    Width = 21
    Height = 13
  end
  object LblCommande: TLabel
    Left = 8
    Top = 39
    Width = 125
    Height = 13
    Caption = 'R'#233'gler Temp'#233'rature en %'
  end
  object LblCommandeTemp: TLabel
    Left = 8
    Top = 103
    Width = 192
    Height = 13
    Caption = 'Quelle temp'#233'rature d'#233'sirez-vous? en C'#176
  end
  object BtnTemp: TButton
    Left = 8
    Top = 58
    Width = 75
    Height = 25
    Caption = 'Changer'
    TabOrder = 0
    OnClick = BtnTempClick
  end
  object ListTemp: TComboBox
    Left = 139
    Top = 36
    Width = 40
    Height = 21
    TabOrder = 1
    Text = '0'
    Items.Strings = (
      '0'
      '25'
      '50'
      '75'
      '100')
  end
  object BtnInitisialisation: TButton
    Left = 8
    Top = 8
    Width = 101
    Height = 25
    Caption = 'Connecter la carte'
    TabOrder = 2
    OnClick = BtnInitisialisationClick
  end
  object EdtTemp: TEdit
    Left = 206
    Top = 100
    Width = 59
    Height = 21
    NumbersOnly = True
    TabOrder = 3
    Text = '65'
  end
  object BtnStart: TButton
    Left = 8
    Top = 122
    Width = 136
    Height = 25
    Caption = 'Lancer'
    TabOrder = 4
    OnClick = BtnStartClick
  end
  object BtnStop: TButton
    Left = 150
    Top = 122
    Width = 111
    Height = 25
    Caption = 'Arret'
    TabOrder = 5
  end
  object BtnArret: TButton
    Left = 89
    Top = 58
    Width = 88
    Height = 25
    Caption = 'Arr'#233'ter chauffe'
    TabOrder = 6
    OnClick = BtnArretClick
  end
  object Timer1: TTimer
    Enabled = False
    OnTimer = Timer1Timer
    Left = 384
    Top = 200
  end
  object Timer2: TTimer
    Enabled = False
    OnTimer = Timer2Timer
    Left = 432
    Top = 200
  end
end
