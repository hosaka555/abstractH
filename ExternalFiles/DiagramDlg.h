class CDiagramDlg  {
private:
    HICON m_hIcon;
    void SetPoint() ;
    void Draw(CGraphicBase grap) ;
protected:
    void DoDataExchange(CDataExchange pDX) ;
    BOOL OnInitDialog() ;
    void OnSysCommand(UINT nID, LPARAM lParam) ;
    void OnPaint() ;
    HCURSOR OnQueryDragIcon() ;
    void OnBnClickedLine() ;
    void OnBnClickedBezier() ;
    void OnBnClickedClear() ;
    void OnBnClickedSaveImg() ;
};