// File Automatically generated by eLiSe
#include "StdAfx.h"
#include "cEqAppui_Droite_PProjInc_M2CDRad_PPaEqPPs.h"


cEqAppui_Droite_PProjInc_M2CDRad_PPaEqPPs::cEqAppui_Droite_PProjInc_M2CDRad_PPaEqPPs():
    cElCompiledFonc(1)
{
   AddIntRef (cIncIntervale("Intr",0,8));
   AddIntRef (cIncIntervale("Orient",8,14));
   AddIntRef (cIncIntervale("Tmp_PTer",14,17));
   Close(false);
}



void cEqAppui_Droite_PProjInc_M2CDRad_PPaEqPPs::ComputeVal()
{
   double tmp0_ = mCompCoord[8];
   double tmp1_ = mCompCoord[9];
   double tmp2_ = cos(tmp1_);
   double tmp3_ = mCompCoord[14];
   double tmp4_ = mCompCoord[15];
   double tmp5_ = mCompCoord[16];
   double tmp6_ = sin(tmp0_);
   double tmp7_ = cos(tmp0_);
   double tmp8_ = sin(tmp1_);
   double tmp9_ = mCompCoord[10];
   double tmp10_ = mLocProjI_x*tmp3_;
   double tmp11_ = mLocProjP0_x+tmp10_;
   double tmp12_ = mLocProjJ_x*tmp4_;
   double tmp13_ = tmp11_+tmp12_;
   double tmp14_ = mLocProjK_x*tmp5_;
   double tmp15_ = tmp13_+tmp14_;
   double tmp16_ = mCompCoord[11];
   double tmp17_ = (tmp15_)-tmp16_;
   double tmp18_ = sin(tmp9_);
   double tmp19_ = -(tmp18_);
   double tmp20_ = -(tmp8_);
   double tmp21_ = cos(tmp9_);
   double tmp22_ = mLocProjI_y*tmp3_;
   double tmp23_ = mLocProjP0_y+tmp22_;
   double tmp24_ = mLocProjJ_y*tmp4_;
   double tmp25_ = tmp23_+tmp24_;
   double tmp26_ = mLocProjK_y*tmp5_;
   double tmp27_ = tmp25_+tmp26_;
   double tmp28_ = mCompCoord[12];
   double tmp29_ = (tmp27_)-tmp28_;
   double tmp30_ = mLocProjI_z*tmp3_;
   double tmp31_ = mLocProjP0_z+tmp30_;
   double tmp32_ = mLocProjJ_z*tmp4_;
   double tmp33_ = tmp31_+tmp32_;
   double tmp34_ = mLocProjK_z*tmp5_;
   double tmp35_ = tmp33_+tmp34_;
   double tmp36_ = mCompCoord[13];
   double tmp37_ = (tmp35_)-tmp36_;
   double tmp38_ = tmp7_*tmp2_;
   double tmp39_ = tmp38_*(tmp17_);
   double tmp40_ = tmp6_*tmp2_;
   double tmp41_ = tmp40_*(tmp29_);
   double tmp42_ = tmp39_+tmp41_;
   double tmp43_ = tmp8_*(tmp37_);
   double tmp44_ = tmp42_+tmp43_;
   double tmp45_ = mCompCoord[0];
   double tmp46_ = -(tmp6_);
   double tmp47_ = tmp46_*tmp19_;
   double tmp48_ = tmp7_*tmp20_;
   double tmp49_ = tmp48_*tmp21_;
   double tmp50_ = tmp47_+tmp49_;
   double tmp51_ = (tmp50_)*(tmp17_);
   double tmp52_ = tmp7_*tmp19_;
   double tmp53_ = tmp6_*tmp20_;
   double tmp54_ = tmp53_*tmp21_;
   double tmp55_ = tmp52_+tmp54_;
   double tmp56_ = (tmp55_)*(tmp29_);
   double tmp57_ = tmp51_+tmp56_;
   double tmp58_ = tmp2_*tmp21_;
   double tmp59_ = tmp58_*(tmp37_);
   double tmp60_ = tmp57_+tmp59_;
   double tmp61_ = tmp45_/(tmp60_);
   double tmp62_ = (tmp44_)*(tmp61_);
   double tmp63_ = mCompCoord[1];
   double tmp64_ = tmp62_+tmp63_;
   double tmp65_ = (tmp64_)-tmp63_;
   double tmp66_ = mCompCoord[2];
   double tmp67_ = tmp46_*tmp21_;
   double tmp68_ = tmp48_*tmp18_;
   double tmp69_ = tmp67_+tmp68_;
   double tmp70_ = (tmp69_)*(tmp17_);
   double tmp71_ = tmp7_*tmp21_;
   double tmp72_ = tmp53_*tmp18_;
   double tmp73_ = tmp71_+tmp72_;
   double tmp74_ = (tmp73_)*(tmp29_);
   double tmp75_ = tmp70_+tmp74_;
   double tmp76_ = tmp2_*tmp18_;
   double tmp77_ = tmp76_*(tmp37_);
   double tmp78_ = tmp75_+tmp77_;
   double tmp79_ = (tmp78_)*(tmp61_);
   double tmp80_ = tmp79_+tmp66_;
   double tmp81_ = (tmp80_)-tmp66_;
   double tmp82_ = (tmp65_)*(tmp65_);
   double tmp83_ = (tmp81_)*(tmp81_);
   double tmp84_ = tmp82_+tmp83_;
   double tmp85_ = (tmp84_)*(tmp84_);
   double tmp86_ = tmp85_*(tmp84_);
   double tmp87_ = tmp86_*(tmp84_);
   double tmp88_ = mCompCoord[3];
   double tmp89_ = tmp88_*(tmp84_);
   double tmp90_ = mCompCoord[4];
   double tmp91_ = tmp90_*tmp85_;
   double tmp92_ = tmp89_+tmp91_;
   double tmp93_ = mCompCoord[5];
   double tmp94_ = tmp93_*tmp86_;
   double tmp95_ = tmp92_+tmp94_;
   double tmp96_ = mCompCoord[6];
   double tmp97_ = tmp96_*tmp87_;
   double tmp98_ = tmp95_+tmp97_;
   double tmp99_ = mCompCoord[7];
   double tmp100_ = tmp87_*(tmp84_);
   double tmp101_ = tmp99_*tmp100_;
   double tmp102_ = tmp98_+tmp101_;

  mVal[0] = (mLocXIm-cos(mLocYIm)*(tmp64_+(tmp65_)*(tmp102_))-sin(mLocYIm)*(tmp80_+(tmp81_)*(tmp102_)))*mLocScNorm;

}


