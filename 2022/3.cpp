#include <iostream>
#include <string>
#include <set>

using namespace std;

string input = R"END(rGnRRccfcCRFDPqNWdwWJWRBdB
jZzVVSZSjmQvZTSZfjmLzNPJqWtJBwqpNtBpdWdNvd
fZfjlMLVshMFhcHnDG
vJRmRfJbfRfJsCpvgLggNVsv
zlzSrMPZMgBFFMNMVWsjsF
dzBSBlzdcggRGdndnn
hNwqVDVDdmQwQPrbDMSSMRSWSM
LvnzJJtlcHstlffCVpMSbRMpBMbCgVWM
lGvvscLHcfsHtvlsnZmmNGhNFVQqqTdqFd
sHGzGsfcZnHfhbLRFrdrhRFf
vwVqzSSjSSttjSqgNMqwzSSVCCgRPhPhFLdCRLLrdCRRrDLb
vvwwtvvVwSvMQzjvmNtJsHBnsZllmnnTBBcBlTnW
pzNVBVplhfLfVfVStZrZHbQHZQTb
sdPPJdCjbdQHMTWt
ngmJGFjJwJCmGcnJcFtgwcDBNLlqfBpvfBpqllhlfL
TGpphMZhJQpGLZTMCCtsBMCSDsStBFcB
jdfgHClHrdrbWvWgjqmctSDqltDsFFDFBc
dNWWvfgCLzzNNLZz
vvHzBrTSvHFbqZqZTBBtzdVfGCGhJSfGJGDSdGMhVG
lgmgslssslscsnRlVGWGWGVMRCll
pQPsjwnNgQmnNNwQgNLNnmgZqvFqtwqtrMMzvzwFtrqTrr
TNhNLTrswwsnFNrrGZVnJnZmVpSjjVDnPp
dBlzzCBqgfWMBpPSJDHVZSVP
cqzfpcdcNFFGrhcb
LLpzCzSzJnLQVnTNhQ
vtDqwBcRztQbthtV
qZZZqZvvsZwwjvjDjspFlPpSSCslpzPlls
rsZVlmStlFZllvmSSvLRqcGMswMMzjMsjqGCjzMG
VTPgQBQdBCwgjCnJGC
pBNTNHdbdWLrDVLbDmLZ
CFmsmwnCRmjCjnCzJZQhhBGQBsMzbP
WvltTWVDdNttdlDbbZzJvPJvBBhhzM
gHDfTNlDDdgVNdglgfqtpcSFwccCmmwnRSwzzHHF
hgmhWgCdzpjPCzFC
NVfgffZblZQVNtFZPntPDrJjPt
TwbQLLfMgdhswWGH
JStSPHPJNrBCtBZMPtHTVfVwLcbbLTcSgfbVfn
GdhhCplmdWbVddLV
qpFvhQppFRlqmFGppRhqvvFzZtQMHZMzBNBCCzNDHHMPzB
MvCMQmJCMDQjwMJCSJpQmDcnGBggfsgljGNslsNGjTHTNf
HRPtRRzVWWFhrFdZhTGlTTLLggBLVgGGLf
zZhdWZPWRdqttWWRPzRPmcpmpQqvvSCvwHwQmJqD
NwrVVWrvwtQDRdRqWbqh
jCCZjlJZZGclGPpCJlcCBhJshgqTsQgbDdshTbgLRh
ppppflPZlpvfffFzHqFV
VmTwGVwnwHnSnqGSVmBBwwmTZvzbCrsNWcsZsqFzCWsbWrNv
JMPPgRDPDgghJggtzsMbZvsNCrWcNsbM
DhgJllPPJcgJpptDDDPldpmTwjHBmSjBBwmBwHBdBmTQ
vblvFHvrQTjqqhCpFwLnFL
RDJRWsdRdgdWZMCMQSVppMJpVL
DzsgRNNsftWdQmcvbPcfcBfj
wTgbsTmgqSbzSlSvFb
rNdDdZnRtJFlmVSHZz
mfNjjmmdNWhWCsffwC
LltBNFLHHcJcfNdNTwbbNsfW
vQSMCzQSGdSdvjsTwmwfwWwV
nRCSzMCQDqlgdlRJHJ
vgqTGwnhpLFsVvrR
ZZzTHlTlJNbcLfRtppFzfs
PlWBWbjQjJgCDCMPTTGT
wtBdWdDpjDdwScBtnsFsPmmnPbPHHPghhh
fSSVGVzlTlqGfffLTQMGHsmFsbmPFbsPbhQZFhhs
TzLzfqJTVRGvRMvqvLGzMqRfSvcDpNjcjdcwSDBDtBDvSCDj
FrdCCzmqFrpDRTRHRLnQJJnr
SGfNRWlBZlgtRltGbvnTVbJnSHvLHVbH
NRWsfWBwwqwDMDpc
vSfsmsdssdjSdZdSgRnmLRGNzgGnqwwB
VrlThFPTPjHFDPRqGGnRnNLqqqHG
lPtTDVCCDrjppfdSQbcJMsbftv
RFFslstRRfSljtsRJPjRtRtngSHbmbbhGbHQQmgbmgGhGQ
DqBZdWZvTdMBBTLDzqBhFnvgVhnHHFbnQVnGnb
wcwMMMTzZwsjtCtjFN
CsscSlwwZDscMNhhpZhRZHRM
VjQvjbQvbhJVbvTbnQTnHHLrRFRqqFqFVdMHNHNH
QbTjjbtJnvttntjgjJjPDwwsBsSsSlslhlwwPCBS
RLjhhBBcNNBNhNjhpwScwSCTFwcFvMwvlc
dJqPJqbqtmgmgdPrdgwvDTCSSlMSFDlFTzFg
stCCqmbGrrbmPsqZhHhpjjNhfjBnnsnp
LfDzcMMVsDLLzNscGhFFcQhlhhBRll
ZCbSbwdmwPnPnPmHjdjWFWsWhdGjdH
bZnPbvnvqCvJDrLJNssf
bbldQHVltHQSSJJmTlwJGjCjCChchgMhHhprCpMv
WNPDFfqfzFsBFFnmgjGhgccjpcpgMGrs
mZFFzDnmzBBZltdlZSVtZS
hdJZZdJTvnJmRphvvpGnwvqzVFSwVlHVlFHFHNlzlgFgHF
QWWWBbrCCrtjQsMdcWMBfttHsgFHVHgFSNzDzFlVLggHzz
jQdBPCtrtcPcMQCTnqnhTvPGGvnJGR
ZhsmsbNVmFssmblMMpdvvQdwLQRppRvQ
GjnNNGNCGjfJcqrQDvQQpvQLPpnQQw
BJjWqWSCrNHrqjfhlHzlVbVtFmtHTV
mtJmPmQBbPFshnJzZpLZ
gMqMHRGrCHSvrRGrqPZLnplFzlVhFspL
RrDrgMGRDPNtfmDN
wqqvqVmlpqchqrDD
gzRltSjgFlWshrdngrpPcDcd
RRjtsbGfGLbsLWSLtjzGSHNNHmHBwNNHNmNfllwVfl
mqFBQgnMQQbJqnTswSMNWGsDswZZ
HgzlRzHccfHsfTwSWfNSNf
VLldvpHLVHrFJFJgpnQbJn
SzCJtLdDCCtqCcdDfZMVMfGVbsVZPPzz
wpwWQWjQgwQgjNBwgHQgsGfPfbPsZPGSPjZmrPrV
QFwpTwpHlnHFNFWQWlQgNwNLCddvDShtLJnSJCLqJJttDt
HMgCVHggtqMMvjgNjNCMMwfWfPwWPJQQNzWwJzlQlQ
bGFrqrFGZLLdFmSPcmPzQJlQcWzJmJ
hRphhShnLGFdGSFSLRGrdqdqsjTtsBTVTTBnVjVvHHBtHggt
hHhnFHQpcFcHjcjfZfZRnjjnNNBvNNNtwvNtbwPtNcPtBgbg
zzVLWCHLSdCttbvw
mMLsHDMVFlRhhmhm
MHMgBNQQPCMMQBbBQQgJHbWttdlfWpZJVWtGGztfWJZW
nvLzDTDFDFqSqncTFddLGfWfssVWWVdlGs
njScSmcnFDDhnmcmnSBzMggjjMQrQCjBQrwH
MFVFHqhHHfVVSGcVQCLttttWTtLQ
BgdJJrJzbGpLssCtTLLCpC
PGBGdjjllBGBjhmhHRlmSfhRDF
BLJmWwBJDDmLDFnVPzvTttvNhNFsHhvvQH
cjbSqfWbRrbSzNMjhtNzzTsT
dRdbgflfqmWggGmwWW
lBTTnDMnNwWdpwMllTMDdTBTSRJjRRcSJRhRGhwtccScgjtg
vvsnCVnHHnsvPzLfVJjtShgGJGVJSc
zQQvzCZbsnbHCWMdFpMqblBqND
CLggQjStSQjLgVRfhBRztwpBpt
DNVmJDFcGNGlmNDnGFnsGcDdwzzZwZPsBPZZhhfBTpwhPfZh
DMDccrnrdnDJcJGFGmCqbLvQqHVSSQVMCgHV
rZVNNDrCFCbjbRSgjhZv
czcMTcGMlcjjvvvGdhbb
pHMpHtLWHHHztMzsvqvnVqNvsnNDqW
hPhPBQVjzjQScjChRVVVsdfbvdmvvpGmvfdbff
nwZwZWNTrwLTTDtbfmHDpGccstDv
FLFJNllFrwTgTwNLnwTlFPhcjjhRhSMSjjBPhzJPQq
CgJCHgJfHzGrrMjJpl
SWqQLSQqdFSLrrCSZrvpzjMM
QLWqhFLQdwFqnPbHcCHPbhCh
jLplfcfjQfptPtLTTtPrRqCCCjZvhBhwhDjwhBBBqC
msznRWgSmmHbSJwDvvBqCCqWFF
mzdsVnbbSSznmbGgGSmTclPcrQffdLfMTLRLtl
PpQQFdNFBtdsFNNPPthTtldwGMnZVvmbbVGbMwrGvG
wHWRJDjHHRgJDZlmVZmnvDbDDM
JqJfgRWLSqWJfcsBfwPpPwFpNwfC
SjpVgjghVZvssgsHjQfHcfcnfNcnbqcRbr
WBtNWTWNJnCTCbRbQR
FlWGtwPJmJPBmwFtMGmpNhDSSSgZhSszzghsMD
fSfzvQSbbSSSTQQzDQTzHsqHmjHVFsjqVJsbrrLs
GWZncGGdBwlPGPJcGlBcPgNGqLqmjsHMVLrrVMwjsMMssLmr
ltGWNggZJnCRhDtzvtTt
zzSHMgsPWzLSJQMMWQWLJBLVqcmVrzmvcpFcqmqpmFprFV
TlDnwhDblbnbbtbjdpVCrmFVDgmprcRCcF
hTdjgdldgdfZWWGGHQJHWZQH
TZVsSRGsGMGWZTvpmrgcMCmrwwFFgF
BDPPnDDLDqDFLNLgctLNrm
PzDPfHPdDPdJPfdHJqdbnnSVvRvsjZSvbsrRGhvGRhTG
nnghnhLhgdVqSPLHcPHPNtpmrRptNt
DwvMWlsJlGzsGMlvsZcWWbRrNHNtZtHttHNTNttTrTTR
DDzDcwlWWGlcsszGwBCggFqgghCBfqCFdhSh
GzgQpJnwgJfbSWpSvqtvlBtmSLmLlvLS
zCHsRZjHdzVPRFNlLlvtlNMNNrtDrt
zzZVsCcCCHzRhcbpwGJGGpcf
lVQMrwlMwwMCBZmFtthmVmsgWhTL
bdzHSSFJcvzcpFDptsDDmhTgLmnmmmhT
SFpcGvdpddvGlBPZMCGrBZ
QmQTQTFTSQPNbsPjPnntZjjnnDlBBB
JHqJqhfCJpWfpHchRzzCnGBjtjDZltsZpljGntrr
chdMHqHcMhWMfRczMJmmQsVTSNbNNFbdQNST
HHdFqqDRdNsHfNRsjWPCBcCCZPwDCZVBVc
lhlgprMrlprbplzwZQPwwPjbZZCPwP
lpljllTGGGglhThpjSvdssSnfRRTdRnvsN
sDzjCqLLzddjsdRsSShgmtnCgFnmnffmmFcf
rJbqJMTqJGVTrgnFmfhcfmnJgm
GQbBWZGbVrqpqWpZZHlwDsDsRsdDlDRDBDsD
LbLbvbhQgblwwqbjGG
cFTTMsczJsTWJFfNNlVqvDqjNvlFqZ
mfMvJHvmdLgLRgpHRR
cvhRpWWhpfpcTpWvRcRcWVNwsjNLJFsJjwLtMLdsdsLJjL
ZZPqGqgZrllbbVMtnJtllwJtltnj
rrPCSQHbbrSqHqqZGGQbvzBVTpfzmvBvcvRCTpzT
VMzNNhWVlrbJHbjcJCjCSR
qgtDBgBtTGjqJvSPRJHCqHcd
GfnfLjjgGLmgBWpWrMMnzWZppl
zRtfBftCvvPSvPclZgcgJznWcgnq
dDpGpVdwdGphbDMpdQhnJjjqnZQWnZNcNWlqlJ
wdFdTDpGDSCmTtRqRq
bTGrRzjbmbmqsGDDjHPpWpfjHJZFVPJp
LwdwNNgMLfZTdCHPPd
lhtwtvttgnchcsrvmzTvmsTbbm
dfLjdlqLtqpbpPQpHS
ZGJnFZFDpBWWGBTzzrhmhHzHQPFPvQ
NgJGGGNGnJWgMDWGgDpWnZWgwdRCtwCCRVLdjwVcccdwct
MMtzRCTnVVnHbbMNrHMRRVQJFrPPDsrsJgjjQGJGpFFF
ZcqWqdfcmfhwDgGpDJmmQDQs
LhwBddvlddvdLCgCtCTzgzMN
ZffpWcfPcPrTwlVCvDhhcS
GMLBNHjMBGtmjtMQMJjLHTwwsSswdslhGwDhsDvCvV
tQgNRHMHQggHjQttbZqfFqrnqSZWfPZR
MDqbPdqGfwGbfMswqfJdPGgQpCZvQgmvJFCmQJQvRCQv
WFthczzzrpWgpHlRRC
BhLSFnFrcLzhtSFnSTznhGbMGwjGwjjPbGDqjdqTMd
zbQdJbBPTsWcCgdmfC
DNqZHjvwZMShDhwqvLmlgVnLmcnsfnVf
HHSFSjNZFqjZrhQpPtzrBgQzPrpB
BzzJHvJJvWsgzPPTWPSJsJgNtmMtNFlvNZFltFtttjmtVZ
cbccGnqhwhdpqRnnrdqdntZVFfMCltMtGFCmtFNFlj
wnlRRQbnpHQWHgSQTs
SQQBFnPzSnQVSzFSWlzlBSWFMsqmMmzLLChTmmMqzsTChmss
ZgdwrJdtJrgpcCwZNbbjsGhGDvMrrqmmMmDhTsqv
NtRZwCbZbbjRZNJcRbjWVWPnWHQWVPBQnHlfRB
jLtlpljLpsbRnDNtBpbjdqWcqChccbhqChqbWQbQ
gVwwggvJJwBqgWqfBCgT
VHZrPSHwzSwvDLnnLlsrDRBp
GBDGDrhwVrFhVCVBvhhvwBDVcmlfcPcMMmmmqNTScNNNflSF
RzRLRbddjZTbTQjJSWNzlNWNcPqNWqSf
dHjRgddHnZngjHLnQsgZHbGrrVpwpTtThnDBppVCTpDp
dpjwvdLwtvJszhmzhRVj
QfFQrffPBCBZMQrMRWzmzmVWVghVLs
GBPGBrFrHZTBSTqvvLNtqSpq
zFcGnQcZPZncbbbhPncpNCwzvwmjMvwwmwmpvd
tBRtdrRTJNvRjMMwRC
rlWSqVtTHqtVTrngQnfbQFdcghgW
RMjfvsbQPvvNpLmLprFJFrFJJT
SqCtGCcZZCwcCqqcGdWGdSZmMTmnVBdLnTTgTrMgrgVLTB
lGzGzHSCzHctsQRMsQPzDjNs
FQTWdTVMDWWVWFDTFcVcWJqTlCCCSlFmtCmNZStsmFmCwCgm
nPLbGZzrgwBlbBlS
PppGRnzPnpzvZVDJVvTfDVVVdD
CQlDsWWfflWDMMhRmTGqFwSjJFdqwSQJzF
PgpVbZPcHgBcgZrBZcHNTTbdqTGjSqFjRFjwSjGG
VvgRBBNLRrPhsfhLWLWDtW
hHhZDcDcPZWpLZWpCQ
pbqdwmbqqmBpdMsgdqjCGvfCWGTWLGmWfGQtVt
wjjbsFBRbwFgMpDznPDrrFcShr
zGmsJQsDBBmDDJJpRZzSqZZPRffWRSqh
LQlVHjCCNCLRSgWlZnhPZW
bLtHCHtjVHQDTJcGDQbs
QPRlnHfPllgRfnqhcwgwGMGzBWzBBBBB
LCtVCZtDbdttjZFtvjvdDMGGBmBWWZWBBWGSsWJSJm
dFVNTVbTjMnHlThHnpHR
hGhZLlqmqZWTcWrmWqrWmTrqjQVQwNHPgPwPPSgPjNwVSLjD
bsMJBRMvRsvsJMRRbspFgQwSNNSNwVNjgwDMDgHH
pFnFtvCQFsbBQzsBrmnTWchWZqWqWqGZ
wpwlJdCWJWdzlWGRRcrDrwRqrqDFrF
ZmPsSVnnTvmHDgFcDTHFTF
smVvnSQhbsNsvsmsnQQclzGCWpphppLJCdJWBpll
FfSmMJmBDfBjDSjFtBVmftBQPwPhPCbhQvbhwCCbvhhjhq
ZnZHZgclJWNbwbcbcwPrQv
ZNNGLHzHNZTTJnlFFfVmDBsFSVLdSD
DDBvjMvBJMtWjNRNrvdtbshTdpssdPSgpFpP
LwGQcwLGJTSssQbg
wcfcCcmHfJmcLLVZVqBBBqWDRqBRDWzHNN
LhnpcdcdrChplvllHptlgR
TsSTSBqPBTGNzqGfzfffGfVtPlHHvMDtHtRMlvjHHgtv
sBfWNGQmQbCgQhQn
pnnHngqsRjstjRgtrBDlBwDgwDZBldlD
SFvJMGhhvcbMSWPJbFzVDdzDZwDFlFlzfFBV
JJNWGSWSMNMCPhcvMhGStwtjtRRtRRqRsCtQjqRj
nQZfJswFffjJplqhlqZlVVhp
vtdCvGdBCzVHgnzLDlpL
BbCTGvtGnBBCPjrsccjrwbrFjj
wjjvDQwWvSQDLbwfNrrJcMHrczcpWN
tTnqlRsTRthFhnnpfNrmcTNMzfCzHr
slsBGVlqghMRhsRlltsFDgQSDbQwPSPLQSZjPSLQ
PcQmmQRQZRFQPjjDWhgCgWdM
nBGtbGNBBGvJbbtpWhCNCjmMjHlWHDdM
vbBnBBrrvVBtJJbvtzzptRQLLZLRFfqLSTSfzqwfqm
PBFZDFPsDZBnTTBdDHSNSpNzmVTVmVGlNH
WvqFLWQCMQLMRtQJFWQLvQCJVzmNjNzVCllVmGSlNHlVzljH
WRtrhtWQWFbrrBwBZrbn
MwWnMPnMPNswjPDvRbsblCGFZGZF
JdJVVVtLdgZhvGVBDZhZ
rqmdqtgcLQLTfWffwGGmmp
QQhhWzQWsMhZjbbmffgfjrGDdfdGvv
HnCJVHcnnHttCRVRCcnBCqJBGfPmTvTvdDfvqfrddNDDggGG
wBwwcRBBCJpFcFcpnVVFQWQLSLbQZLmhzshMlMwQ
CgDNbsDcHjTcgDCgjRHMJrlHFrBHFmrttrGGtFwG
VfQJnvJdhvSJZphSzWpvSzZSltGGBllGBqPPFPrwrmfqtFFB
VJLvdQhphhQnjLsjDDjDcRbL
LjljTPdLdccLhcMZhTTMdzrrtzGgtvrgnttNDGrWtDgn
hbCmCHqHmSbRgNrtvCgGgttN
SJFJRFpHqwSFSpsHwbHwRhSJPTjMMMPdPlPLcVQscLVQQVlL
QmTTQVqrVrMvbCwLczbRlQ
sSNtNGZFjBSsjSSShcRvwCFLlzWcWRzCWv
LLNjZhSGZBnjhJjjrrTgPqgPgTfqfJpf
DCCjDDtHVptCtvMZlJbSnScWWfHlhW
qsTFmTgmqRRLswQGmfWwSnZSSfJSSWZcWb
dsmqgqdsNgTFLFRLGmRpBtBDtDNVpPCCfVrtpD
LLNRhHhRbsNGjqCBPBrLCw
lgcFfvWGTllzfJVVFVWDzFqqMrZCMBrZZqvSrCPZSSrr
fFGGlTTTlzWQGzzDFttQmHnpnhtmmpRssm
LZNnBgtlNZztzmGHmpHHPPPm
QwjjQRCQScbFFFchhFrFjwmsNPHSSWJGsGppMSWMmWqs
dQCwwbwhrjQQjCwRwbhRBlDDfBtVlnNnlgLdnvvd
wRbGbqqGCwnGTRqBqlMVphpgMgMFdnFVnt
cgzvssscgHJVdhDdhDMvDM
PjcZcsJrJHWgrPBQmCqRBPSSRCSb
rHBmLlPLlTzztvRtGsVL
NWJJWWjJDJWWhphqwCFCwzvRVcgRtctRgNNVVscsGc
hqCCsnCpCDnbCnWhwpbHbBHmMBMMmdPrZfdP
GRPprPQdsprGpGgGTlqfVqnZLgnLnwNZLw
CCWJMMvhhCvthtCjvDWFjMcCVZJLNnfqnllwzlzNnzzwVNnN
cDtZFjDjcMCDDtZFSMCvvDpmsmSRRpmmbSpdPRdTmTsp
mmPpsbZZbbzvzgbrZRPgPMWqtHtqDnGCnMWCDwGHwtwW
cBFBNNccsTLjJjfcjfGDGQtWwFCnCGtqCCQH
TNsTLJlffdldzvrmbmrPzp
)END";

