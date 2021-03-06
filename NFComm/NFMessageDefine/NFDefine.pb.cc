// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: NFDefine.proto

#include "NFDefine.pb.h"

#include <algorithm>

#include <google/protobuf/stubs/common.h>
#include <google/protobuf/stubs/port.h>
#include <google/protobuf/io/coded_stream.h>
#include <google/protobuf/wire_format_lite_inl.h>
#include <google/protobuf/descriptor.h>
#include <google/protobuf/generated_message_reflection.h>
#include <google/protobuf/reflection_ops.h>
#include <google/protobuf/wire_format.h>
// This is a temporary google only hack
#ifdef GOOGLE_PROTOBUF_ENFORCE_UNIQUENESS
#include "third_party/protobuf/version.h"
#endif
// @@protoc_insertion_point(includes)

namespace NFMsg {
}  // namespace NFMsg
namespace protobuf_NFDefine_2eproto {
void InitDefaults() {
}

const ::google::protobuf::EnumDescriptor* file_level_enum_descriptors[24];
const ::google::protobuf::uint32 TableStruct::offsets[1] = {};
static const ::google::protobuf::internal::MigrationSchema* schemas = NULL;
static const ::google::protobuf::Message* const* file_default_instances = NULL;

void protobuf_AssignDescriptors() {
  AddDescriptors();
  AssignDescriptors(
      "NFDefine.proto", schemas, file_default_instances, TableStruct::offsets,
      NULL, file_level_enum_descriptors, NULL);
}

void protobuf_AssignDescriptorsOnce() {
  static ::google::protobuf::internal::once_flag once;
  ::google::protobuf::internal::call_once(once, protobuf_AssignDescriptors);
}

void protobuf_RegisterTypes(const ::std::string&) GOOGLE_PROTOBUF_ATTRIBUTE_COLD;
void protobuf_RegisterTypes(const ::std::string&) {
  protobuf_AssignDescriptorsOnce();
}

void AddDescriptorsImpl() {
  InitDefaults();
  static const char descriptor[] GOOGLE_PROTOBUF_ATTRIBUTE_SECTION_VARIABLE(protodesc_cold) = {
      "\n\016NFDefine.proto\022\005NFMsg*\225\n\n\016EGameEventCo"
      "de\022\020\n\014EGEC_SUCCESS\020\000\022\025\n\021EGEC_UNKOWN_ERRO"
      "R\020\001\022\026\n\022EGEC_ACCOUNT_EXIST\020\002\022\033\n\027EGEC_ACCO"
      "UNTPWD_INVALID\020\003\022\026\n\022EGEC_ACCOUNT_USING\020\004"
      "\022\027\n\023EGEC_ACCOUNT_LOCKED\020\005\022\030\n\024EGEC_ACCOUN"
      "T_SUCCESS\020\006\022\033\n\027EGEC_VERIFY_KEY_SUCCESS\020\007"
      "\022\030\n\024EGEC_VERIFY_KEY_FAIL\020\010\022\035\n\031EGEC_SELEC"
      "TSERVER_SUCCESS\020\t\022\032\n\026EGEC_SELECTSERVER_F"
      "AIL\020\n\022\030\n\024EGEC_CHARACTER_EXIST\020n\022\032\n\026EGEC_"
      "SVRZONEID_INVALID\020o\022\031\n\025EGEC_CHARACTER_NU"
      "MOUT\020p\022\032\n\026EGEC_CHARACTER_INVALID\020q\022\033\n\027EG"
      "EC_CHARACTER_NOTEXIST\020r\022\030\n\024EGEC_CHARACTE"
      "R_USING\020s\022\031\n\025EGEC_CHARACTER_LOCKED\020t\022\026\n\022"
      "EGEC_ZONE_OVERLOAD\020u\022\023\n\017EGEC_NOT_ONLINE\020"
      "v\022\027\n\023EGEC_ALREAY_IN_TEAM\020w\022\034\n\030EGEC_INVAL"
      "ID_TEAM_INVITE\020x\022\022\n\016EGEC_TEAM_FULL\020y\022\032\n\026"
      "EGEC_MAIL_UPDATE_ERROR\020z\022\034\n\030EGEC_MAIL_TO"
      "NAME_INVALID\020{\022\032\n\026EGEC_MAIL_DELETE_ERROR"
      "\020|\022\033\n\027EGEC_MAIL_TOWNAME_EQUAL\020}\022\023\n\017EGEC_"
      "LACK_MONEY\020~\022\025\n\021EGEC_FULL_PACKAGE\020\177\022\026\n\021E"
      "GEC_INVALID_ITEM\020\200\001\022\035\n\030EGEC_INVALID_CONS"
      "IGNMENT\020\201\001\022\030\n\023EGEC_NOT_ENOUGH_VIP\020\202\001\022\024\n\017"
      "EGEC_NEED_LEVEL\020\203\001\022\031\n\024EGEC_MAX_FRIEND_LI"
      "ST\020\204\001\022\030\n\023EGEC_MAX_ENEMY_LIST\020\205\001\022\030\n\023EGEC_"
      "MAX_GANGS_LSIT\020\206\001\022\032\n\025EGEC_LIMITS_TO_RIGH"
      "TS\020\207\001\022\034\n\027EGEC_INVALID_GANGS_NAME\020\210\001\022\034\n\027E"
      "GEC_REPEAT_ENTER_GANGS\020\211\001\022\035\n\030EGEC_INVALI"
      "D_GANGSMEMBER\020\212\001\022\034\n\027EGEC_MASTER_LEAVE_GA"
      "NGS\020\213\001\022\033\n\026EGEC_GANGS_TITLE_OUTOF\020\214\001\022\035\n\030E"
      "GEC_ENTER_GATEWAY_FAILD\020\215\001\022\030\n\023EGEC_NO_SE"
      "RVER4ZONE\020\216\001\022\027\n\022EGEC_INVALID_SKILL\020\217\001\022\035\n"
      "\030EGEC_CREATE_CLAN_SUCCESS\020\310\001\022\033\n\026EGEC_JOI"
      "N_CLAN_SUCCESS\020\311\001\022\034\n\027EGEC_LEAVE_CLAN_SUC"
      "CESS\020\312\001*\034\n\tESynMsgID\022\017\n\013ESMI_UNKNOW\020\000*\320/"
      "\n\nEGameMsgID\022\017\n\013EGMI_UNKNOW\020\000\022\025\n\021EGMI_EV"
      "ENT_RESULT\020\001\022\030\n\024EGMI_EVENT_TRANSPOND\020\002\022\025"
      "\n\021EGMI_CLOSE_SOCKET\020\003\022\035\n\031EGMI_WTM_WORLD_"
      "REGISTERED\020\n\022\037\n\033EGMI_WTM_WORLD_UNREGISTE"
      "RED\020\013\022\032\n\026EGMI_WTM_WORLD_REFRESH\020\014\022\035\n\031EGM"
      "I_LTM_LOGIN_REGISTERED\020\024\022\037\n\033EGMI_LTM_LOG"
      "IN_UNREGISTERED\020\025\022\032\n\026EGMI_LTM_LOGIN_REFR"
      "ESH\020\026\022\036\n\032EGMI_PTWG_PROXY_REGISTERED\020\036\022 \n"
      "\034EGMI_PTWG_PROXY_UNREGISTERED\020\037\022\033\n\027EGMI_"
      "PTWG_PROXY_REFRESH\020 \022\034\n\030EGMI_GTW_GAME_RE"
      "GISTERED\020(\022\036\n\032EGMI_GTW_GAME_UNREGISTERED"
      "\020)\022\031\n\025EGMI_GTW_GAME_REFRESH\020*\022\032\n\026EGMI_DT"
      "W_DB_REGISTERED\020<\022\034\n\030EGMI_DTW_DB_UNREGIS"
      "TERED\020=\022\027\n\023EGMI_DTW_DB_REFRESH\020>\022\025\n\021EGMI"
      "_STS_NET_INFO\020F\022\032\n\026EGMI_STS_SERVER_REPOR"
      "T\020Z\022\027\n\023EGMI_STS_HEART_BEAT\020d\022\022\n\016EGMI_REQ"
      "_LOGIN\020e\022\022\n\016EGMI_ACK_LOGIN\020f\022\023\n\017EGMI_REQ"
      "_LOGOUT\020g\022\027\n\023EGMI_REQ_WORLD_LIST\020n\022\027\n\023EG"
      "MI_ACK_WORLD_LIST\020o\022\032\n\026EGMI_REQ_CONNECT_"
      "WORLD\020p\022\032\n\026EGMI_ACK_CONNECT_WORLD\020q\022 \n\034E"
      "GMI_REQ_KICK_CLIENT_INWORLD\020r\022\030\n\024EGMI_RE"
      "Q_CONNECT_KEY\020x\022\030\n\024EGMI_ACK_CONNECT_KEY\020"
      "z\022\033\n\026EGMI_REQ_SELECT_SERVER\020\202\001\022\033\n\026EGMI_A"
      "CK_SELECT_SERVER\020\203\001\022\027\n\022EGMI_REQ_ROLE_LIS"
      "T\020\204\001\022\027\n\022EGMI_ACK_ROLE_LIST\020\205\001\022\031\n\024EGMI_RE"
      "Q_CREATE_ROLE\020\206\001\022\031\n\024EGMI_REQ_DELETE_ROLE"
      "\020\207\001\022\032\n\025EGMI_REQ_RECOVER_ROLE\020\210\001\022\034\n\027EGMI_"
      "REQ_LOAD_ROLE_DATA\020\214\001\022\034\n\027EGMI_ACK_LOAD_R"
      "OLE_DATA\020\215\001\022\034\n\027EGMI_REQ_SAVE_ROLE_DATA\020\216"
      "\001\022\034\n\027EGMI_ACK_SAVE_ROLE_DATA\020\217\001\022\030\n\023EGMI_"
      "REQ_ENTER_GAME\020\226\001\022\030\n\023EGMI_ACK_ENTER_GAME"
      "\020\227\001\022\030\n\023EGMI_REQ_LEAVE_GAME\020\230\001\022\030\n\023EGMI_AC"
      "K_LEAVE_GAME\020\231\001\022\027\n\022EGMI_REQ_SWAP_GAME\020\232\001"
      "\022\030\n\023EGMI_REQ_SWAP_SCENE\020\233\001\022\030\n\023EGMI_ACK_S"
      "WAP_SCENE\020\234\001\022\035\n\030EGMI_REQ_SWAP_HOME_SCENE"
      "\020\235\001\022\035\n\030EGMI_ACK_SWAP_HOME_SCENE\020\236\001\022\037\n\032EG"
      "MI_REQ_ENTER_GAME_FINISH\020\237\001\022\037\n\032EGMI_ACK_"
      "ENTER_GAME_FINISH\020\240\001\022\032\n\025EGMI_ACK_OBJECT_"
      "ENTRY\020\310\001\022\032\n\025EGMI_ACK_OBJECT_LEAVE\020\311\001\022#\n\036"
      "EGMI_ACK_OBJECT_PROPERTY_ENTRY\020\312\001\022!\n\034EGM"
      "I_ACK_OBJECT_RECORD_ENTRY\020\313\001\022\032\n\025EGMI_ACK"
      "_PROPERTY_INT\020\322\001\022\034\n\027EGMI_ACK_PROPERTY_FL"
      "OAT\020\323\001\022\035\n\030EGMI_ACK_PROPERTY_STRING\020\324\001\022\035\n"
      "\030EGMI_ACK_PROPERTY_OBJECT\020\326\001\022\036\n\031EGMI_ACK"
      "_PROPERTY_VECTOR2\020\327\001\022\036\n\031EGMI_ACK_PROPERT"
      "Y_VECTOR3\020\330\001\022\025\n\020EGMI_ACK_ADD_ROW\020\334\001\022\030\n\023E"
      "GMI_ACK_REMOVE_ROW\020\335\001\022\026\n\021EGMI_ACK_SWAP_R"
      "OW\020\336\001\022\030\n\023EGMI_ACK_RECORD_INT\020\337\001\022\032\n\025EGMI_"
      "ACK_RECORD_FLOAT\020\340\001\022\033\n\026EGMI_ACK_RECORD_S"
      "TRING\020\342\001\022\033\n\026EGMI_ACK_RECORD_OBJECT\020\343\001\022\034\n"
      "\027EGMI_ACK_RECORD_VECTOR2\020\344\001\022\034\n\027EGMI_ACK_"
      "RECORD_VECTOR3\020\345\001\022\032\n\025EGMI_ACK_RECORD_CLE"
      "AR\020\372\001\022\031\n\024EGMI_ACK_RECORD_SORT\020\373\001\022\033\n\026EGMI"
      "_ACK_DATA_FINISHED\020\204\002\022\026\n\021EGMI_REQ_AI_ONW"
      "ER\020\254\002\022\034\n\027EGMI_REQ_SEARCH_OPPNENT\020\304\t\022\034\n\027E"
      "GMI_ACK_SEARCH_OPPNENT\020\305\t\022\031\n\024EGMI_REQ_EN"
      "D_OPPNENT\020\306\t\022\031\n\024EGMI_ACK_END_OPPNENT\020\307\t\022"
      "\033\n\026EGMI_REQ_CANCEL_SEARCH\020\310\t\022\033\n\026EGMI_ACK"
      "_CANCEL_SEARCH\020\311\t\022\022\n\rEGMI_REQ_MOVE\020\316\t\022\022\n"
      "\rEGMI_ACK_MOVE\020\317\t\022\031\n\024EGMI_REQ_MOVE_IMMUN"
      "E\020\320\t\022\031\n\024EGMI_ACK_MOVE_IMMUNE\020\321\t\022\030\n\023EGMI_"
      "REQ_STATE_SYNC\020\322\t\022\030\n\023EGMI_ACK_STATE_SYNC"
      "\020\323\t\022\026\n\021EGMI_REQ_POS_SYNC\020\324\t\022\026\n\021EGMI_ACK_"
      "POS_SYNC\020\325\t\022\033\n\026EGMI_REQ_SKILL_OBJECTX\020\330\t"
      "\022\033\n\026EGMI_ACK_SKILL_OBJECTX\020\331\t\022\027\n\022EGMI_RE"
      "Q_SKILL_POS\020\332\t\022\027\n\022EGMI_ACK_SKILL_POS\020\333\t\022"
      "\031\n\024EGMI_REQ_ITEM_OBJECT\020\334\t\022\031\n\024EGMI_ACK_I"
      "TEM_OBJECT\020\335\t\022\026\n\021EGMI_REQ_ITEM_POS\020\336\t\022\026\n"
      "\021EGMI_ACK_ITEM_POS\020\337\t\022\022\n\rEGMI_REQ_CHAT\020\342"
      "\t\022\022\n\rEGMI_ACK_CHAT\020\343\t\022\027\n\022EGMI_REQ_SALE_I"
      "TEM\020\344\t\022\030\n\023EGMI_REQ_SPLIT_ITEM\020\345\t\022\032\n\025EGMI"
      "_REQ_PRODUCE_ITEM\020\346\t\022\027\n\022EGMI_REQ_PICK_IT"
      "EM\020\347\t\022\031\n\024EGMI_REQ_ACCEPT_TASK\020\350\t\022\034\n\027EGMI"
      "_REQ_COMPELETE_TASK\020\351\t\022\033\n\026EGMI_ACK_ONLIN"
      "E_NOTIFY\020\212\n\022\034\n\027EGMI_ACK_OFFLINE_NOTIFY\020\213"
      "\n\022\031\n\024EGMI_REQ_CREATE_CLAN\020\224\n\022\031\n\024EGMI_ACK"
      "_CREATE_CLAN\020\225\n\022\027\n\022EGMI_REQ_JOIN_CLAN\020\226\n"
      "\022\027\n\022EGMI_ACK_JOIN_CLAN\020\227\n\022\030\n\023EGMI_REQ_LE"
      "AVE_CLAN\020\230\n\022\030\n\023EGMI_ACK_LEAVE_CLAN\020\231\n\022\026\n"
      "\021EGMI_REQ_OPR_CLAN\020\232\n\022\026\n\021EGMI_ACK_OPR_CL"
      "AN\020\233\n\022\031\n\024EGMI_REQ_SEARCH_CLAN\020\234\n\022\031\n\024EGMI"
      "_ACK_SEARCH_CLAN\020\235\n\022 \n\033EGMI_REQ_CANCEL_S"
      "EARCH_CLAN\020\236\n\022\036\n\031EGEC_REQ_CREATE_CHATGRO"
      "UP\020\370\n\022\036\n\031EGEC_ACK_CREATE_CHATGROUP\020\371\n\022\034\n"
      "\027EGEC_REQ_JOIN_CHATGROUP\020\372\n\022\034\n\027EGEC_ACK_"
      "JOIN_CHATGROUP\020\373\n\022\035\n\030EGEC_REQ_LEAVE_CHAT"
      "GROUP\020\374\n\022\035\n\030EGEC_ACK_LEAVE_CHATGROUP\020\375\n\022"
      "$\n\037EGEC_REQ_SUBSCRIPTION_CHATGROUP\020\376\n\022*\n"
      "%EGEC_REQ_CANCELSUBSCRIPTION_CHATGROUP\020\377"
      "\n\022\036\n\031EGEC_REQ_INVITE_CHATGROUP\020\200\013\022\036\n\031EGE"
      "C_ACK_INVITE_CHATGROUP\020\201\013\022\034\n\027EGEC_REQ_KI"
      "CK_CHATGROUP\020\202\013\022\034\n\027EGEC_ACK_KICK_CHATGRO"
      "UP\020\203\013\022\037\n\032EGEC_REQ_CHATGROUP_TO_TEAM\020\252\013\022\037"
      "\n\032EGEC_ACK_CHATGROUP_TO_TEAM\020\253\013\022%\n EGEC_"
      "REQ_INTENSIFYLEVEL_TO_EQUIP\020\334\013\022%\n EGEC_A"
      "CK_INTENSIFYLEVEL_TO_EQUIP\020\335\013\022\033\n\026EGEC_RE"
      "Q_HOLE_TO_EQUIP\020\336\013\022\033\n\026EGEC_ACK_HOLE_TO_E"
      "QUIP\020\337\013\022!\n\034EGEC_REQ_INLAYSTONE_TO_EQUIP\020"
      "\340\013\022!\n\034EGEC_ACK_INLAYSTONE_TO_EQUIP\020\341\013\022#\n"
      "\036EGEC_REQ_ELEMENTLEVEL_TO_EQUIP\020\342\013\022#\n\036EG"
      "EC_ACK_ELEMENTLEVEL_TO_EQUIP\020\343\013\022\024\n\017EGEC_"
      "WEAR_EQUIP\020\344\013\022\027\n\022EGEC_TAKEOFF_EQUIP\020\345\013\022\034"
      "\n\027EGEC_REQ_SET_FIGHT_HERO\020\360\013\022\037\n\032EGEC_REQ"
      "_SWITCH_FIGHT_HERO\020\361\013\022\031\n\024EGEC_REQ_RELIVE"
      "_HERO\020\362\013\022\027\n\022EGEC_REQ_SEND_MAIL\020\244\r\022\027\n\022EGE"
      "C_REQ_DRAW_MAIL\020\245\r\022\031\n\024EGEC_REQ_DELETE_MA"
      "IL\020\246\r\022 \n\033EGMI_ACK_CLONE_OBJECT_ENTRY\020\210\016\022"
      " \n\033EGMI_ACK_CLONE_OBJECT_LEAVE\020\211\016\022)\n$EGM"
      "I_ACK_CLONE_OBJECT_PROPERTY_ENTRY\020\212\016\022\'\n\""
      "EGMI_ACK_CLONE_OBJECT_RECORD_ENTRY\020\213\016\022 \n"
      "\033EGMI_ACK_CLONE_PROPERTY_INT\020\222\016\022\"\n\035EGMI_"
      "ACK_CLONE_PROPERTY_FLOAT\020\223\016\022#\n\036EGMI_ACK_"
      "CLONE_PROPERTY_STRING\020\224\016\022#\n\036EGMI_ACK_CLO"
      "NE_PROPERTY_OBJECT\020\226\016\022\030\n\023EGMI_REQSWICHSE"
      "RVER\020\260\016\022\030\n\023EGMI_ACKSWICHSERVER\020\261\016\022\031\n\024EGM"
      "I_REQ_CREATE_TEAM\020\304\016\022\031\n\024EGMI_ACK_CREATE_"
      "TEAM\020\305\016\022\027\n\022EGMI_REQ_JOIN_TEAM\020\306\016\022\027\n\022EGMI"
      "_ACK_JOIN_TEAM\020\307\016\022\030\n\023EGMI_REQ_LEAVE_TEAM"
      "\020\310\016\022\030\n\023EGMI_ACK_LEAVE_TEAM\020\311\016\022\031\n\024EGMI_RE"
      "Q_INVITE_TEAM\020\312\016\022\034\n\027EGMI_REQ_OPRMEMBER_T"
      "EAM\020\313\016\022\034\n\027EGMI_ACK_OPRMEMBER_TEAM\020\314\016\022\037\n\032"
      "EGMI_REQ_TEAM_ENTER_ECTYPE\020\315\016\022\037\n\032EGMI_AC"
      "K_TEAM_ENTER_ECTYPE\020\316\016\022\033\n\026EGMI_REQ_MAP_G"
      "RID_INFO\020\354\016\022\033\n\026EGMI_ACK_MAP_GRID_INFO\020\355\016"
      "\022\032\n\025EGMI_REQ_BIG_MAP_INFO\020\356\016\022\032\n\025EGMI_ACK"
      "_BIG_MAP_INFO\020\357\016\022\033\n\026EGMI_REQ_HOLD_MAP_GR"
      "ID\020\366\016\022\033\n\026EGMI_ACK_HOLD_MAP_GRID\020\367\016\022 \n\033EG"
      "MI_REQ_LEAVE_MSG_MAP_GRID\020\370\016\022 \n\033EGMI_ACK"
      "_LEAVE_MSG_MAP_GRID\020\371\016\022 \n\033EGMI_REQ_GET_M"
      "AP_GRID_AWARD\020\372\016\022 \n\033EGMI_ACK_GET_MAP_GRI"
      "D_AWARD\020\373\016\022\036\n\031EGMI_REQ_MAP_GRID_HUNTING\020"
      "\374\016\022\036\n\031EGMI_ACK_MAP_GRID_HUNTING\020\375\016\022\037\n\032EG"
      "MI_REQ_MAP_GRID_KING_WAR\020\376\016\022\037\n\032EGMI_ACK_"
      "MAP_GRID_KING_WAR\020\377\016\022\032\n\025EGMI_REQ_ADD_BUI"
      "LDING\020\210\'\022\037\n\032EGMI_REQ_ACK_BUILDING_LIST\020\211"
      "\'\022!\n\034EGMI_REQ_STORE_BUILDING_LIST\020\222\'\022\036\n\031"
      "EGMI_REQ_CMD_PROPERTY_INT\020\220N\022\036\n\031EGMI_REQ"
      "_CMD_PROPERTY_STR\020\221N\022!\n\034EGMI_REQ_CMD_PRO"
      "PERTY_OBJECT\020\222N\022 \n\033EGMI_REQ_CMD_PROPERTY"
      "_FLOAT\020\223N\022\034\n\027EGMI_REQ_CMD_RECORD_INT\020\224N\022"
      "\034\n\027EGMI_REQ_CMD_RECORD_STR\020\225N\022\037\n\032EGMI_RE"
      "Q_CMD_RECORD_OBJECT\020\226N\022\036\n\031EGMI_REQ_CMD_R"
      "ECORD_FLOAT\020\227N\022\030\n\023EGMI_REQ_CMD_NORMAL\020\230N"
      "\022!\n\034EGMI_REQ_QUERY_SERVER_STATUS\020\330O\022\034\n\026E"
      "GMI_REQ_BUY_FORM_SHOP\020\240\234\001\022\034\n\026EGMI_ACK_BU"
      "Y_FORM_SHOP\020\241\234\001\022 \n\032EGMI_REQ_MOVE_BUILD_O"
      "BJECT\020\242\234\001\022 \n\032EGMI_ACK_MOVE_BUILD_OBJECT\020"
      "\243\234\001\022\033\n\025EGMI_REQ_UP_BUILD_LVL\020\205\235\001\022\032\n\024EGMI"
      "_REQ_CREATE_ITEM\020\206\235\001\022\034\n\026EGMI_REQ_BUILD_O"
      "PERATE\020\207\235\001\022\036\n\030EGMI_REQ_SEARCH_TO_SHARE\020\260"
      "\352\001\022\036\n\030EGMI_ACK_SEARCH_TO_SHARE\020\261\352\001\022\035\n\027EG"
      "MI_REQ_SHARE_TO_ATART\020\262\352\001\022\035\n\027EGMI_ACK_SH"
      "ARE_TO_ATART\020\263\352\001*\233\001\n\nESkillType\022\024\n\020EST_B"
      "RIEF_SINGLE\020\000\022\023\n\017EST_BRIEF_GROUP\020\001\022\025\n\021ES"
      "T_BULLET_SINGLE\020\002\022\026\n\022EST_BULLET_REBOUND\020"
      "\003\022\032\n\026EST_BULLET_TARGET_BOMB\020\004\022\027\n\023EST_BUL"
      "LET_POS_BOMB\020\005*G\n\tEItemType\022\r\n\tEIT_EQUIP"
      "\020\000\022\013\n\007EIT_GEM\020\001\022\016\n\nEIT_SUPPLY\020\002\022\016\n\nEIT_S"
      "CROLL\020\003*\220\001\n\021EGameEquipSubType\022\024\n\020EQUIPTY"
      "PE_WEAPON\020\000\022\024\n\020EQUIPTYPE_HELMET\020\001\022\023\n\017EQU"
      "IPTYPE_ARMOR\020\002\022\022\n\016EQUIPTYPE_HAND\020\003\022\022\n\016EQ"
      "UIPTYPE_RING\020\004\022\022\n\016EQUIPTYPE_BOOT\020\005*\311\001\n\017E"
      "GameGemSubType\022\024\n\020EGGSTYPE_GEM_ATK\020\000\022\024\n\020"
      "EGGSTYPE_GEM_DEF\020\001\022\025\n\021EGGSTYPE_GEM_FIRE\020"
      "\003\022\026\n\022EGGSTYPE_GEM_LIGHT\020\004\022\025\n\021EGGSTYPE_GE"
      "M_WIND\020\005\022\024\n\020EGGSTYPE_GEM_ICE\020\006\022\027\n\023EGGSTY"
      "PE_GEM_POISON\020\007\022\025\n\021EGGSTYPE_GEM_DRAK\020\010*\317"
      "\001\n\022EGameSupplySubType\022\023\n\017EGIT_ITEM_WATER"
      "\020\000\022\025\n\021EGIT_ITEM_DIAMOND\020\001\022\026\n\022EGIT_ITEM_C"
      "URRENCY\020\002\022\021\n\rEGIT_ITEM_EXP\020\003\022\020\n\014EGIT_ITE"
      "M_HP\020\004\022\020\n\014EGIT_ITEM_MP\020\005\022\020\n\014EGIT_ITEM_SP"
      "\020\006\022\022\n\016EGIT_ITEM_PACK\020\007\022\030\n\024EGIT_ITEM_MEMO"
      "RY_POS\020\010*\222\001\n\022EGameScrollSubType\022\031\n\025EGTST"
      "_TOKEN_HERO_CARD\020\000\022\030\n\024EGTST_TOKEN_POSITI"
      "ON\020\001\022\026\n\022EGTST_TOKEN_BOUNTY\020\002\022\030\n\024EGTST_TO"
      "KEN_ACTIVITY\020\003\022\025\n\021EGTST_TOKEN_BUILD\020\004*e\n"
      "\024EGameItemExpiredType\022\016\n\nEGIET_NONE\020\000\022\023\n"
      "\017EGIET_USE_TIMES\020\001\022\023\n\017EGIET_REAL_TIME\020\002\022"
      "\023\n\017EGIET_END_INDEX\020\003*Y\n\022EDrawDropItemSta"
      "te\022\025\n\021E_DRAW_STATE_NONE\020\000\022\025\n\021E_DRAW_STAT"
      "E_GAIN\020\001\022\025\n\021E_DRAW_STATE_RECV\020\002*p\n\017EGuil"
      "dPowerType\022\032\n\026CLAN_POWER_TYPE_NORMAL\020\000\022\""
      "\n\036CLAN_POWER_TYPE_VICE_PRESIDENT\020\001\022\035\n\031CL"
      "AN_POWER_TYPE_PRESIDENT\020\002*V\n\nETaskState\022"
      "\023\n\017TASK_IN_PROCESS\020\000\022\r\n\tTASK_DONE\020\001\022\023\n\017T"
      "ASK_DRAW_AWARD\020\002\022\017\n\013TASK_FINISH\020\003*\251\002\n\tET"
      "askType\022 \n\034TASK_LEVEL_UPDATE_SOME_LEVEL\020"
      "\000\022\024\n\020TASK_PASS_ECTYPE\020\001\022\032\n\026TASK_PASS_ECT"
      "YPE_COUNT\020\002\022$\n TASK_PASS_SOME_TYPE_ECTYP"
      "E_COUNT\020\003\022\033\n\027TASK_UPDATE_SKILL_COUNT\020\004\022\026"
      "\n\022TASK_CONSUME_MONEY\020\005\022\030\n\024TASK_CONSUME_D"
      "IAMOND\020\006\022\024\n\020TASK_ARENA_COUNT\020\007\022\033\n\027TASK_K"
      "ILL_MONSTER_COUNT\020\010\022 \n\034TASK_KILL_SOME_MO"
      "NSTER_COUNT\020\t*m\n\nESceneType\022\020\n\014SCENE_NOR"
      "MAL\020\000\022\026\n\022SCENE_SINGLE_CLONE\020\001\022\025\n\021SCENE_M"
      "ULTI_CLONE\020\002\022\016\n\nSCENE_HOME\020\003\022\016\n\nSCENE_CL"
      "AN\020\004*t\n\010EPVPType\022\014\n\010PVP_HOME\020\000\022\022\n\016PVP_IN"
      "DIVIDUAL\020\001\022\014\n\010PVP_DOTA\020\002\022\020\n\014PVP_SURVIVAL"
      "\020\003\022\020\n\014PVP_CLAN_WAR\020\004\022\024\n\020PVP_CLAN_DUNGEON"
      "\020\005*s\n\tEShopType\022\016\n\nEST_UNKNOW\020\000\022\020\n\014EST_B"
      "UILDING\020\001\022\014\n\010EST_GOLD\020\002\022\014\n\010EST_ITEM\020\003\022\r\n"
      "\tEST_EQUIP\020\005\022\013\n\007EST_GEM\020\006\022\014\n\010EST_CARD\020\007*"
      "\211\001\n\tERankType\022\016\n\nERT_UNKNOW\020\000\022\024\n\020ERT_PLA"
      "YER_LEVEL\020\001\022\023\n\017ERT_FIGHT_VALUE\020\002\022\024\n\020ERT_"
      "PLAYER_MONEY\020\003\022\022\n\016ERT_CLAN_LEVEL\020\004\022\027\n\023ER"
      "T_CLAN_KINGSOURCE\020\005*G\n\010ENPCType\022\023\n\017ENPCT"
      "YPE_NORMAL\020\000\022\021\n\rENPCTYPE_HERO\020\001\022\023\n\017ENPCT"
      "YPE_TURRET\020\002*\333\004\n\022ESubNPCType_TURRET\022\025\n\021E"
      "NPCTYPE_SUB_TOWN\020\000\022\032\n\026ENPCTYPE_SUB_GOLD_"
      "MINE\020\001\022\034\n\030ENPCTYPE_SUB_ENEGER_MINE\020\002\022\033\n\027"
      "ENPCTYPE_SUB_GOLD_STORE\020\003\022\035\n\031ENPCTYPE_SU"
      "B_ENEGER_STORE\020\004\022\027\n\023ENPCTYPE_SUB_CANNON\020"
      "\n\022\025\n\021ENPCTYPE_SUB_ACID\020\013\022\026\n\022ENPCTYPE_SUB"
      "_TESLA\020\014\022\026\n\022ENPCTYPE_SUB_X_BOW\020\r\022\030\n\024ENPC"
      "TYPE_SUB_CRYSTAL\020\016\022\025\n\021ENPCTYPE_SUB_FIRE\020"
      "\017\022\030\n\024ENPCTYPE_SUB_GATLING\020\020\022\026\n\022ENPCTYPE_"
      "SUB_GAUSS\020\021\022\027\n\023ENPCTYPE_SUB_HAMMER\020\022\022\026\n\022"
      "ENPCTYPE_SUB_LASER\020\023\022\033\n\027ENPCTYPE_SUB_MAC"
      "GINEGUN\020\024\022\027\n\023ENPCTYPE_SUB_MORTAR\020\025\022\027\n\023EN"
      "PCTYPE_SUB_PLASMA\020\026\022\026\n\022ENPCTYPE_SUB_RADA"
      "R\020\027\022\027\n\023ENPCTYPE_SUB_ROCKET\020\030\022\025\n\021ENPCTYPE"
      "_SUB_BOMB\020d\022\025\n\021ENPCTYPE_SUB_TRAP\020e\022\026\n\022EN"
      "PCTYPE_SUB_SPINE\020f*E\n\nEMeleeType\022\017\n\013ETYP"
      "E_MELEE\020\000\022\024\n\020ETYPE_MELEE_DASH\020\001\022\020\n\014ETYPE"
      "_RANGER\020\002*U\n\016EEffectObjType\022\025\n\021ETARGETTY"
      "PE_ENEMY\020\000\022\024\n\020ETARGETTYPE_SELF\020\001\022\026\n\022ETAR"
      "GETTYPE_FRIEND\020\002*X\n\rEPropertyType\022\016\n\nEPT"
      "_UNKNOW\020\000\022\020\n\014EPT_STRENGTH\020\001\022\017\n\013EPT_AGILI"
      "TY\020\002\022\024\n\020EPT_INTELLIGENCE\020\003*\236\001\n\020EGameElem"
      "entType\022\025\n\021EELEMENTTYPE_FIRE\020\000\022\026\n\022EELEME"
      "NTTYPE_LIGHT\020\001\022\025\n\021EELEMENTTYPE_WIND\020\002\022\024\n"
      "\020EELEMENTTYPE_ICE\020\003\022\027\n\023EELEMENTTYPE_POIS"
      "ON\020\004\022\025\n\021EELEMENTTYPE_DARK\020\005b\006proto3"
  };
  ::google::protobuf::DescriptorPool::InternalAddGeneratedFile(
      descriptor, 10675);
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedFile(
    "NFDefine.proto", &protobuf_RegisterTypes);
}

void AddDescriptors() {
  static ::google::protobuf::internal::once_flag once;
  ::google::protobuf::internal::call_once(once, AddDescriptorsImpl);
}
// Force AddDescriptors() to be called at dynamic initialization time.
struct StaticDescriptorInitializer {
  StaticDescriptorInitializer() {
    AddDescriptors();
  }
} static_descriptor_initializer;
}  // namespace protobuf_NFDefine_2eproto
namespace NFMsg {
const ::google::protobuf::EnumDescriptor* EGameEventCode_descriptor() {
  protobuf_NFDefine_2eproto::protobuf_AssignDescriptorsOnce();
  return protobuf_NFDefine_2eproto::file_level_enum_descriptors[0];
}
bool EGameEventCode_IsValid(int value) {
  switch (value) {
    case 0:
    case 1:
    case 2:
    case 3:
    case 4:
    case 5:
    case 6:
    case 7:
    case 8:
    case 9:
    case 10:
    case 110:
    case 111:
    case 112:
    case 113:
    case 114:
    case 115:
    case 116:
    case 117:
    case 118:
    case 119:
    case 120:
    case 121:
    case 122:
    case 123:
    case 124:
    case 125:
    case 126:
    case 127:
    case 128:
    case 129:
    case 130:
    case 131:
    case 132:
    case 133:
    case 134:
    case 135:
    case 136:
    case 137:
    case 138:
    case 139:
    case 140:
    case 141:
    case 142:
    case 143:
    case 200:
    case 201:
    case 202:
      return true;
    default:
      return false;
  }
}

const ::google::protobuf::EnumDescriptor* ESynMsgID_descriptor() {
  protobuf_NFDefine_2eproto::protobuf_AssignDescriptorsOnce();
  return protobuf_NFDefine_2eproto::file_level_enum_descriptors[1];
}
bool ESynMsgID_IsValid(int value) {
  switch (value) {
    case 0:
      return true;
    default:
      return false;
  }
}

const ::google::protobuf::EnumDescriptor* EGameMsgID_descriptor() {
  protobuf_NFDefine_2eproto::protobuf_AssignDescriptorsOnce();
  return protobuf_NFDefine_2eproto::file_level_enum_descriptors[2];
}
bool EGameMsgID_IsValid(int value) {
  switch (value) {
    case 0:
    case 1:
    case 2:
    case 3:
    case 10:
    case 11:
    case 12:
    case 20:
    case 21:
    case 22:
    case 30:
    case 31:
    case 32:
    case 40:
    case 41:
    case 42:
    case 60:
    case 61:
    case 62:
    case 70:
    case 90:
    case 100:
    case 101:
    case 102:
    case 103:
    case 110:
    case 111:
    case 112:
    case 113:
    case 114:
    case 120:
    case 122:
    case 130:
    case 131:
    case 132:
    case 133:
    case 134:
    case 135:
    case 136:
    case 140:
    case 141:
    case 142:
    case 143:
    case 150:
    case 151:
    case 152:
    case 153:
    case 154:
    case 155:
    case 156:
    case 157:
    case 158:
    case 159:
    case 160:
    case 200:
    case 201:
    case 202:
    case 203:
    case 210:
    case 211:
    case 212:
    case 214:
    case 215:
    case 216:
    case 220:
    case 221:
    case 222:
    case 223:
    case 224:
    case 226:
    case 227:
    case 228:
    case 229:
    case 250:
    case 251:
    case 260:
    case 300:
    case 1220:
    case 1221:
    case 1222:
    case 1223:
    case 1224:
    case 1225:
    case 1230:
    case 1231:
    case 1232:
    case 1233:
    case 1234:
    case 1235:
    case 1236:
    case 1237:
    case 1240:
    case 1241:
    case 1242:
    case 1243:
    case 1244:
    case 1245:
    case 1246:
    case 1247:
    case 1250:
    case 1251:
    case 1252:
    case 1253:
    case 1254:
    case 1255:
    case 1256:
    case 1257:
    case 1290:
    case 1291:
    case 1300:
    case 1301:
    case 1302:
    case 1303:
    case 1304:
    case 1305:
    case 1306:
    case 1307:
    case 1308:
    case 1309:
    case 1310:
    case 1400:
    case 1401:
    case 1402:
    case 1403:
    case 1404:
    case 1405:
    case 1406:
    case 1407:
    case 1408:
    case 1409:
    case 1410:
    case 1411:
    case 1450:
    case 1451:
    case 1500:
    case 1501:
    case 1502:
    case 1503:
    case 1504:
    case 1505:
    case 1506:
    case 1507:
    case 1508:
    case 1509:
    case 1520:
    case 1521:
    case 1522:
    case 1700:
    case 1701:
    case 1702:
    case 1800:
    case 1801:
    case 1802:
    case 1803:
    case 1810:
    case 1811:
    case 1812:
    case 1814:
    case 1840:
    case 1841:
    case 1860:
    case 1861:
    case 1862:
    case 1863:
    case 1864:
    case 1865:
    case 1866:
    case 1867:
    case 1868:
    case 1869:
    case 1870:
    case 1900:
    case 1901:
    case 1902:
    case 1903:
    case 1910:
    case 1911:
    case 1912:
    case 1913:
    case 1914:
    case 1915:
    case 1916:
    case 1917:
    case 1918:
    case 1919:
    case 5000:
    case 5001:
    case 5010:
    case 10000:
    case 10001:
    case 10002:
    case 10003:
    case 10004:
    case 10005:
    case 10006:
    case 10007:
    case 10008:
    case 10200:
    case 20000:
    case 20001:
    case 20002:
    case 20003:
    case 20101:
    case 20102:
    case 20103:
    case 30000:
    case 30001:
    case 30002:
    case 30003:
      return true;
    default:
      return false;
  }
}

const ::google::protobuf::EnumDescriptor* ESkillType_descriptor() {
  protobuf_NFDefine_2eproto::protobuf_AssignDescriptorsOnce();
  return protobuf_NFDefine_2eproto::file_level_enum_descriptors[3];
}
bool ESkillType_IsValid(int value) {
  switch (value) {
    case 0:
    case 1:
    case 2:
    case 3:
    case 4:
    case 5:
      return true;
    default:
      return false;
  }
}

const ::google::protobuf::EnumDescriptor* EItemType_descriptor() {
  protobuf_NFDefine_2eproto::protobuf_AssignDescriptorsOnce();
  return protobuf_NFDefine_2eproto::file_level_enum_descriptors[4];
}
bool EItemType_IsValid(int value) {
  switch (value) {
    case 0:
    case 1:
    case 2:
    case 3:
      return true;
    default:
      return false;
  }
}

const ::google::protobuf::EnumDescriptor* EGameEquipSubType_descriptor() {
  protobuf_NFDefine_2eproto::protobuf_AssignDescriptorsOnce();
  return protobuf_NFDefine_2eproto::file_level_enum_descriptors[5];
}
bool EGameEquipSubType_IsValid(int value) {
  switch (value) {
    case 0:
    case 1:
    case 2:
    case 3:
    case 4:
    case 5:
      return true;
    default:
      return false;
  }
}

const ::google::protobuf::EnumDescriptor* EGameGemSubType_descriptor() {
  protobuf_NFDefine_2eproto::protobuf_AssignDescriptorsOnce();
  return protobuf_NFDefine_2eproto::file_level_enum_descriptors[6];
}
bool EGameGemSubType_IsValid(int value) {
  switch (value) {
    case 0:
    case 1:
    case 3:
    case 4:
    case 5:
    case 6:
    case 7:
    case 8:
      return true;
    default:
      return false;
  }
}

const ::google::protobuf::EnumDescriptor* EGameSupplySubType_descriptor() {
  protobuf_NFDefine_2eproto::protobuf_AssignDescriptorsOnce();
  return protobuf_NFDefine_2eproto::file_level_enum_descriptors[7];
}
bool EGameSupplySubType_IsValid(int value) {
  switch (value) {
    case 0:
    case 1:
    case 2:
    case 3:
    case 4:
    case 5:
    case 6:
    case 7:
    case 8:
      return true;
    default:
      return false;
  }
}

const ::google::protobuf::EnumDescriptor* EGameScrollSubType_descriptor() {
  protobuf_NFDefine_2eproto::protobuf_AssignDescriptorsOnce();
  return protobuf_NFDefine_2eproto::file_level_enum_descriptors[8];
}
bool EGameScrollSubType_IsValid(int value) {
  switch (value) {
    case 0:
    case 1:
    case 2:
    case 3:
    case 4:
      return true;
    default:
      return false;
  }
}

const ::google::protobuf::EnumDescriptor* EGameItemExpiredType_descriptor() {
  protobuf_NFDefine_2eproto::protobuf_AssignDescriptorsOnce();
  return protobuf_NFDefine_2eproto::file_level_enum_descriptors[9];
}
bool EGameItemExpiredType_IsValid(int value) {
  switch (value) {
    case 0:
    case 1:
    case 2:
    case 3:
      return true;
    default:
      return false;
  }
}

const ::google::protobuf::EnumDescriptor* EDrawDropItemState_descriptor() {
  protobuf_NFDefine_2eproto::protobuf_AssignDescriptorsOnce();
  return protobuf_NFDefine_2eproto::file_level_enum_descriptors[10];
}
bool EDrawDropItemState_IsValid(int value) {
  switch (value) {
    case 0:
    case 1:
    case 2:
      return true;
    default:
      return false;
  }
}

const ::google::protobuf::EnumDescriptor* EGuildPowerType_descriptor() {
  protobuf_NFDefine_2eproto::protobuf_AssignDescriptorsOnce();
  return protobuf_NFDefine_2eproto::file_level_enum_descriptors[11];
}
bool EGuildPowerType_IsValid(int value) {
  switch (value) {
    case 0:
    case 1:
    case 2:
      return true;
    default:
      return false;
  }
}

const ::google::protobuf::EnumDescriptor* ETaskState_descriptor() {
  protobuf_NFDefine_2eproto::protobuf_AssignDescriptorsOnce();
  return protobuf_NFDefine_2eproto::file_level_enum_descriptors[12];
}
bool ETaskState_IsValid(int value) {
  switch (value) {
    case 0:
    case 1:
    case 2:
    case 3:
      return true;
    default:
      return false;
  }
}

const ::google::protobuf::EnumDescriptor* ETaskType_descriptor() {
  protobuf_NFDefine_2eproto::protobuf_AssignDescriptorsOnce();
  return protobuf_NFDefine_2eproto::file_level_enum_descriptors[13];
}
bool ETaskType_IsValid(int value) {
  switch (value) {
    case 0:
    case 1:
    case 2:
    case 3:
    case 4:
    case 5:
    case 6:
    case 7:
    case 8:
    case 9:
      return true;
    default:
      return false;
  }
}

const ::google::protobuf::EnumDescriptor* ESceneType_descriptor() {
  protobuf_NFDefine_2eproto::protobuf_AssignDescriptorsOnce();
  return protobuf_NFDefine_2eproto::file_level_enum_descriptors[14];
}
bool ESceneType_IsValid(int value) {
  switch (value) {
    case 0:
    case 1:
    case 2:
    case 3:
    case 4:
      return true;
    default:
      return false;
  }
}

const ::google::protobuf::EnumDescriptor* EPVPType_descriptor() {
  protobuf_NFDefine_2eproto::protobuf_AssignDescriptorsOnce();
  return protobuf_NFDefine_2eproto::file_level_enum_descriptors[15];
}
bool EPVPType_IsValid(int value) {
  switch (value) {
    case 0:
    case 1:
    case 2:
    case 3:
    case 4:
    case 5:
      return true;
    default:
      return false;
  }
}

const ::google::protobuf::EnumDescriptor* EShopType_descriptor() {
  protobuf_NFDefine_2eproto::protobuf_AssignDescriptorsOnce();
  return protobuf_NFDefine_2eproto::file_level_enum_descriptors[16];
}
bool EShopType_IsValid(int value) {
  switch (value) {
    case 0:
    case 1:
    case 2:
    case 3:
    case 5:
    case 6:
    case 7:
      return true;
    default:
      return false;
  }
}

const ::google::protobuf::EnumDescriptor* ERankType_descriptor() {
  protobuf_NFDefine_2eproto::protobuf_AssignDescriptorsOnce();
  return protobuf_NFDefine_2eproto::file_level_enum_descriptors[17];
}
bool ERankType_IsValid(int value) {
  switch (value) {
    case 0:
    case 1:
    case 2:
    case 3:
    case 4:
    case 5:
      return true;
    default:
      return false;
  }
}

const ::google::protobuf::EnumDescriptor* ENPCType_descriptor() {
  protobuf_NFDefine_2eproto::protobuf_AssignDescriptorsOnce();
  return protobuf_NFDefine_2eproto::file_level_enum_descriptors[18];
}
bool ENPCType_IsValid(int value) {
  switch (value) {
    case 0:
    case 1:
    case 2:
      return true;
    default:
      return false;
  }
}

const ::google::protobuf::EnumDescriptor* ESubNPCType_TURRET_descriptor() {
  protobuf_NFDefine_2eproto::protobuf_AssignDescriptorsOnce();
  return protobuf_NFDefine_2eproto::file_level_enum_descriptors[19];
}
bool ESubNPCType_TURRET_IsValid(int value) {
  switch (value) {
    case 0:
    case 1:
    case 2:
    case 3:
    case 4:
    case 10:
    case 11:
    case 12:
    case 13:
    case 14:
    case 15:
    case 16:
    case 17:
    case 18:
    case 19:
    case 20:
    case 21:
    case 22:
    case 23:
    case 24:
    case 100:
    case 101:
    case 102:
      return true;
    default:
      return false;
  }
}

const ::google::protobuf::EnumDescriptor* EMeleeType_descriptor() {
  protobuf_NFDefine_2eproto::protobuf_AssignDescriptorsOnce();
  return protobuf_NFDefine_2eproto::file_level_enum_descriptors[20];
}
bool EMeleeType_IsValid(int value) {
  switch (value) {
    case 0:
    case 1:
    case 2:
      return true;
    default:
      return false;
  }
}

const ::google::protobuf::EnumDescriptor* EEffectObjType_descriptor() {
  protobuf_NFDefine_2eproto::protobuf_AssignDescriptorsOnce();
  return protobuf_NFDefine_2eproto::file_level_enum_descriptors[21];
}
bool EEffectObjType_IsValid(int value) {
  switch (value) {
    case 0:
    case 1:
    case 2:
      return true;
    default:
      return false;
  }
}

const ::google::protobuf::EnumDescriptor* EPropertyType_descriptor() {
  protobuf_NFDefine_2eproto::protobuf_AssignDescriptorsOnce();
  return protobuf_NFDefine_2eproto::file_level_enum_descriptors[22];
}
bool EPropertyType_IsValid(int value) {
  switch (value) {
    case 0:
    case 1:
    case 2:
    case 3:
      return true;
    default:
      return false;
  }
}

const ::google::protobuf::EnumDescriptor* EGameElementType_descriptor() {
  protobuf_NFDefine_2eproto::protobuf_AssignDescriptorsOnce();
  return protobuf_NFDefine_2eproto::file_level_enum_descriptors[23];
}
bool EGameElementType_IsValid(int value) {
  switch (value) {
    case 0:
    case 1:
    case 2:
    case 3:
    case 4:
    case 5:
      return true;
    default:
      return false;
  }
}


// @@protoc_insertion_point(namespace_scope)
}  // namespace NFMsg
namespace google {
namespace protobuf {
}  // namespace protobuf
}  // namespace google

// @@protoc_insertion_point(global_scope)
