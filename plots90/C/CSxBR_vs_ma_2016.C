void CSxBR_vs_ma_2016()
{
//=========Macro generated from canvas: cnv/cnv
//=========  (Wed Mar 13 17:11:44 2019) by ROOT version6.06/09
   TCanvas *cnv = new TCanvas("cnv", "cnv",1,1,904,904);
   gStyle->SetOptStat(0);
   gStyle->SetOptTitle(0);
   cnv->SetHighLightColor(2);
   cnv->Range(-0.85,-1.628773,4.15,2.462479);
   cnv->SetFillColor(0);
   cnv->SetBorderMode(0);
   cnv->SetBorderSize(2);
   cnv->SetLogy();
   cnv->SetTickx(1);
   cnv->SetTicky(1);
   cnv->SetLeftMargin(0.17);
   cnv->SetRightMargin(0.03);
   cnv->SetTopMargin(0.07);
   cnv->SetBottomMargin(0.13);
   cnv->SetFrameFillStyle(0);
   cnv->SetFrameBorderMode(0);
   cnv->SetFrameFillStyle(0);
   cnv->SetFrameBorderMode(0);
   
   TH2F *h_CSxBR_vs_ma_dummy__7 = new TH2F("h_CSxBR_vs_ma_dummy__7","h_CSxBR_vs_ma_dummy",1000,0,4,1000,0.08,150);
   h_CSxBR_vs_ma_dummy__7->SetStats(0);
   h_CSxBR_vs_ma_dummy__7->SetLineStyle(0);
   h_CSxBR_vs_ma_dummy__7->SetMarkerStyle(20);
   h_CSxBR_vs_ma_dummy__7->GetXaxis()->SetTitle("m_{a_{1}} [GeV]");
   h_CSxBR_vs_ma_dummy__7->GetXaxis()->SetLabelFont(42);
   h_CSxBR_vs_ma_dummy__7->GetXaxis()->SetLabelOffset(0.007);
   h_CSxBR_vs_ma_dummy__7->GetXaxis()->SetLabelSize(0.044);
   h_CSxBR_vs_ma_dummy__7->GetXaxis()->SetTitleSize(0.06);
   h_CSxBR_vs_ma_dummy__7->GetXaxis()->SetTitleOffset(0.95);
   h_CSxBR_vs_ma_dummy__7->GetXaxis()->SetTitleFont(42);
   h_CSxBR_vs_ma_dummy__7->GetYaxis()->SetTitle("#sigma(pp #rightarrow h_{i} #rightarrow 2a_{1}) B^{2}(a_{1} #rightarrow 2 #mu) [fb]");
   h_CSxBR_vs_ma_dummy__7->GetYaxis()->SetNdivisions(20210);
   h_CSxBR_vs_ma_dummy__7->GetYaxis()->SetLabelFont(42);
   h_CSxBR_vs_ma_dummy__7->GetYaxis()->SetLabelOffset(0.007);
   h_CSxBR_vs_ma_dummy__7->GetYaxis()->SetLabelSize(0.044);
   h_CSxBR_vs_ma_dummy__7->GetYaxis()->SetTitleSize(0.05);
   h_CSxBR_vs_ma_dummy__7->GetYaxis()->SetTitleOffset(1.1);
   h_CSxBR_vs_ma_dummy__7->GetYaxis()->SetTitleFont(42);
   h_CSxBR_vs_ma_dummy__7->GetZaxis()->SetLabelFont(42);
   h_CSxBR_vs_ma_dummy__7->GetZaxis()->SetLabelOffset(0.007);
   h_CSxBR_vs_ma_dummy__7->GetZaxis()->SetLabelSize(0.044);
   h_CSxBR_vs_ma_dummy__7->GetZaxis()->SetTitleSize(0.06);
   h_CSxBR_vs_ma_dummy__7->GetZaxis()->SetTitleFont(42);
   h_CSxBR_vs_ma_dummy__7->Draw("");
   
   Double_t Graph0_fx10[22] = {
   0.25,
   0.5,
   0.75,
   1,
   1.15,
   1.2,
   1.3,
   1.4,
   1.5,
   1.75,
   1.8,
   1.9,
   2.1,
   2.25,
   2.4,
   2.5,
   2.6,
   2.75,
   2.85,
   3,
   3.2,
   3.55};
   Double_t Graph0_fy10[22] = {
   0.3107484,
   0.644304,
   0.7240117,
   0.755152,
   0.7622032,
   0.9232914,
   0.8193545,
   1.267385,
   0.7784903,
   0.7974839,
   0.8392186,
   0.9518006,
   0.7995918,
   0.828685,
   1.15587,
   0.8227595,
   0.8051877,
   1.091528,
   1.526661,
   1.942872,
   1.011052,
   0.8123671};
   TGraph *graph = new TGraph(22,Graph0_fx10,Graph0_fy10);
   graph->SetName("Graph0");
   graph->SetTitle("Graph");
   graph->SetFillColor(1);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#990099");
   graph->SetLineColor(ci);
   graph->SetLineStyle(9);
   graph->SetLineWidth(2);

   ci = TColor::GetColor("#990099");
   graph->SetMarkerColor(ci);
   graph->SetMarkerStyle(22);
   graph->SetMarkerSize(1.5);
   
   TH1F *Graph_Graph10 = new TH1F("Graph_Graph10","Graph",100,0,3.88);
   Graph_Graph10->SetMinimum(0.147536);
   Graph_Graph10->SetMaximum(2.106084);
   Graph_Graph10->SetDirectory(0);
   Graph_Graph10->SetStats(0);
   Graph_Graph10->SetLineStyle(0);
   Graph_Graph10->SetMarkerStyle(20);
   Graph_Graph10->GetXaxis()->SetLabelFont(42);
   Graph_Graph10->GetXaxis()->SetLabelOffset(0.007);
   Graph_Graph10->GetXaxis()->SetLabelSize(0.044);
   Graph_Graph10->GetXaxis()->SetTitleSize(0.06);
   Graph_Graph10->GetXaxis()->SetTitleOffset(0.95);
   Graph_Graph10->GetXaxis()->SetTitleFont(42);
   Graph_Graph10->GetYaxis()->SetLabelFont(42);
   Graph_Graph10->GetYaxis()->SetLabelOffset(0.007);
   Graph_Graph10->GetYaxis()->SetLabelSize(0.044);
   Graph_Graph10->GetYaxis()->SetTitleSize(0.06);
   Graph_Graph10->GetYaxis()->SetTitleOffset(1.2);
   Graph_Graph10->GetYaxis()->SetTitleFont(42);
   Graph_Graph10->GetZaxis()->SetLabelFont(42);
   Graph_Graph10->GetZaxis()->SetLabelOffset(0.007);
   Graph_Graph10->GetZaxis()->SetLabelSize(0.044);
   Graph_Graph10->GetZaxis()->SetTitleSize(0.06);
   Graph_Graph10->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph10);
   
   graph->Draw("cp");
   
   Double_t Graph1_fx11[22] = {
   0.25,
   0.5,
   0.75,
   1,
   1.15,
   1.2,
   1.3,
   1.4,
   1.5,
   1.75,
   1.8,
   1.9,
   2.1,
   2.25,
   2.4,
   2.5,
   2.6,
   2.75,
   2.85,
   3,
   3.2,
   3.55};
   Double_t Graph1_fy11[22] = {
   0.2508183,
   0.4106967,
   0.4560333,
   0.4777492,
   0.4812679,
   0.5825982,
   0.5163288,
   0.7975936,
   0.4892595,
   0.4994767,
   0.5252493,
   0.5948754,
   0.4995317,
   0.5184821,
   0.7242792,
   0.5160678,
   0.5055561,
   0.686384,
   0.9609858,
   1.224854,
   0.6387142,
   0.5150651};
   graph = new TGraph(22,Graph1_fx11,Graph1_fy11);
   graph->SetName("Graph1");
   graph->SetTitle("Graph");
   graph->SetFillColor(1);
   graph->SetLineColor(2);
   graph->SetLineStyle(6);
   graph->SetLineWidth(2);
   graph->SetMarkerColor(2);
   graph->SetMarkerStyle(20);
   graph->SetMarkerSize(1.5);
   
   TH1F *Graph_Graph11 = new TH1F("Graph_Graph11","Graph",100,0,3.88);
   Graph_Graph11->SetMinimum(0.1534148);
   Graph_Graph11->SetMaximum(1.322257);
   Graph_Graph11->SetDirectory(0);
   Graph_Graph11->SetStats(0);
   Graph_Graph11->SetLineStyle(0);
   Graph_Graph11->SetMarkerStyle(20);
   Graph_Graph11->GetXaxis()->SetLabelFont(42);
   Graph_Graph11->GetXaxis()->SetLabelOffset(0.007);
   Graph_Graph11->GetXaxis()->SetLabelSize(0.044);
   Graph_Graph11->GetXaxis()->SetTitleSize(0.06);
   Graph_Graph11->GetXaxis()->SetTitleOffset(0.95);
   Graph_Graph11->GetXaxis()->SetTitleFont(42);
   Graph_Graph11->GetYaxis()->SetLabelFont(42);
   Graph_Graph11->GetYaxis()->SetLabelOffset(0.007);
   Graph_Graph11->GetYaxis()->SetLabelSize(0.044);
   Graph_Graph11->GetYaxis()->SetTitleSize(0.06);
   Graph_Graph11->GetYaxis()->SetTitleOffset(1.2);
   Graph_Graph11->GetYaxis()->SetTitleFont(42);
   Graph_Graph11->GetZaxis()->SetLabelFont(42);
   Graph_Graph11->GetZaxis()->SetLabelOffset(0.007);
   Graph_Graph11->GetZaxis()->SetLabelSize(0.044);
   Graph_Graph11->GetZaxis()->SetTitleSize(0.06);
   Graph_Graph11->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph11);
   
   graph->Draw("cp");
   
   Double_t Graph2_fx12[22] = {
   0.25,
   0.5,
   0.75,
   1,
   1.15,
   1.2,
   1.3,
   1.4,
   1.5,
   1.75,
   1.8,
   1.9,
   2.1,
   2.25,
   2.4,
   2.5,
   2.6,
   2.75,
   2.85,
   3,
   3.2,
   3.55};
   Double_t Graph2_fy12[22] = {
   0.2413372,
   0.3409181,
   0.3796169,
   0.3990292,
   0.4022497,
   0.4870574,
   0.4318603,
   0.6674308,
   0.4096126,
   0.418679,
   0.4403918,
   0.4990187,
   0.4191062,
   0.4347809,
   0.6070398,
   0.4323811,
   0.423426,
   0.5745748,
   0.8041613,
   1.024423,
   0.5338159,
   0.4299304};
   graph = new TGraph(22,Graph2_fx12,Graph2_fy12);
   graph->SetName("Graph2");
   graph->SetTitle("Graph");
   graph->SetFillColor(1);

   ci = TColor::GetColor("#0000ff");
   graph->SetLineColor(ci);
   graph->SetLineStyle(3);
   graph->SetLineWidth(2);

   ci = TColor::GetColor("#0000ff");
   graph->SetMarkerColor(ci);
   graph->SetMarkerStyle(23);
   graph->SetMarkerSize(1.5);
   
   TH1F *Graph_Graph12 = new TH1F("Graph_Graph12","Graph",100,0,3.88);
   Graph_Graph12->SetMinimum(0.1630286);
   Graph_Graph12->SetMaximum(1.102732);
   Graph_Graph12->SetDirectory(0);
   Graph_Graph12->SetStats(0);
   Graph_Graph12->SetLineStyle(0);
   Graph_Graph12->SetMarkerStyle(20);
   Graph_Graph12->GetXaxis()->SetLabelFont(42);
   Graph_Graph12->GetXaxis()->SetLabelOffset(0.007);
   Graph_Graph12->GetXaxis()->SetLabelSize(0.044);
   Graph_Graph12->GetXaxis()->SetTitleSize(0.06);
   Graph_Graph12->GetXaxis()->SetTitleOffset(0.95);
   Graph_Graph12->GetXaxis()->SetTitleFont(42);
   Graph_Graph12->GetYaxis()->SetLabelFont(42);
   Graph_Graph12->GetYaxis()->SetLabelOffset(0.007);
   Graph_Graph12->GetYaxis()->SetLabelSize(0.044);
   Graph_Graph12->GetYaxis()->SetTitleSize(0.06);
   Graph_Graph12->GetYaxis()->SetTitleOffset(1.2);
   Graph_Graph12->GetYaxis()->SetTitleFont(42);
   Graph_Graph12->GetZaxis()->SetLabelFont(42);
   Graph_Graph12->GetZaxis()->SetLabelOffset(0.007);
   Graph_Graph12->GetZaxis()->SetLabelSize(0.044);
   Graph_Graph12->GetZaxis()->SetTitleSize(0.06);
   Graph_Graph12->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph12);
   
   graph->Draw("cp");
   
   Double_t Graph3_fx13[100] = {
   0.25,
   0.2833333,
   0.3166667,
   0.35,
   0.3833333,
   0.4166667,
   0.45,
   0.4833333,
   0.5166667,
   0.55,
   0.5833333,
   0.6166667,
   0.65,
   0.6833333,
   0.7166667,
   0.75,
   0.7833333,
   0.8166667,
   0.85,
   0.8833333,
   0.9166667,
   0.95,
   0.9833333,
   1.016667,
   1.05,
   1.083333,
   1.116667,
   1.15,
   1.183333,
   1.216667,
   1.25,
   1.283333,
   1.316667,
   1.35,
   1.383333,
   1.416667,
   1.45,
   1.483333,
   1.516667,
   1.55,
   1.583333,
   1.616667,
   1.65,
   1.683333,
   1.716667,
   1.75,
   1.783333,
   1.816667,
   1.85,
   1.883333,
   1.916667,
   1.95,
   1.983333,
   2.016667,
   2.05,
   2.083333,
   2.116667,
   2.15,
   2.183333,
   2.216667,
   2.25,
   2.283333,
   2.316667,
   2.35,
   2.383333,
   2.416667,
   2.45,
   2.483333,
   2.516667,
   2.55,
   2.583333,
   2.616667,
   2.65,
   2.683333,
   2.716667,
   2.75,
   2.783333,
   2.816667,
   2.85,
   2.883333,
   2.916667,
   2.95,
   2.983333,
   3.016667,
   3.05,
   3.083333,
   3.116667,
   3.15,
   3.183333,
   3.216667,
   3.25,
   3.283333,
   3.316667,
   3.35,
   3.383333,
   3.416667,
   3.45,
   3.483333,
   3.516667,
   3.55};
   Double_t Graph3_fy13[100] = {
   27.35641,
   75.99002,
   105.6009,
   98.15541,
   90.98212,
   74.19887,
   50.88835,
   31.96023,
   24.40596,
   24.94313,
   25.48615,
   18.5401,
   7.65425,
   1.506613,
   0.300311,
   0.5304584,
   0.8256359,
   1.206317,
   1.683153,
   2.239223,
   2.585746,
   2.664176,
   2.743777,
   2.58931,
   2.221068,
   1.881057,
   1.678493,
   1.593846,
   1.511389,
   1.447455,
   1.400972,
   1.355248,
   1.316843,
   1.285472,
   1.25448,
   1.227385,
   1.204073,
   1.180984,
   1.160286,
   1.141921,
   1.123703,
   1.107075,
   1.092006,
   1.077039,
   1.063187,
   1.050429,
   1.037749,
   1.025879,
   1.014807,
   1.003795,
   0.993389,
   0.9835813,
   0.9738222,
   0.9645269,
   0.9556893,
   0.9468924,
   0.9384567,
   0.9303779,
   0.9223341,
   0.9145757,
   0.9070995,
   0.8996541,
   0.892437,
   0.885446,
   0.8784825,
   0.8717035,
   0.8651072,
   0.858536,
   0.8521146,
   0.8458418,
   0.8395921,
   0.8334643,
   0.8274572,
   0.8214718,
   0.815584,
   0.8097929,
   0.8040224,
   0.7983235,
   0.7926956,
   0.7870876,
   0.6495453,
   0.4181265,
   0.2374713,
   0.167778,
   0.1709967,
   0.174246,
   0.1774293,
   0.180544,
   0.1836858,
   0.1867566,
   0.1897542,
   0.1927757,
   0.1957234,
   0.1985952,
   0.2014879,
   0.204304,
   0.2070416,
   0.2097974,
   0.1699919,
   0.1010039};
   graph = new TGraph(100,Graph3_fx13,Graph3_fy13);
   graph->SetName("Graph3");
   graph->SetTitle("Graph");
   graph->SetFillColor(1);

   ci = TColor::GetColor("#006600");
   graph->SetLineColor(ci);
   graph->SetLineWidth(3);
   graph->SetMarkerStyle(20);
   
   TH1F *Graph_Graph13 = new TH1F("Graph_Graph13","Graph",100,0,3.88);
   Graph_Graph13->SetMinimum(0.09090348);
   Graph_Graph13->SetMaximum(116.1508);
   Graph_Graph13->SetDirectory(0);
   Graph_Graph13->SetStats(0);
   Graph_Graph13->SetLineStyle(0);
   Graph_Graph13->SetMarkerStyle(20);
   Graph_Graph13->GetXaxis()->SetLabelFont(42);
   Graph_Graph13->GetXaxis()->SetLabelOffset(0.007);
   Graph_Graph13->GetXaxis()->SetLabelSize(0.044);
   Graph_Graph13->GetXaxis()->SetTitleSize(0.06);
   Graph_Graph13->GetXaxis()->SetTitleOffset(0.95);
   Graph_Graph13->GetXaxis()->SetTitleFont(42);
   Graph_Graph13->GetYaxis()->SetLabelFont(42);
   Graph_Graph13->GetYaxis()->SetLabelOffset(0.007);
   Graph_Graph13->GetYaxis()->SetLabelSize(0.044);
   Graph_Graph13->GetYaxis()->SetTitleSize(0.06);
   Graph_Graph13->GetYaxis()->SetTitleOffset(1.2);
   Graph_Graph13->GetYaxis()->SetTitleFont(42);
   Graph_Graph13->GetZaxis()->SetLabelFont(42);
   Graph_Graph13->GetZaxis()->SetLabelOffset(0.007);
   Graph_Graph13->GetZaxis()->SetLabelSize(0.044);
   Graph_Graph13->GetZaxis()->SetTitleSize(0.06);
   Graph_Graph13->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph13);
   
   graph->Draw("c");
   
   TLegend *leg = new TLegend(0.35,0.72,0.9,0.92,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextSize(0.035);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(1);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("NULL","NMSSM 90% CL upper limits:","h");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("Graph0","m_{h_{1}} =   90 GeV","LP");

   ci = TColor::GetColor("#990099");
   entry->SetLineColor(ci);
   entry->SetLineStyle(9);
   entry->SetLineWidth(2);

   ci = TColor::GetColor("#990099");
   entry->SetMarkerColor(ci);
   entry->SetMarkerStyle(22);
   entry->SetMarkerSize(1.5);
   entry->SetTextFont(42);
   entry=leg->AddEntry("Graph1","m_{h_{1}} = 125 GeV","LP");
   entry->SetLineColor(2);
   entry->SetLineStyle(6);
   entry->SetLineWidth(2);
   entry->SetMarkerColor(2);
   entry->SetMarkerStyle(20);
   entry->SetMarkerSize(1.5);
   entry->SetTextFont(42);
   entry=leg->AddEntry("Graph2","m_{h_{2}} = 150 GeV","LP");

   ci = TColor::GetColor("#0000ff");
   entry->SetLineColor(ci);
   entry->SetLineStyle(3);
   entry->SetLineWidth(2);

   ci = TColor::GetColor("#0000ff");
   entry->SetMarkerColor(ci);
   entry->SetMarkerStyle(23);
   entry->SetMarkerSize(1.5);
   entry->SetTextFont(42);
   leg->Draw();
   
   leg = new TLegend(0.35,0.56,0.9,0.71,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextSize(0.035);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(1);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   entry=leg->AddEntry("NULL","Reference model:","h");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("Graph3","#sigma(pp #rightarrow h_{i} #rightarrow 2a_{1}) = 0.003 #times #sigma_{SM}","L");

   ci = TColor::GetColor("#006600");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(3);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("Graph3","#sigma(pp #rightarrow h_{j}) #times B(h_{j} #rightarrow 2a_{1}) = 0 for j #neq i","");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   leg->Draw();
   
   Double_t Graph3_fx14[100] = {
   0.25,
   0.2833333,
   0.3166667,
   0.35,
   0.3833333,
   0.4166667,
   0.45,
   0.4833333,
   0.5166667,
   0.55,
   0.5833333,
   0.6166667,
   0.65,
   0.6833333,
   0.7166667,
   0.75,
   0.7833333,
   0.8166667,
   0.85,
   0.8833333,
   0.9166667,
   0.95,
   0.9833333,
   1.016667,
   1.05,
   1.083333,
   1.116667,
   1.15,
   1.183333,
   1.216667,
   1.25,
   1.283333,
   1.316667,
   1.35,
   1.383333,
   1.416667,
   1.45,
   1.483333,
   1.516667,
   1.55,
   1.583333,
   1.616667,
   1.65,
   1.683333,
   1.716667,
   1.75,
   1.783333,
   1.816667,
   1.85,
   1.883333,
   1.916667,
   1.95,
   1.983333,
   2.016667,
   2.05,
   2.083333,
   2.116667,
   2.15,
   2.183333,
   2.216667,
   2.25,
   2.283333,
   2.316667,
   2.35,
   2.383333,
   2.416667,
   2.45,
   2.483333,
   2.516667,
   2.55,
   2.583333,
   2.616667,
   2.65,
   2.683333,
   2.716667,
   2.75,
   2.783333,
   2.816667,
   2.85,
   2.883333,
   2.916667,
   2.95,
   2.983333,
   3.016667,
   3.05,
   3.083333,
   3.116667,
   3.15,
   3.183333,
   3.216667,
   3.25,
   3.283333,
   3.316667,
   3.35,
   3.383333,
   3.416667,
   3.45,
   3.483333,
   3.516667,
   3.55};
   Double_t Graph3_fy14[100] = {
   27.35641,
   75.99002,
   105.6009,
   98.15541,
   90.98212,
   74.19887,
   50.88835,
   31.96023,
   24.40596,
   24.94313,
   25.48615,
   18.5401,
   7.65425,
   1.506613,
   0.300311,
   0.5304584,
   0.8256359,
   1.206317,
   1.683153,
   2.239223,
   2.585746,
   2.664176,
   2.743777,
   2.58931,
   2.221068,
   1.881057,
   1.678493,
   1.593846,
   1.511389,
   1.447455,
   1.400972,
   1.355248,
   1.316843,
   1.285472,
   1.25448,
   1.227385,
   1.204073,
   1.180984,
   1.160286,
   1.141921,
   1.123703,
   1.107075,
   1.092006,
   1.077039,
   1.063187,
   1.050429,
   1.037749,
   1.025879,
   1.014807,
   1.003795,
   0.993389,
   0.9835813,
   0.9738222,
   0.9645269,
   0.9556893,
   0.9468924,
   0.9384567,
   0.9303779,
   0.9223341,
   0.9145757,
   0.9070995,
   0.8996541,
   0.892437,
   0.885446,
   0.8784825,
   0.8717035,
   0.8651072,
   0.858536,
   0.8521146,
   0.8458418,
   0.8395921,
   0.8334643,
   0.8274572,
   0.8214718,
   0.815584,
   0.8097929,
   0.8040224,
   0.7983235,
   0.7926956,
   0.7870876,
   0.6495453,
   0.4181265,
   0.2374713,
   0.167778,
   0.1709967,
   0.174246,
   0.1774293,
   0.180544,
   0.1836858,
   0.1867566,
   0.1897542,
   0.1927757,
   0.1957234,
   0.1985952,
   0.2014879,
   0.204304,
   0.2070416,
   0.2097974,
   0.1699919,
   0.1010039};
   graph = new TGraph(100,Graph3_fx14,Graph3_fy14);
   graph->SetName("Graph3");
   graph->SetTitle("Graph");
   graph->SetFillColor(1);

   ci = TColor::GetColor("#006600");
   graph->SetLineColor(ci);
   graph->SetLineWidth(3);
   graph->SetMarkerStyle(20);
   
   TH1F *Graph_Graph_Graph1314 = new TH1F("Graph_Graph_Graph1314","Graph",100,0,3.88);
   Graph_Graph_Graph1314->SetMinimum(0.09090348);
   Graph_Graph_Graph1314->SetMaximum(116.1508);
   Graph_Graph_Graph1314->SetDirectory(0);
   Graph_Graph_Graph1314->SetStats(0);
   Graph_Graph_Graph1314->SetLineStyle(0);
   Graph_Graph_Graph1314->SetMarkerStyle(20);
   Graph_Graph_Graph1314->GetXaxis()->SetLabelFont(42);
   Graph_Graph_Graph1314->GetXaxis()->SetLabelOffset(0.007);
   Graph_Graph_Graph1314->GetXaxis()->SetLabelSize(0.044);
   Graph_Graph_Graph1314->GetXaxis()->SetTitleSize(0.06);
   Graph_Graph_Graph1314->GetXaxis()->SetTitleOffset(0.95);
   Graph_Graph_Graph1314->GetXaxis()->SetTitleFont(42);
   Graph_Graph_Graph1314->GetYaxis()->SetLabelFont(42);
   Graph_Graph_Graph1314->GetYaxis()->SetLabelOffset(0.007);
   Graph_Graph_Graph1314->GetYaxis()->SetLabelSize(0.044);
   Graph_Graph_Graph1314->GetYaxis()->SetTitleSize(0.06);
   Graph_Graph_Graph1314->GetYaxis()->SetTitleOffset(1.2);
   Graph_Graph_Graph1314->GetYaxis()->SetTitleFont(42);
   Graph_Graph_Graph1314->GetZaxis()->SetLabelFont(42);
   Graph_Graph_Graph1314->GetZaxis()->SetLabelOffset(0.007);
   Graph_Graph_Graph1314->GetZaxis()->SetLabelSize(0.044);
   Graph_Graph_Graph1314->GetZaxis()->SetTitleSize(0.06);
   Graph_Graph_Graph1314->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph_Graph1314);
   
   graph->Draw("c");
   
   leg = new TLegend(0.05,0.933,0.99,1,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextAlign(22);
   leg->SetTextSize(0.045);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(1);
   leg->SetFillColor(0);
   leg->SetFillStyle(0);
   entry=leg->AddEntry("NULL","    #bf{CMS}                                35.9 fb^{-1} (13 TeV)","h");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   leg->Draw();
   cnv->Modified();
   cnv->cd();
   cnv->SetSelected(cnv);
}