void cEqAppui_Droite_PProjInc_M2CDRad_PPaEqPPs::ComputeValDeriv()
{
   double tmp0_ = mCompCoord[8];
   double tmp1_ = mCompCoord[9];
   double tmp2_ = cos(tmp1_);
   double tmp3_ = mCompCoord[14];
   double tmp4_ = mCompCoord[15];
   double tmp5_ = mCompCoord[16];
   double tmp6_ = sin(tmp0_);
   double tmp7_ = cos(tmp0_);
   double tmp8_ = sin(tmp1_);
   double tmp9_ = mCompCoord[10];
   double tmp10_ = mLocProjI_x*tmp3_;
   double tmp11_ = mLocProjP0_x+tmp10_;
   double tmp12_ = mLocProjJ_x*tmp4_;
   double tmp13_ = tmp11_+tmp12_;
   double tmp14_ = mLocProjK_x*tmp5_;
   double tmp15_ = tmp13_+tmp14_;
   double tmp16_ = mCompCoord[11];
   double tmp17_ = (tmp15_)-tmp16_;
   double tmp18_ = sin(tmp9_);
   double tmp19_ = -(tmp18_);
   double tmp20_ = -(tmp8_);
   double tmp21_ = cos(tmp9_);
   double tmp22_ = mLocProjI_y*tmp3_;
   double tmp23_ = mLocProjP0_y+tmp22_;
   double tmp24_ = mLocProjJ_y*tmp4_;
   double tmp25_ = tmp23_+tmp24_;
   double tmp26_ = mLocProjK_y*tmp5_;
   double tmp27_ = tmp25_+tmp26_;
   double tmp28_ = mCompCoord[12];
   double tmp29_ = (tmp27_)-tmp28_;
   double tmp30_ = mLocProjI_z*tmp3_;
   double tmp31_ = mLocProjP0_z+tmp30_;
   double tmp32_ = mLocProjJ_z*tmp4_;
   double tmp33_ = tmp31_+tmp32_;
   double tmp34_ = mLocProjK_z*tmp5_;
   double tmp35_ = tmp33_+tmp34_;
   double tmp36_ = mCompCoord[13];
   double tmp37_ = (tmp35_)-tmp36_;
   double tmp38_ = tmp7_*tmp2_;
   double tmp39_ = tmp38_*(tmp17_);
   double tmp40_ = tmp6_*tmp2_;
   double tmp41_ = tmp40_*(tmp29_);
   double tmp42_ = tmp39_+tmp41_;
   double tmp43_ = tmp8_*(tmp37_);
   double tmp44_ = tmp42_+tmp43_;
   double tmp45_ = mCompCoord[0];
   double tmp46_ = -(tmp6_);
   double tmp47_ = tmp46_*tmp19_;
   double tmp48_ = tmp7_*tmp20_;
   double tmp49_ = tmp48_*tmp21_;
   double tmp50_ = tmp47_+tmp49_;
   double tmp51_ = (tmp50_)*(tmp17_);
   double tmp52_ = tmp7_*tmp19_;
   double tmp53_ = tmp6_*tmp20_;
   double tmp54_ = tmp53_*tmp21_;
   double tmp55_ = tmp52_+tmp54_;
   double tmp56_ = (tmp55_)*(tmp29_);
   double tmp57_ = tmp51_+tmp56_;
   double tmp58_ = tmp2_*tmp21_;
   double tmp59_ = tmp58_*(tmp37_);
   double tmp60_ = tmp57_+tmp59_;
   double tmp61_ = tmp45_/(tmp60_);
   double tmp62_ = (tmp44_)*(tmp61_);
   double tmp63_ = mCompCoord[1];
   double tmp64_ = tmp62_+tmp63_;
   double tmp65_ = (tmp64_)-tmp63_;
   double tmp66_ = mCompCoord[2];
   double tmp67_ = tmp46_*tmp21_;
   double tmp68_ = tmp48_*tmp18_;
   double tmp69_ = tmp67_+tmp68_;
   double tmp70_ = (tmp69_)*(tmp17_);
   double tmp71_ = tmp7_*tmp21_;
   double tmp72_ = tmp53_*tmp18_;
   double tmp73_ = tmp71_+tmp72_;
   double tmp74_ = (tmp73_)*(tmp29_);
   double tmp75_ = tmp70_+tmp74_;
   double tmp76_ = tmp2_*tmp18_;
   double tmp77_ = tmp76_*(tmp37_);
   double tmp78_ = tmp75_+tmp77_;
   double tmp79_ = (tmp78_)*(tmp61_);
   double tmp80_ = tmp79_+tmp66_;
   double tmp81_ = (tmp80_)-tmp66_;
   double tmp82_ = (tmp65_)*(tmp65_);
   double tmp83_ = (tmp81_)*(tmp81_);
   double tmp84_ = tmp82_+tmp83_;
   double tmp85_ = (tmp84_)*(tmp84_);
   double tmp86_ = tmp85_*(tmp84_);
   double tmp87_ = tmp86_*(tmp84_);
   double tmp88_ = mCompCoord[3];
   double tmp89_ = tmp88_*(tmp84_);
   double tmp90_ = mCompCoord[4];
   double tmp91_ = tmp90_*tmp85_;
   double tmp92_ = tmp89_+tmp91_;
   double tmp93_ = mCompCoord[5];
   double tmp94_ = tmp93_*tmp86_;
   double tmp95_ = tmp92_+tmp94_;
   double tmp96_ = mCompCoord[6];
   double tmp97_ = tmp96_*tmp87_;
   double tmp98_ = tmp95_+tmp97_;
   double tmp99_ = mCompCoord[7];
   double tmp100_ = tmp87_*(tmp84_);
   double tmp101_ = tmp99_*tmp100_;
   double tmp102_ = tmp98_+tmp101_;
   double tmp103_ = ElSquare(tmp60_);
   double tmp104_ = (tmp60_)/tmp103_;
   double tmp105_ = (tmp104_)*(tmp44_);
   double tmp106_ = tmp105_*(tmp65_);
   double tmp107_ = (tmp104_)*(tmp78_);
   double tmp108_ = tmp107_*(tmp81_);
   double tmp109_ = tmp106_+tmp106_;
   double tmp110_ = tmp108_+tmp108_;
   double tmp111_ = tmp109_+tmp110_;
   double tmp112_ = (tmp111_)*(tmp84_);
   double tmp113_ = tmp112_+tmp112_;
   double tmp114_ = (tmp113_)*(tmp84_);
   double tmp115_ = (tmp111_)*tmp85_;
   double tmp116_ = tmp114_+tmp115_;
   double tmp117_ = (tmp116_)*(tmp84_);
   double tmp118_ = (tmp111_)*tmp86_;
   double tmp119_ = tmp117_+tmp118_;
   double tmp120_ = cos(mLocYIm);
   double tmp121_ = (tmp111_)*tmp88_;
   double tmp122_ = (tmp113_)*tmp90_;
   double tmp123_ = tmp121_+tmp122_;
   double tmp124_ = (tmp116_)*tmp93_;
   double tmp125_ = tmp123_+tmp124_;
   double tmp126_ = (tmp119_)*tmp96_;
   double tmp127_ = tmp125_+tmp126_;
   double tmp128_ = (tmp119_)*(tmp84_);
   double tmp129_ = (tmp111_)*tmp87_;
   double tmp130_ = tmp128_+tmp129_;
   double tmp131_ = (tmp130_)*tmp99_;
   double tmp132_ = tmp127_+tmp131_;
   double tmp133_ = sin(mLocYIm);
   double tmp134_ = -(1);
   double tmp135_ = tmp134_*tmp6_;
   double tmp136_ = tmp135_*tmp2_;
   double tmp137_ = tmp136_*(tmp17_);
   double tmp138_ = tmp38_*(tmp29_);
   double tmp139_ = tmp137_+tmp138_;
   double tmp140_ = (tmp139_)*(tmp61_);
   double tmp141_ = -(tmp7_);
   double tmp142_ = tmp141_*tmp19_;
   double tmp143_ = tmp135_*tmp20_;
   double tmp144_ = tmp143_*tmp21_;
   double tmp145_ = tmp142_+tmp144_;
   double tmp146_ = (tmp145_)*(tmp17_);
   double tmp147_ = tmp135_*tmp19_;
   double tmp148_ = tmp147_+tmp49_;
   double tmp149_ = (tmp148_)*(tmp29_);
   double tmp150_ = tmp146_+tmp149_;
   double tmp151_ = tmp45_*(tmp150_);
   double tmp152_ = -(tmp151_);
   double tmp153_ = tmp152_/tmp103_;
   double tmp154_ = (tmp153_)*(tmp44_);
   double tmp155_ = tmp140_+tmp154_;
   double tmp156_ = (tmp155_)*(tmp65_);
   double tmp157_ = tmp141_*tmp21_;
   double tmp158_ = tmp143_*tmp18_;
   double tmp159_ = tmp157_+tmp158_;
   double tmp160_ = (tmp159_)*(tmp17_);
   double tmp161_ = tmp135_*tmp21_;
   double tmp162_ = tmp161_+tmp68_;
   double tmp163_ = (tmp162_)*(tmp29_);
   double tmp164_ = tmp160_+tmp163_;
   double tmp165_ = (tmp164_)*(tmp61_);
   double tmp166_ = (tmp153_)*(tmp78_);
   double tmp167_ = tmp165_+tmp166_;
   double tmp168_ = (tmp167_)*(tmp81_);
   double tmp169_ = tmp156_+tmp156_;
   double tmp170_ = tmp168_+tmp168_;
   double tmp171_ = tmp169_+tmp170_;
   double tmp172_ = (tmp171_)*(tmp84_);
   double tmp173_ = tmp172_+tmp172_;
   double tmp174_ = (tmp173_)*(tmp84_);
   double tmp175_ = (tmp171_)*tmp85_;
   double tmp176_ = tmp174_+tmp175_;
   double tmp177_ = (tmp176_)*(tmp84_);
   double tmp178_ = (tmp171_)*tmp86_;
   double tmp179_ = tmp177_+tmp178_;
   double tmp180_ = (tmp171_)*tmp88_;
   double tmp181_ = (tmp173_)*tmp90_;
   double tmp182_ = tmp180_+tmp181_;
   double tmp183_ = (tmp176_)*tmp93_;
   double tmp184_ = tmp182_+tmp183_;
   double tmp185_ = (tmp179_)*tmp96_;
   double tmp186_ = tmp184_+tmp185_;
   double tmp187_ = (tmp179_)*(tmp84_);
   double tmp188_ = (tmp171_)*tmp87_;
   double tmp189_ = tmp187_+tmp188_;
   double tmp190_ = (tmp189_)*tmp99_;
   double tmp191_ = tmp186_+tmp190_;
   double tmp192_ = tmp134_*tmp8_;
   double tmp193_ = -(tmp2_);
   double tmp194_ = tmp192_*tmp7_;
   double tmp195_ = tmp194_*(tmp17_);
   double tmp196_ = tmp192_*tmp6_;
   double tmp197_ = tmp196_*(tmp29_);
   double tmp198_ = tmp195_+tmp197_;
   double tmp199_ = tmp2_*(tmp37_);
   double tmp200_ = tmp198_+tmp199_;
   double tmp201_ = (tmp200_)*(tmp61_);
   double tmp202_ = tmp193_*tmp7_;
   double tmp203_ = tmp202_*tmp21_;
   double tmp204_ = tmp203_*(tmp17_);
   double tmp205_ = tmp193_*tmp6_;
   double tmp206_ = tmp205_*tmp21_;
   double tmp207_ = tmp206_*(tmp29_);
   double tmp208_ = tmp204_+tmp207_;
   double tmp209_ = tmp192_*tmp21_;
   double tmp210_ = tmp209_*(tmp37_);
   double tmp211_ = tmp208_+tmp210_;
   double tmp212_ = tmp45_*(tmp211_);
   double tmp213_ = -(tmp212_);
   double tmp214_ = tmp213_/tmp103_;
   double tmp215_ = (tmp214_)*(tmp44_);
   double tmp216_ = tmp201_+tmp215_;
   double tmp217_ = (tmp216_)*(tmp65_);
   double tmp218_ = tmp202_*tmp18_;
   double tmp219_ = tmp218_*(tmp17_);
   double tmp220_ = tmp205_*tmp18_;
   double tmp221_ = tmp220_*(tmp29_);
   double tmp222_ = tmp219_+tmp221_;
   double tmp223_ = tmp192_*tmp18_;
   double tmp224_ = tmp223_*(tmp37_);
   double tmp225_ = tmp222_+tmp224_;
   double tmp226_ = (tmp225_)*(tmp61_);
   double tmp227_ = (tmp214_)*(tmp78_);
   double tmp228_ = tmp226_+tmp227_;
   double tmp229_ = (tmp228_)*(tmp81_);
   double tmp230_ = tmp217_+tmp217_;
   double tmp231_ = tmp229_+tmp229_;
   double tmp232_ = tmp230_+tmp231_;
   double tmp233_ = (tmp232_)*(tmp84_);
   double tmp234_ = tmp233_+tmp233_;
   double tmp235_ = (tmp234_)*(tmp84_);
   double tmp236_ = (tmp232_)*tmp85_;
   double tmp237_ = tmp235_+tmp236_;
   double tmp238_ = (tmp237_)*(tmp84_);
   double tmp239_ = (tmp232_)*tmp86_;
   double tmp240_ = tmp238_+tmp239_;
   double tmp241_ = (tmp232_)*tmp88_;
   double tmp242_ = (tmp234_)*tmp90_;
   double tmp243_ = tmp241_+tmp242_;
   double tmp244_ = (tmp237_)*tmp93_;
   double tmp245_ = tmp243_+tmp244_;
   double tmp246_ = (tmp240_)*tmp96_;
   double tmp247_ = tmp245_+tmp246_;
   double tmp248_ = (tmp240_)*(tmp84_);
   double tmp249_ = (tmp232_)*tmp87_;
   double tmp250_ = tmp248_+tmp249_;
   double tmp251_ = (tmp250_)*tmp99_;
   double tmp252_ = tmp247_+tmp251_;
   double tmp253_ = -(tmp21_);
   double tmp254_ = tmp134_*tmp18_;
   double tmp255_ = tmp253_*tmp46_;
   double tmp256_ = tmp254_*tmp48_;
   double tmp257_ = tmp255_+tmp256_;
   double tmp258_ = (tmp257_)*(tmp17_);
   double tmp259_ = tmp253_*tmp7_;
   double tmp260_ = tmp254_*tmp53_;
   double tmp261_ = tmp259_+tmp260_;
   double tmp262_ = (tmp261_)*(tmp29_);
   double tmp263_ = tmp258_+tmp262_;
   double tmp264_ = tmp254_*tmp2_;
   double tmp265_ = tmp264_*(tmp37_);
   double tmp266_ = tmp263_+tmp265_;
   double tmp267_ = tmp45_*(tmp266_);
   double tmp268_ = -(tmp267_);
   double tmp269_ = tmp268_/tmp103_;
   double tmp270_ = (tmp269_)*(tmp44_);
   double tmp271_ = tmp270_*(tmp65_);
   double tmp272_ = tmp254_*tmp46_;
   double tmp273_ = tmp21_*tmp48_;
   double tmp274_ = tmp272_+tmp273_;
   double tmp275_ = (tmp274_)*(tmp17_);
   double tmp276_ = tmp254_*tmp7_;
   double tmp277_ = tmp21_*tmp53_;
   double tmp278_ = tmp276_+tmp277_;
   double tmp279_ = (tmp278_)*(tmp29_);
   double tmp280_ = tmp275_+tmp279_;
   double tmp281_ = tmp21_*tmp2_;
   double tmp282_ = tmp281_*(tmp37_);
   double tmp283_ = tmp280_+tmp282_;
   double tmp284_ = (tmp283_)*(tmp61_);
   double tmp285_ = (tmp269_)*(tmp78_);
   double tmp286_ = tmp284_+tmp285_;
   double tmp287_ = (tmp286_)*(tmp81_);
   double tmp288_ = tmp271_+tmp271_;
   double tmp289_ = tmp287_+tmp287_;
   double tmp290_ = tmp288_+tmp289_;
   double tmp291_ = (tmp290_)*(tmp84_);
   double tmp292_ = tmp291_+tmp291_;
   double tmp293_ = (tmp292_)*(tmp84_);
   double tmp294_ = (tmp290_)*tmp85_;
   double tmp295_ = tmp293_+tmp294_;
   double tmp296_ = (tmp295_)*(tmp84_);
   double tmp297_ = (tmp290_)*tmp86_;
   double tmp298_ = tmp296_+tmp297_;
   double tmp299_ = (tmp290_)*tmp88_;
   double tmp300_ = (tmp292_)*tmp90_;
   double tmp301_ = tmp299_+tmp300_;
   double tmp302_ = (tmp295_)*tmp93_;
   double tmp303_ = tmp301_+tmp302_;
   double tmp304_ = (tmp298_)*tmp96_;
   double tmp305_ = tmp303_+tmp304_;
   double tmp306_ = (tmp298_)*(tmp84_);
   double tmp307_ = (tmp290_)*tmp87_;
   double tmp308_ = tmp306_+tmp307_;
   double tmp309_ = (tmp308_)*tmp99_;
   double tmp310_ = tmp305_+tmp309_;
   double tmp311_ = tmp134_*tmp38_;
   double tmp312_ = tmp311_*(tmp61_);
   double tmp313_ = tmp134_*(tmp50_);
   double tmp314_ = tmp45_*tmp313_;
   double tmp315_ = -(tmp314_);
   double tmp316_ = tmp315_/tmp103_;
   double tmp317_ = (tmp316_)*(tmp44_);
   double tmp318_ = tmp312_+tmp317_;
   double tmp319_ = (tmp318_)*(tmp65_);
   double tmp320_ = tmp134_*(tmp69_);
   double tmp321_ = tmp320_*(tmp61_);
   double tmp322_ = (tmp316_)*(tmp78_);
   double tmp323_ = tmp321_+tmp322_;
   double tmp324_ = (tmp323_)*(tmp81_);
   double tmp325_ = tmp319_+tmp319_;
   double tmp326_ = tmp324_+tmp324_;
   double tmp327_ = tmp325_+tmp326_;
   double tmp328_ = (tmp327_)*(tmp84_);
   double tmp329_ = tmp328_+tmp328_;
   double tmp330_ = (tmp329_)*(tmp84_);
   double tmp331_ = (tmp327_)*tmp85_;
   double tmp332_ = tmp330_+tmp331_;
   double tmp333_ = (tmp332_)*(tmp84_);
   double tmp334_ = (tmp327_)*tmp86_;
   double tmp335_ = tmp333_+tmp334_;
   double tmp336_ = (tmp327_)*tmp88_;
   double tmp337_ = (tmp329_)*tmp90_;
   double tmp338_ = tmp336_+tmp337_;
   double tmp339_ = (tmp332_)*tmp93_;
   double tmp340_ = tmp338_+tmp339_;
   double tmp341_ = (tmp335_)*tmp96_;
   double tmp342_ = tmp340_+tmp341_;
   double tmp343_ = (tmp335_)*(tmp84_);
   double tmp344_ = (tmp327_)*tmp87_;
   double tmp345_ = tmp343_+tmp344_;
   double tmp346_ = (tmp345_)*tmp99_;
   double tmp347_ = tmp342_+tmp346_;
   double tmp348_ = tmp134_*tmp40_;
   double tmp349_ = tmp348_*(tmp61_);
   double tmp350_ = tmp134_*(tmp55_);
   double tmp351_ = tmp45_*tmp350_;
   double tmp352_ = -(tmp351_);
   double tmp353_ = tmp352_/tmp103_;
   double tmp354_ = (tmp353_)*(tmp44_);
   double tmp355_ = tmp349_+tmp354_;
   double tmp356_ = (tmp355_)*(tmp65_);
   double tmp357_ = tmp134_*(tmp73_);
   double tmp358_ = tmp357_*(tmp61_);
   double tmp359_ = (tmp353_)*(tmp78_);
   double tmp360_ = tmp358_+tmp359_;
   double tmp361_ = (tmp360_)*(tmp81_);
   double tmp362_ = tmp356_+tmp356_;
   double tmp363_ = tmp361_+tmp361_;
   double tmp364_ = tmp362_+tmp363_;
   double tmp365_ = (tmp364_)*(tmp84_);
   double tmp366_ = tmp365_+tmp365_;
   double tmp367_ = (tmp366_)*(tmp84_);
   double tmp368_ = (tmp364_)*tmp85_;
   double tmp369_ = tmp367_+tmp368_;
   double tmp370_ = (tmp369_)*(tmp84_);
   double tmp371_ = (tmp364_)*tmp86_;
   double tmp372_ = tmp370_+tmp371_;
   double tmp373_ = (tmp364_)*tmp88_;
   double tmp374_ = (tmp366_)*tmp90_;
   double tmp375_ = tmp373_+tmp374_;
   double tmp376_ = (tmp369_)*tmp93_;
   double tmp377_ = tmp375_+tmp376_;
   double tmp378_ = (tmp372_)*tmp96_;
   double tmp379_ = tmp377_+tmp378_;
   double tmp380_ = (tmp372_)*(tmp84_);
   double tmp381_ = (tmp364_)*tmp87_;
   double tmp382_ = tmp380_+tmp381_;
   double tmp383_ = (tmp382_)*tmp99_;
   double tmp384_ = tmp379_+tmp383_;
   double tmp385_ = tmp192_*(tmp61_);
   double tmp386_ = tmp134_*tmp58_;
   double tmp387_ = tmp45_*tmp386_;
   double tmp388_ = -(tmp387_);
   double tmp389_ = tmp388_/tmp103_;
   double tmp390_ = (tmp389_)*(tmp44_);
   double tmp391_ = tmp385_+tmp390_;
   double tmp392_ = (tmp391_)*(tmp65_);
   double tmp393_ = tmp134_*tmp76_;
   double tmp394_ = tmp393_*(tmp61_);
   double tmp395_ = (tmp389_)*(tmp78_);
   double tmp396_ = tmp394_+tmp395_;
   double tmp397_ = (tmp396_)*(tmp81_);
   double tmp398_ = tmp392_+tmp392_;
   double tmp399_ = tmp397_+tmp397_;
   double tmp400_ = tmp398_+tmp399_;
   double tmp401_ = (tmp400_)*(tmp84_);
   double tmp402_ = tmp401_+tmp401_;
   double tmp403_ = (tmp402_)*(tmp84_);
   double tmp404_ = (tmp400_)*tmp85_;
   double tmp405_ = tmp403_+tmp404_;
   double tmp406_ = (tmp405_)*(tmp84_);
   double tmp407_ = (tmp400_)*tmp86_;
   double tmp408_ = tmp406_+tmp407_;
   double tmp409_ = (tmp400_)*tmp88_;
   double tmp410_ = (tmp402_)*tmp90_;
   double tmp411_ = tmp409_+tmp410_;
   double tmp412_ = (tmp405_)*tmp93_;
   double tmp413_ = tmp411_+tmp412_;
   double tmp414_ = (tmp408_)*tmp96_;
   double tmp415_ = tmp413_+tmp414_;
   double tmp416_ = (tmp408_)*(tmp84_);
   double tmp417_ = (tmp400_)*tmp87_;
   double tmp418_ = tmp416_+tmp417_;
   double tmp419_ = (tmp418_)*tmp99_;
   double tmp420_ = tmp415_+tmp419_;
   double tmp421_ = mLocProjI_x*tmp38_;
   double tmp422_ = mLocProjI_y*tmp40_;
   double tmp423_ = tmp421_+tmp422_;
   double tmp424_ = mLocProjI_z*tmp8_;
   double tmp425_ = tmp423_+tmp424_;
   double tmp426_ = (tmp425_)*(tmp61_);
   double tmp427_ = mLocProjI_x*(tmp50_);
   double tmp428_ = mLocProjI_y*(tmp55_);
   double tmp429_ = tmp427_+tmp428_;
   double tmp430_ = mLocProjI_z*tmp58_;
   double tmp431_ = tmp429_+tmp430_;
   double tmp432_ = tmp45_*(tmp431_);
   double tmp433_ = -(tmp432_);
   double tmp434_ = tmp433_/tmp103_;
   double tmp435_ = (tmp434_)*(tmp44_);
   double tmp436_ = tmp426_+tmp435_;
   double tmp437_ = (tmp436_)*(tmp65_);
   double tmp438_ = mLocProjI_x*(tmp69_);
   double tmp439_ = mLocProjI_y*(tmp73_);
   double tmp440_ = tmp438_+tmp439_;
   double tmp441_ = mLocProjI_z*tmp76_;
   double tmp442_ = tmp440_+tmp441_;
   double tmp443_ = (tmp442_)*(tmp61_);
   double tmp444_ = (tmp434_)*(tmp78_);
   double tmp445_ = tmp443_+tmp444_;
   double tmp446_ = (tmp445_)*(tmp81_);
   double tmp447_ = tmp437_+tmp437_;
   double tmp448_ = tmp446_+tmp446_;
   double tmp449_ = tmp447_+tmp448_;
   double tmp450_ = (tmp449_)*(tmp84_);
   double tmp451_ = tmp450_+tmp450_;
   double tmp452_ = (tmp451_)*(tmp84_);
   double tmp453_ = (tmp449_)*tmp85_;
   double tmp454_ = tmp452_+tmp453_;
   double tmp455_ = (tmp454_)*(tmp84_);
   double tmp456_ = (tmp449_)*tmp86_;
   double tmp457_ = tmp455_+tmp456_;
   double tmp458_ = (tmp449_)*tmp88_;
   double tmp459_ = (tmp451_)*tmp90_;
   double tmp460_ = tmp458_+tmp459_;
   double tmp461_ = (tmp454_)*tmp93_;
   double tmp462_ = tmp460_+tmp461_;
   double tmp463_ = (tmp457_)*tmp96_;
   double tmp464_ = tmp462_+tmp463_;
   double tmp465_ = (tmp457_)*(tmp84_);
   double tmp466_ = (tmp449_)*tmp87_;
   double tmp467_ = tmp465_+tmp466_;
   double tmp468_ = (tmp467_)*tmp99_;
   double tmp469_ = tmp464_+tmp468_;
   double tmp470_ = mLocProjJ_x*tmp38_;
   double tmp471_ = mLocProjJ_y*tmp40_;
   double tmp472_ = tmp470_+tmp471_;
   double tmp473_ = mLocProjJ_z*tmp8_;
   double tmp474_ = tmp472_+tmp473_;
   double tmp475_ = (tmp474_)*(tmp61_);
   double tmp476_ = mLocProjJ_x*(tmp50_);
   double tmp477_ = mLocProjJ_y*(tmp55_);
   double tmp478_ = tmp476_+tmp477_;
   double tmp479_ = mLocProjJ_z*tmp58_;
   double tmp480_ = tmp478_+tmp479_;
   double tmp481_ = tmp45_*(tmp480_);
   double tmp482_ = -(tmp481_);
   double tmp483_ = tmp482_/tmp103_;
   double tmp484_ = (tmp483_)*(tmp44_);
   double tmp485_ = tmp475_+tmp484_;
   double tmp486_ = (tmp485_)*(tmp65_);
   double tmp487_ = mLocProjJ_x*(tmp69_);
   double tmp488_ = mLocProjJ_y*(tmp73_);
   double tmp489_ = tmp487_+tmp488_;
   double tmp490_ = mLocProjJ_z*tmp76_;
   double tmp491_ = tmp489_+tmp490_;
   double tmp492_ = (tmp491_)*(tmp61_);
   double tmp493_ = (tmp483_)*(tmp78_);
   double tmp494_ = tmp492_+tmp493_;
   double tmp495_ = (tmp494_)*(tmp81_);
   double tmp496_ = tmp486_+tmp486_;
   double tmp497_ = tmp495_+tmp495_;
   double tmp498_ = tmp496_+tmp497_;
   double tmp499_ = (tmp498_)*(tmp84_);
   double tmp500_ = tmp499_+tmp499_;
   double tmp501_ = (tmp500_)*(tmp84_);
   double tmp502_ = (tmp498_)*tmp85_;
   double tmp503_ = tmp501_+tmp502_;
   double tmp504_ = (tmp503_)*(tmp84_);
   double tmp505_ = (tmp498_)*tmp86_;
   double tmp506_ = tmp504_+tmp505_;
   double tmp507_ = (tmp498_)*tmp88_;
   double tmp508_ = (tmp500_)*tmp90_;
   double tmp509_ = tmp507_+tmp508_;
   double tmp510_ = (tmp503_)*tmp93_;
   double tmp511_ = tmp509_+tmp510_;
   double tmp512_ = (tmp506_)*tmp96_;
   double tmp513_ = tmp511_+tmp512_;
   double tmp514_ = (tmp506_)*(tmp84_);
   double tmp515_ = (tmp498_)*tmp87_;
   double tmp516_ = tmp514_+tmp515_;
   double tmp517_ = (tmp516_)*tmp99_;
   double tmp518_ = tmp513_+tmp517_;
   double tmp519_ = mLocProjK_x*tmp38_;
   double tmp520_ = mLocProjK_y*tmp40_;
   double tmp521_ = tmp519_+tmp520_;
   double tmp522_ = mLocProjK_z*tmp8_;
   double tmp523_ = tmp521_+tmp522_;
   double tmp524_ = (tmp523_)*(tmp61_);
   double tmp525_ = mLocProjK_x*(tmp50_);
   double tmp526_ = mLocProjK_y*(tmp55_);
   double tmp527_ = tmp525_+tmp526_;
   double tmp528_ = mLocProjK_z*tmp58_;
   double tmp529_ = tmp527_+tmp528_;
   double tmp530_ = tmp45_*(tmp529_);
   double tmp531_ = -(tmp530_);
   double tmp532_ = tmp531_/tmp103_;
   double tmp533_ = (tmp532_)*(tmp44_);
   double tmp534_ = tmp524_+tmp533_;
   double tmp535_ = (tmp534_)*(tmp65_);
   double tmp536_ = mLocProjK_x*(tmp69_);
   double tmp537_ = mLocProjK_y*(tmp73_);
   double tmp538_ = tmp536_+tmp537_;
   double tmp539_ = mLocProjK_z*tmp76_;
   double tmp540_ = tmp538_+tmp539_;
   double tmp541_ = (tmp540_)*(tmp61_);
   double tmp542_ = (tmp532_)*(tmp78_);
   double tmp543_ = tmp541_+tmp542_;
   double tmp544_ = (tmp543_)*(tmp81_);
   double tmp545_ = tmp535_+tmp535_;
   double tmp546_ = tmp544_+tmp544_;
   double tmp547_ = tmp545_+tmp546_;
   double tmp548_ = (tmp547_)*(tmp84_);
   double tmp549_ = tmp548_+tmp548_;
   double tmp550_ = (tmp549_)*(tmp84_);
   double tmp551_ = (tmp547_)*tmp85_;
   double tmp552_ = tmp550_+tmp551_;
   double tmp553_ = (tmp552_)*(tmp84_);
   double tmp554_ = (tmp547_)*tmp86_;
   double tmp555_ = tmp553_+tmp554_;
   double tmp556_ = (tmp547_)*tmp88_;
   double tmp557_ = (tmp549_)*tmp90_;
   double tmp558_ = tmp556_+tmp557_;
   double tmp559_ = (tmp552_)*tmp93_;
   double tmp560_ = tmp558_+tmp559_;
   double tmp561_ = (tmp555_)*tmp96_;
   double tmp562_ = tmp560_+tmp561_;
   double tmp563_ = (tmp555_)*(tmp84_);
   double tmp564_ = (tmp547_)*tmp87_;
   double tmp565_ = tmp563_+tmp564_;
   double tmp566_ = (tmp565_)*tmp99_;
   double tmp567_ = tmp562_+tmp566_;

  mVal[0] = (mLocXIm-tmp120_*(tmp64_+(tmp65_)*(tmp102_))-tmp133_*(tmp80_+(tmp81_)*(tmp102_)))*mLocScNorm;

  mCompDer[0][0] = (-((tmp105_+tmp105_*(tmp102_)+(tmp132_)*(tmp65_))*tmp120_)-(tmp107_+tmp107_*(tmp102_)+(tmp132_)*(tmp81_))*tmp133_)*mLocScNorm;
  mCompDer[0][1] = -(tmp120_)*mLocScNorm;
  mCompDer[0][2] = -(tmp133_)*mLocScNorm;
  mCompDer[0][3] = (-((tmp84_)*(tmp65_)*tmp120_)-(tmp84_)*(tmp81_)*tmp133_)*mLocScNorm;
  mCompDer[0][4] = (-(tmp85_*(tmp65_)*tmp120_)-tmp85_*(tmp81_)*tmp133_)*mLocScNorm;
  mCompDer[0][5] = (-(tmp86_*(tmp65_)*tmp120_)-tmp86_*(tmp81_)*tmp133_)*mLocScNorm;
  mCompDer[0][6] = (-(tmp87_*(tmp65_)*tmp120_)-tmp87_*(tmp81_)*tmp133_)*mLocScNorm;
  mCompDer[0][7] = (-(tmp100_*(tmp65_)*tmp120_)-tmp100_*(tmp81_)*tmp133_)*mLocScNorm;
  mCompDer[0][8] = (-((tmp155_+(tmp155_)*(tmp102_)+(tmp191_)*(tmp65_))*tmp120_)-(tmp167_+(tmp167_)*(tmp102_)+(tmp191_)*(tmp81_))*tmp133_)*mLocScNorm;
  mCompDer[0][9] = (-((tmp216_+(tmp216_)*(tmp102_)+(tmp252_)*(tmp65_))*tmp120_)-(tmp228_+(tmp228_)*(tmp102_)+(tmp252_)*(tmp81_))*tmp133_)*mLocScNorm;
  mCompDer[0][10] = (-((tmp270_+tmp270_*(tmp102_)+(tmp310_)*(tmp65_))*tmp120_)-(tmp286_+(tmp286_)*(tmp102_)+(tmp310_)*(tmp81_))*tmp133_)*mLocScNorm;
  mCompDer[0][11] = (-((tmp318_+(tmp318_)*(tmp102_)+(tmp347_)*(tmp65_))*tmp120_)-(tmp323_+(tmp323_)*(tmp102_)+(tmp347_)*(tmp81_))*tmp133_)*mLocScNorm;
  mCompDer[0][12] = (-((tmp355_+(tmp355_)*(tmp102_)+(tmp384_)*(tmp65_))*tmp120_)-(tmp360_+(tmp360_)*(tmp102_)+(tmp384_)*(tmp81_))*tmp133_)*mLocScNorm;
  mCompDer[0][13] = (-((tmp391_+(tmp391_)*(tmp102_)+(tmp420_)*(tmp65_))*tmp120_)-(tmp396_+(tmp396_)*(tmp102_)+(tmp420_)*(tmp81_))*tmp133_)*mLocScNorm;
  mCompDer[0][14] = (-((tmp436_+(tmp436_)*(tmp102_)+(tmp469_)*(tmp65_))*tmp120_)-(tmp445_+(tmp445_)*(tmp102_)+(tmp469_)*(tmp81_))*tmp133_)*mLocScNorm;
  mCompDer[0][15] = (-((tmp485_+(tmp485_)*(tmp102_)+(tmp518_)*(tmp65_))*tmp120_)-(tmp494_+(tmp494_)*(tmp102_)+(tmp518_)*(tmp81_))*tmp133_)*mLocScNorm;
  mCompDer[0][16] = (-((tmp534_+(tmp534_)*(tmp102_)+(tmp567_)*(tmp65_))*tmp120_)-(tmp543_+(tmp543_)*(tmp102_)+(tmp567_)*(tmp81_))*tmp133_)*mLocScNorm;
}


