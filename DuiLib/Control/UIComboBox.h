#ifndef __UICOMBOBOX_H__
#define __UICOMBOBOX_H__

#pragma once

namespace DuiLib {
	/// ��չ�����б���
	/// ����arrowimage����,һ��ͼƬƽ���ֳ�5��,Normal/Hot/Pushed/Focused/Disabled(������source����)
	/// <Default name="ComboBox" value="arrowimage=&quot;file='sys_combo_btn.png' source='0,0,16,16'&quot; "/>
	class UILIB_API CComboBoxUI: public CComboUI {
		DECLARE_DUICONTROL (CComboBoxUI)
	public:
		CComboBoxUI ();
		string_view_t GetClass () const;

		void SetAttribute (string_view_t pstrName, string_view_t pstrValue);

		void PaintText (HDC hDC);
		void PaintStatusImage (HDC hDC);

	protected:
		CDuiString m_sArrowImage;
		int        m_nArrowWidth	= 0;
	};
}

#endif // __UICOMBOBOX_H__