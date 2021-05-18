object Form1: TForm1
  Left = 880
  Top = 395
  Caption = 'N'#250'meros Crescente'
  ClientHeight = 235
  ClientWidth = 306
  Color = clBtnFace
  Font.Charset = DEFAULT_CHARSET
  Font.Color = clWindowText
  Font.Height = -11
  Font.Name = 'Tahoma'
  Font.Style = []
  OldCreateOrder = False
  Position = poDesigned
  PixelsPerInch = 96
  TextHeight = 13
  object ListBoxMostrar: TListBox
    Left = 8
    Top = 8
    Width = 169
    Height = 217
    ItemHeight = 13
    TabOrder = 0
  end
  object BtnMostrar: TBitBtn
    Left = 208
    Top = 8
    Width = 75
    Height = 25
    Caption = 'Mostrar'
    TabOrder = 1
    OnClick = BtnMostrarClick
  end
  object BtnSair: TButton
    Left = 208
    Top = 188
    Width = 75
    Height = 25
    Caption = 'Sair'
    TabOrder = 2
    OnClick = BtnSairClick
  end
end