void cEqAppui_Droite_PProjInc_M2CDRad_PPaEqPPs::ComputeValDerivHessian()
{
  ELISE_ASSERT(false,"Foncteur cEqAppui_Droite_PProjInc_M2CDRad_PPaEqPPs Has no Der Sec");
}

void cEqAppui_Droite_PProjInc_M2CDRad_PPaEqPPs::SetProjI_x(double aVal){ mLocProjI_x = aVal;}
void cEqAppui_Droite_PProjInc_M2CDRad_PPaEqPPs::SetProjI_y(double aVal){ mLocProjI_y = aVal;}
void cEqAppui_Droite_PProjInc_M2CDRad_PPaEqPPs::SetProjI_z(double aVal){ mLocProjI_z = aVal;}
void cEqAppui_Droite_PProjInc_M2CDRad_PPaEqPPs::SetProjJ_x(double aVal){ mLocProjJ_x = aVal;}
void cEqAppui_Droite_PProjInc_M2CDRad_PPaEqPPs::SetProjJ_y(double aVal){ mLocProjJ_y = aVal;}
void cEqAppui_Droite_PProjInc_M2CDRad_PPaEqPPs::SetProjJ_z(double aVal){ mLocProjJ_z = aVal;}
void cEqAppui_Droite_PProjInc_M2CDRad_PPaEqPPs::SetProjK_x(double aVal){ mLocProjK_x = aVal;}
void cEqAppui_Droite_PProjInc_M2CDRad_PPaEqPPs::SetProjK_y(double aVal){ mLocProjK_y = aVal;}
void cEqAppui_Droite_PProjInc_M2CDRad_PPaEqPPs::SetProjK_z(double aVal){ mLocProjK_z = aVal;}
void cEqAppui_Droite_PProjInc_M2CDRad_PPaEqPPs::SetProjP0_x(double aVal){ mLocProjP0_x = aVal;}
void cEqAppui_Droite_PProjInc_M2CDRad_PPaEqPPs::SetProjP0_y(double aVal){ mLocProjP0_y = aVal;}
void cEqAppui_Droite_PProjInc_M2CDRad_PPaEqPPs::SetProjP0_z(double aVal){ mLocProjP0_z = aVal;}
void cEqAppui_Droite_PProjInc_M2CDRad_PPaEqPPs::SetScNorm(double aVal){ mLocScNorm = aVal;}
void cEqAppui_Droite_PProjInc_M2CDRad_PPaEqPPs::SetXIm(double aVal){ mLocXIm = aVal;}
void cEqAppui_Droite_PProjInc_M2CDRad_PPaEqPPs::SetYIm(double aVal){ mLocYIm = aVal;}



