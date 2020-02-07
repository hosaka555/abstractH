class CDiagramDlg
{
  private:
    int size;
    XYPoint m_firstPoint;
    HICON m_hIcon;
    void SetPoint();
    void Draw(CGraphicBase grap);

  public:
    int Print(int size);

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
};