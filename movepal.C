void movepal()
{
   TCanvas *myCanvas = new TCanvas("myCanvas", "myCanvas",5,44,550,550);
   gStyle->SetOptFit(1);
   gStyle->SetOptStat(0);
   myCanvas->Range(-0.8247861,-0.8247861,0.8247861,0.8247861);
   myCanvas->SetFillColor(10);
   myCanvas->SetBorderMode(0);
   myCanvas->SetBorderSize(0);
   myCanvas->SetTickx();
   myCanvas->SetTicky();
   myCanvas->SetLeftMargin(0.15);
   myCanvas->SetRightMargin(0.15);
   myCanvas->SetTopMargin(0.15);
   myCanvas->SetBottomMargin(0.15);
   myCanvas->SetFrameFillColor(0);
   myCanvas->SetFrameBorderMode(0);
   
   TH1 *h_myHisto = new TH2D("h_myHisto","",61,-0.0000107,0.0000107,61,-0.00085,0.00085);
   
   int binx(1), biny(1);
   for(int i = -30; i <=30; i++){
     biny=1;
     for(int j = -30; j <=30; j++){
       double x = double(i)/10.;
       double y = double(j)/10.;
       h_myHisto->SetBinContent(binx,biny,(x*x + y*y ));
       biny++;
     }
     binx++;
   }
   //Set up the colours I wish to use:
   const Int_t ncol = 9;
   Int_t colors[ncol];
   TColor *col;
   Double_t dg=1.0/(1.0*(Double_t)ncol);
   Double_t grey=0;
   for (Int_t i=0; i<ncol; i++) {
     colors[i]= i+101;
     if (gROOT->GetColor(colors[i])) {
       gROOT->GetColor(colors[i])->SetRGB(grey, grey, grey);
     } else {
       TColor *c = new TColor(colors[i], grey, grey, grey);
     }
     grey = grey+dg;
   }
   
   h_myHisto->SetContour(ncol);
   gStyle->SetPalette(ncol,colors);
   gStyle->SetOptStat(0);
   h_myHisto->SetMaximum(9);   
   
   h_myHisto->GetXaxis()->SetTitle("X axis \\sigma_{X}");
   h_myHisto->GetXaxis()->SetNdivisions(-6);
   h_myHisto->GetXaxis()->SetLabelOffset(0.015);
   h_myHisto->GetXaxis()->SetLabelSize(0.035);
   h_myHisto->GetXaxis()->SetTitleSize(0.035);
   h_myHisto->GetXaxis()->SetTitleOffset(1.2);
   h_myHisto->GetYaxis()->SetTitle("Y axis \\sigma_{Y}");
   h_myHisto->GetYaxis()->SetNdivisions(-6);
   h_myHisto->GetYaxis()->SetLabelOffset(0.015);
   h_myHisto->GetYaxis()->SetLabelSize(0.035);
   h_myHisto->GetYaxis()->SetTitleSize(0.035);
   h_myHisto->GetYaxis()->SetTitleOffset(2.4);
   h_myHisto->GetZaxis()->SetLabelSize(0.035);
   h_myHisto->GetZaxis()->SetTitleSize(0.035);
   h_myHisto->Draw("cont4z");

   myCanvas->Update();
   TPaletteAxis *palette = (TPaletteAxis*)h_myHisto->GetListOfFunctions()->FindObject("palette");
   palette->SetX1NDC(0.9);
   palette->SetX2NDC(0.95);
   palette->SetY1NDC(0.2);
   palette->SetY2NDC(0.8);
   myCanvas->Modified();
   myCanvas->Update();
}