double * cEqAppui_Droite_PProjInc_M2CDRad_PPaEqPPs::AdrVarLocFromString(const std::string & aName)
{
   if (aName == "ProjI_x") return & mLocProjI_x;
   if (aName == "ProjI_y") return & mLocProjI_y;
   if (aName == "ProjI_z") return & mLocProjI_z;
   if (aName == "ProjJ_x") return & mLocProjJ_x;
   if (aName == "ProjJ_y") return & mLocProjJ_y;
   if (aName == "ProjJ_z") return & mLocProjJ_z;
   if (aName == "ProjK_x") return & mLocProjK_x;
   if (aName == "ProjK_y") return & mLocProjK_y;
   if (aName == "ProjK_z") return & mLocProjK_z;
   if (aName == "ProjP0_x") return & mLocProjP0_x;
   if (aName == "ProjP0_y") return & mLocProjP0_y;
   if (aName == "ProjP0_z") return & mLocProjP0_z;
   if (aName == "ScNorm") return & mLocScNorm;
   if (aName == "XIm") return & mLocXIm;
   if (aName == "YIm") return & mLocYIm;
   return 0;
}


cElCompiledFonc::cAutoAddEntry cEqAppui_Droite_PProjInc_M2CDRad_PPaEqPPs::mTheAuto("cEqAppui_Droite_PProjInc_M2CDRad_PPaEqPPs",cEqAppui_Droite_PProjInc_M2CDRad_PPaEqPPs::Alloc);


cElCompiledFonc *  cEqAppui_Droite_PProjInc_M2CDRad_PPaEqPPs::Alloc()
{  return new cEqAppui_Droite_PProjInc_M2CDRad_PPaEqPPs();
}