char findRepeatedItem(string rucksack) {
    // Pick one item from first rucksack and search for it in the second one.
    for(int firstCompartment = 0; firstCompartment < rucksack.length()/2; firstCompartment++) {
        for(int secondCompartment = rucksack.length()/2; secondCompartment < rucksack.length(); secondCompartment++) {
            if(rucksack[firstCompartment] == rucksack[secondCompartment]) {
                return rucksack[firstCompartment];
            }
        }
    }
    cout<<"impossible ---------";
    return 0;
}

int main()
{
    // priorities are mod a+1 or mod A+1 for small and caps.
    
    int startIndex = 0;
    int endIndex = 0;
    int total = 0;
    while(startIndex < input.length()) {
        // --------------Part One----------------
        // // Extract rucksack.
        // while(input[++endIndex] != '\n');
        // rucksack = input.substr(startIndex, endIndex++ - startIndex);
        // startIndex = endIndex;
        
        // // Search for the repeated character.
        // char item = findRepeatedItem(rucksack);
        // if(item == 0)
        //     cout<<"End of the world.";
            
        // // Calculate priority.
        // int priority;
        // if(item <= 'z' &&  item >= 'a') 
        //     priority = (item % 'a') + 1;
        // else if(item <= 'Z' &&  item >= 'A') 
        //     priority = (item % 'A') + 27;
        
        // total += priority;
        
        // --------------Part Two----------------
        // Extract 3 rucksacks. Create sets.
        while(input[++endIndex] != '\n');
        string rucksack1 = input.substr(startIndex, endIndex++ - startIndex);
        set<char> firstElf(rucksack1.begin(), rucksack1.end()); 
        startIndex = endIndex;
        
        while(input[++endIndex] != '\n');
        string rucksack2 = input.substr(startIndex, endIndex++ - startIndex);
        set<char> secondElf(rucksack2.begin(), rucksack2.end()); 
        startIndex = endIndex;
        
        while(input[++endIndex] != '\n');
        string rucksack3 = input.substr(startIndex, endIndex++ - startIndex);
        set<char> thirdElf(rucksack3.begin(), rucksack3.end()); 
        startIndex = endIndex;
        
        // Find common element of 3 sets to find the badge.
        char badge;
        for (char item : firstElf) {
            if(secondElf.count(item)) {
                if(thirdElf.count(item)) {
                    badge = item; 
                    break;
                }
            }
        }
        
        // Calculate priority.
        int priority;
        if(badge <= 'z' &&  badge >= 'a') 
            priority = (badge % 'a') + 1;
        else if(badge <= 'Z' &&  badge >= 'A') 
            priority = (badge % 'A') + 27;
        
        total += priority;
        
        
    }
    cout<<total;
    
    return 0;
}
