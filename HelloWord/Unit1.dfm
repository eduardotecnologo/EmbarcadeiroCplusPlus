object FrmMensagem: TFrmMensagem
  Left = 0
  Top = 0
  Caption = 'HelloWord'
  ClientHeight = 163
  ClientWidth = 332
  Color = clBtnFace
  Font.Charset = DEFAULT_CHARSET
  Font.Color = clWindowText
  Font.Height = -11
  Font.Name = 'Tahoma'
  Font.Style = []
  OldCreateOrder = False
  PixelsPerInch = 96
  TextHeight = 13
  object EditMensagem: TEdit
    Left = 56
    Top = 32
    Width = 203
    Height = 25
    TabOrder = 0
  end
  object Btn_Enviar: TButton
    Left = 56
    Top = 72
    Width = 75
    Height = 25
    Caption = 'Enviar'
    TabOrder = 1
    OnClick = Btn_EnviarClick
  end
  object BtnCancel: TButton
    Left = 184
    Top = 72
    Width = 75
    Height = 25
    Caption = '?'
    TabOrder = 2
    OnClick = BtnCancelClick
  end
  object BtnFechar: TButton
    Left = 120
    Top = 120
    Width = 75
    Height = 25
    Caption = 'Fechar'
    TabOrder = 3
    OnClick = BtnFecharClick
  end
end
