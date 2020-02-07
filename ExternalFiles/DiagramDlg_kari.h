
class CDiagramDlg : public CDialogEx
{

protected:
     void DoDataExchange(CDataExchange pDX);	
     BOOL OnInitDialog();
     void OnSysCommand(UINT nID, LPARAM lParam);
     void OnPaint();
     HCURSOR OnQueryDragIcon();
     void OnBnClickedLine();
     void OnBnClickedBezier();
     void OnBnClickedClear();
     void OnBnClickedSaveImg();

private:
    void SetPoint();
    void Draw(CGraphicBase grap);

private:
    HICON m_hIcon;
    XYPoint m_firstPoint;  
    XYPoint m_secondPoint;  
    XYPoint m_thirdPoint;   
    XYPoint m_fourthPoint;  
};
