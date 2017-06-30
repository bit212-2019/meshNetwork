// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: nodeInterface.proto

#define INTERNAL_SUPPRESS_PROTOBUF_FIELD_DEPRECATION
#include "nodeInterface.pb.h"

#include <algorithm>

#include <google/protobuf/stubs/common.h>
#include <google/protobuf/stubs/port.h>
#include <google/protobuf/stubs/once.h>
#include <google/protobuf/io/coded_stream.h>
#include <google/protobuf/wire_format_lite_inl.h>
#include <google/protobuf/descriptor.h>
#include <google/protobuf/generated_message_reflection.h>
#include <google/protobuf/reflection_ops.h>
#include <google/protobuf/wire_format.h>
// @@protoc_insertion_point(includes)

namespace nodeInterface {

namespace {

const ::google::protobuf::Descriptor* Command_descriptor_ = NULL;
const ::google::protobuf::internal::GeneratedMessageReflection*
  Command_reflection_ = NULL;
const ::google::protobuf::Descriptor* NodeThreadMsg_descriptor_ = NULL;
const ::google::protobuf::internal::GeneratedMessageReflection*
  NodeThreadMsg_reflection_ = NULL;
const ::google::protobuf::EnumDescriptor* NodeThreadMsg_NodeMsgType_descriptor_ = NULL;

}  // namespace


void protobuf_AssignDesc_nodeInterface_2eproto() {
  protobuf_AddDesc_nodeInterface_2eproto();
  const ::google::protobuf::FileDescriptor* file =
    ::google::protobuf::DescriptorPool::generated_pool()->FindFileByName(
      "nodeInterface.proto");
  GOOGLE_CHECK(file != NULL);
  Command_descriptor_ = file->message_type(0);
  static const int Command_offsets_[2] = {
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(Command, txinterval_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(Command, msgbytes_),
  };
  Command_reflection_ =
    ::google::protobuf::internal::GeneratedMessageReflection::NewGeneratedMessageReflection(
      Command_descriptor_,
      Command::default_instance_,
      Command_offsets_,
      -1,
      -1,
      -1,
      sizeof(Command),
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(Command, _internal_metadata_),
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(Command, _is_default_instance_));
  NodeThreadMsg_descriptor_ = file->message_type(1);
  static const int NodeThreadMsg_offsets_[6] = {
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(NodeThreadMsg, type_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(NodeThreadMsg, timestamp_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(NodeThreadMsg, cmdrelay_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(NodeThreadMsg, cmds_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(NodeThreadMsg, rcvdbytes_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(NodeThreadMsg, datablock_),
  };
  NodeThreadMsg_reflection_ =
    ::google::protobuf::internal::GeneratedMessageReflection::NewGeneratedMessageReflection(
      NodeThreadMsg_descriptor_,
      NodeThreadMsg::default_instance_,
      NodeThreadMsg_offsets_,
      -1,
      -1,
      -1,
      sizeof(NodeThreadMsg),
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(NodeThreadMsg, _internal_metadata_),
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(NodeThreadMsg, _is_default_instance_));
  NodeThreadMsg_NodeMsgType_descriptor_ = NodeThreadMsg_descriptor_->enum_type(0);
}

namespace {

GOOGLE_PROTOBUF_DECLARE_ONCE(protobuf_AssignDescriptors_once_);
inline void protobuf_AssignDescriptorsOnce() {
  ::google::protobuf::GoogleOnceInit(&protobuf_AssignDescriptors_once_,
                 &protobuf_AssignDesc_nodeInterface_2eproto);
}

void protobuf_RegisterTypes(const ::std::string&) {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedMessage(
      Command_descriptor_, &Command::default_instance());
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedMessage(
      NodeThreadMsg_descriptor_, &NodeThreadMsg::default_instance());
}

}  // namespace

void protobuf_ShutdownFile_nodeInterface_2eproto() {
  delete Command::default_instance_;
  delete Command_reflection_;
  delete NodeThreadMsg::default_instance_;
  delete NodeThreadMsg_reflection_;
}

void protobuf_AddDesc_nodeInterface_2eproto() {
  static bool already_here = false;
  if (already_here) return;
  already_here = true;
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  ::google::protobuf::DescriptorPool::InternalAddGeneratedFile(
    "\n\023nodeInterface.proto\022\rnodeInterface\"/\n\007"
    "Command\022\022\n\ntxInterval\030\001 \001(\002\022\020\n\010msgBytes\030"
    "\002 \001(\014\"\333\001\n\rNodeThreadMsg\0226\n\004type\030\001 \001(\0162(."
    "nodeInterface.NodeThreadMsg.NodeMsgType\022"
    "\021\n\ttimestamp\030\002 \001(\001\022\020\n\010cmdRelay\030\003 \003(\014\022$\n\004"
    "cmds\030\004 \003(\0132\026.nodeInterface.Command\022\021\n\trc"
    "vdBytes\030\005 \001(\014\022\021\n\tdataBlock\030\006 \001(\014\"!\n\013Node"
    "MsgType\022\010\n\004NODE\020\000\022\010\n\004COMM\020\001b\006proto3", 315);
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedFile(
    "nodeInterface.proto", &protobuf_RegisterTypes);
  Command::default_instance_ = new Command();
  NodeThreadMsg::default_instance_ = new NodeThreadMsg();
  Command::default_instance_->InitAsDefaultInstance();
  NodeThreadMsg::default_instance_->InitAsDefaultInstance();
  ::google::protobuf::internal::OnShutdown(&protobuf_ShutdownFile_nodeInterface_2eproto);
}

// Force AddDescriptors() to be called at static initialization time.
struct StaticDescriptorInitializer_nodeInterface_2eproto {
  StaticDescriptorInitializer_nodeInterface_2eproto() {
    protobuf_AddDesc_nodeInterface_2eproto();
  }
} static_descriptor_initializer_nodeInterface_2eproto_;

namespace {

static void MergeFromFail(int line) GOOGLE_ATTRIBUTE_COLD;
static void MergeFromFail(int line) {
  GOOGLE_CHECK(false) << __FILE__ << ":" << line;
}

}  // namespace


// ===================================================================

#if !defined(_MSC_VER) || _MSC_VER >= 1900
const int Command::kTxIntervalFieldNumber;
const int Command::kMsgBytesFieldNumber;
#endif  // !defined(_MSC_VER) || _MSC_VER >= 1900

Command::Command()
  : ::google::protobuf::Message(), _internal_metadata_(NULL) {
  SharedCtor();
  // @@protoc_insertion_point(constructor:nodeInterface.Command)
}

void Command::InitAsDefaultInstance() {
  _is_default_instance_ = true;
}

Command::Command(const Command& from)
  : ::google::protobuf::Message(),
    _internal_metadata_(NULL) {
  SharedCtor();
  MergeFrom(from);
  // @@protoc_insertion_point(copy_constructor:nodeInterface.Command)
}

void Command::SharedCtor() {
    _is_default_instance_ = false;
  ::google::protobuf::internal::GetEmptyString();
  _cached_size_ = 0;
  txinterval_ = 0;
  msgbytes_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}

Command::~Command() {
  // @@protoc_insertion_point(destructor:nodeInterface.Command)
  SharedDtor();
}

void Command::SharedDtor() {
  msgbytes_.DestroyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  if (this != default_instance_) {
  }
}

void Command::SetCachedSize(int size) const {
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const ::google::protobuf::Descriptor* Command::descriptor() {
  protobuf_AssignDescriptorsOnce();
  return Command_descriptor_;
}

const Command& Command::default_instance() {
  if (default_instance_ == NULL) protobuf_AddDesc_nodeInterface_2eproto();
  return *default_instance_;
}

Command* Command::default_instance_ = NULL;

Command* Command::New(::google::protobuf::Arena* arena) const {
  Command* n = new Command;
  if (arena != NULL) {
    arena->Own(n);
  }
  return n;
}

void Command::Clear() {
  txinterval_ = 0;
  msgbytes_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}

bool Command::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!(EXPRESSION)) goto failure
  ::google::protobuf::uint32 tag;
  // @@protoc_insertion_point(parse_start:nodeInterface.Command)
  for (;;) {
    ::std::pair< ::google::protobuf::uint32, bool> p = input->ReadTagWithCutoff(127);
    tag = p.first;
    if (!p.second) goto handle_unusual;
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // optional float txInterval = 1;
      case 1: {
        if (tag == 13) {
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   float, ::google::protobuf::internal::WireFormatLite::TYPE_FLOAT>(
                 input, &txinterval_)));

        } else {
          goto handle_unusual;
        }
        if (input->ExpectTag(18)) goto parse_msgBytes;
        break;
      }

      // optional bytes msgBytes = 2;
      case 2: {
        if (tag == 18) {
         parse_msgBytes:
          DO_(::google::protobuf::internal::WireFormatLite::ReadBytes(
                input, this->mutable_msgbytes()));
        } else {
          goto handle_unusual;
        }
        if (input->ExpectAtEnd()) goto success;
        break;
      }

      default: {
      handle_unusual:
        if (tag == 0 ||
            ::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_END_GROUP) {
          goto success;
        }
        DO_(::google::protobuf::internal::WireFormatLite::SkipField(input, tag));
        break;
      }
    }
  }
success:
  // @@protoc_insertion_point(parse_success:nodeInterface.Command)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:nodeInterface.Command)
  return false;
#undef DO_
}

void Command::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:nodeInterface.Command)
  // optional float txInterval = 1;
  if (this->txinterval() != 0) {
    ::google::protobuf::internal::WireFormatLite::WriteFloat(1, this->txinterval(), output);
  }

  // optional bytes msgBytes = 2;
  if (this->msgbytes().size() > 0) {
    ::google::protobuf::internal::WireFormatLite::WriteBytesMaybeAliased(
      2, this->msgbytes(), output);
  }

  // @@protoc_insertion_point(serialize_end:nodeInterface.Command)
}

::google::protobuf::uint8* Command::SerializeWithCachedSizesToArray(
    ::google::protobuf::uint8* target) const {
  // @@protoc_insertion_point(serialize_to_array_start:nodeInterface.Command)
  // optional float txInterval = 1;
  if (this->txinterval() != 0) {
    target = ::google::protobuf::internal::WireFormatLite::WriteFloatToArray(1, this->txinterval(), target);
  }

  // optional bytes msgBytes = 2;
  if (this->msgbytes().size() > 0) {
    target =
      ::google::protobuf::internal::WireFormatLite::WriteBytesToArray(
        2, this->msgbytes(), target);
  }

  // @@protoc_insertion_point(serialize_to_array_end:nodeInterface.Command)
  return target;
}

int Command::ByteSize() const {
  int total_size = 0;

  // optional float txInterval = 1;
  if (this->txinterval() != 0) {
    total_size += 1 + 4;
  }

  // optional bytes msgBytes = 2;
  if (this->msgbytes().size() > 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::BytesSize(
        this->msgbytes());
  }

  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = total_size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
  return total_size;
}

void Command::MergeFrom(const ::google::protobuf::Message& from) {
  if (GOOGLE_PREDICT_FALSE(&from == this)) MergeFromFail(__LINE__);
  const Command* source = 
      ::google::protobuf::internal::DynamicCastToGenerated<const Command>(
          &from);
  if (source == NULL) {
    ::google::protobuf::internal::ReflectionOps::Merge(from, this);
  } else {
    MergeFrom(*source);
  }
}

void Command::MergeFrom(const Command& from) {
  if (GOOGLE_PREDICT_FALSE(&from == this)) MergeFromFail(__LINE__);
  if (from.txinterval() != 0) {
    set_txinterval(from.txinterval());
  }
  if (from.msgbytes().size() > 0) {

    msgbytes_.AssignWithDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), from.msgbytes_);
  }
}

void Command::CopyFrom(const ::google::protobuf::Message& from) {
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void Command::CopyFrom(const Command& from) {
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool Command::IsInitialized() const {

  return true;
}

void Command::Swap(Command* other) {
  if (other == this) return;
  InternalSwap(other);
}
void Command::InternalSwap(Command* other) {
  std::swap(txinterval_, other->txinterval_);
  msgbytes_.Swap(&other->msgbytes_);
  _internal_metadata_.Swap(&other->_internal_metadata_);
  std::swap(_cached_size_, other->_cached_size_);
}

::google::protobuf::Metadata Command::GetMetadata() const {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::Metadata metadata;
  metadata.descriptor = Command_descriptor_;
  metadata.reflection = Command_reflection_;
  return metadata;
}

#if PROTOBUF_INLINE_NOT_IN_HEADERS
// Command

// optional float txInterval = 1;
void Command::clear_txinterval() {
  txinterval_ = 0;
}
 float Command::txinterval() const {
  // @@protoc_insertion_point(field_get:nodeInterface.Command.txInterval)
  return txinterval_;
}
 void Command::set_txinterval(float value) {
  
  txinterval_ = value;
  // @@protoc_insertion_point(field_set:nodeInterface.Command.txInterval)
}

// optional bytes msgBytes = 2;
void Command::clear_msgbytes() {
  msgbytes_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
 const ::std::string& Command::msgbytes() const {
  // @@protoc_insertion_point(field_get:nodeInterface.Command.msgBytes)
  return msgbytes_.GetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
 void Command::set_msgbytes(const ::std::string& value) {
  
  msgbytes_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:nodeInterface.Command.msgBytes)
}
 void Command::set_msgbytes(const char* value) {
  
  msgbytes_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:nodeInterface.Command.msgBytes)
}
 void Command::set_msgbytes(const void* value, size_t size) {
  
  msgbytes_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:nodeInterface.Command.msgBytes)
}
 ::std::string* Command::mutable_msgbytes() {
  
  // @@protoc_insertion_point(field_mutable:nodeInterface.Command.msgBytes)
  return msgbytes_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
 ::std::string* Command::release_msgbytes() {
  
  return msgbytes_.ReleaseNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
 void Command::set_allocated_msgbytes(::std::string* msgbytes) {
  if (msgbytes != NULL) {
    
  } else {
    
  }
  msgbytes_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), msgbytes);
  // @@protoc_insertion_point(field_set_allocated:nodeInterface.Command.msgBytes)
}

#endif  // PROTOBUF_INLINE_NOT_IN_HEADERS

// ===================================================================

const ::google::protobuf::EnumDescriptor* NodeThreadMsg_NodeMsgType_descriptor() {
  protobuf_AssignDescriptorsOnce();
  return NodeThreadMsg_NodeMsgType_descriptor_;
}
bool NodeThreadMsg_NodeMsgType_IsValid(int value) {
  switch(value) {
    case 0:
    case 1:
      return true;
    default:
      return false;
  }
}

#if !defined(_MSC_VER) || _MSC_VER >= 1900
const NodeThreadMsg_NodeMsgType NodeThreadMsg::NODE;
const NodeThreadMsg_NodeMsgType NodeThreadMsg::COMM;
const NodeThreadMsg_NodeMsgType NodeThreadMsg::NodeMsgType_MIN;
const NodeThreadMsg_NodeMsgType NodeThreadMsg::NodeMsgType_MAX;
const int NodeThreadMsg::NodeMsgType_ARRAYSIZE;
#endif  // !defined(_MSC_VER) || _MSC_VER >= 1900
#if !defined(_MSC_VER) || _MSC_VER >= 1900
const int NodeThreadMsg::kTypeFieldNumber;
const int NodeThreadMsg::kTimestampFieldNumber;
const int NodeThreadMsg::kCmdRelayFieldNumber;
const int NodeThreadMsg::kCmdsFieldNumber;
const int NodeThreadMsg::kRcvdBytesFieldNumber;
const int NodeThreadMsg::kDataBlockFieldNumber;
#endif  // !defined(_MSC_VER) || _MSC_VER >= 1900

NodeThreadMsg::NodeThreadMsg()
  : ::google::protobuf::Message(), _internal_metadata_(NULL) {
  SharedCtor();
  // @@protoc_insertion_point(constructor:nodeInterface.NodeThreadMsg)
}

void NodeThreadMsg::InitAsDefaultInstance() {
  _is_default_instance_ = true;
}

NodeThreadMsg::NodeThreadMsg(const NodeThreadMsg& from)
  : ::google::protobuf::Message(),
    _internal_metadata_(NULL) {
  SharedCtor();
  MergeFrom(from);
  // @@protoc_insertion_point(copy_constructor:nodeInterface.NodeThreadMsg)
}

void NodeThreadMsg::SharedCtor() {
    _is_default_instance_ = false;
  ::google::protobuf::internal::GetEmptyString();
  _cached_size_ = 0;
  type_ = 0;
  timestamp_ = 0;
  rcvdbytes_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  datablock_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}

NodeThreadMsg::~NodeThreadMsg() {
  // @@protoc_insertion_point(destructor:nodeInterface.NodeThreadMsg)
  SharedDtor();
}

void NodeThreadMsg::SharedDtor() {
  rcvdbytes_.DestroyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  datablock_.DestroyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  if (this != default_instance_) {
  }
}

void NodeThreadMsg::SetCachedSize(int size) const {
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const ::google::protobuf::Descriptor* NodeThreadMsg::descriptor() {
  protobuf_AssignDescriptorsOnce();
  return NodeThreadMsg_descriptor_;
}

const NodeThreadMsg& NodeThreadMsg::default_instance() {
  if (default_instance_ == NULL) protobuf_AddDesc_nodeInterface_2eproto();
  return *default_instance_;
}

NodeThreadMsg* NodeThreadMsg::default_instance_ = NULL;

NodeThreadMsg* NodeThreadMsg::New(::google::protobuf::Arena* arena) const {
  NodeThreadMsg* n = new NodeThreadMsg;
  if (arena != NULL) {
    arena->Own(n);
  }
  return n;
}

void NodeThreadMsg::Clear() {
  type_ = 0;
  timestamp_ = 0;
  rcvdbytes_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  datablock_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  cmdrelay_.Clear();
  cmds_.Clear();
}

bool NodeThreadMsg::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!(EXPRESSION)) goto failure
  ::google::protobuf::uint32 tag;
  // @@protoc_insertion_point(parse_start:nodeInterface.NodeThreadMsg)
  for (;;) {
    ::std::pair< ::google::protobuf::uint32, bool> p = input->ReadTagWithCutoff(127);
    tag = p.first;
    if (!p.second) goto handle_unusual;
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // optional .nodeInterface.NodeThreadMsg.NodeMsgType type = 1;
      case 1: {
        if (tag == 8) {
          int value;
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   int, ::google::protobuf::internal::WireFormatLite::TYPE_ENUM>(
                 input, &value)));
          set_type(static_cast< ::nodeInterface::NodeThreadMsg_NodeMsgType >(value));
        } else {
          goto handle_unusual;
        }
        if (input->ExpectTag(17)) goto parse_timestamp;
        break;
      }

      // optional double timestamp = 2;
      case 2: {
        if (tag == 17) {
         parse_timestamp:
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   double, ::google::protobuf::internal::WireFormatLite::TYPE_DOUBLE>(
                 input, &timestamp_)));

        } else {
          goto handle_unusual;
        }
        if (input->ExpectTag(26)) goto parse_cmdRelay;
        break;
      }

      // repeated bytes cmdRelay = 3;
      case 3: {
        if (tag == 26) {
         parse_cmdRelay:
          DO_(::google::protobuf::internal::WireFormatLite::ReadBytes(
                input, this->add_cmdrelay()));
        } else {
          goto handle_unusual;
        }
        if (input->ExpectTag(26)) goto parse_cmdRelay;
        if (input->ExpectTag(34)) goto parse_cmds;
        break;
      }

      // repeated .nodeInterface.Command cmds = 4;
      case 4: {
        if (tag == 34) {
         parse_cmds:
          DO_(input->IncrementRecursionDepth());
         parse_loop_cmds:
          DO_(::google::protobuf::internal::WireFormatLite::ReadMessageNoVirtualNoRecursionDepth(
                input, add_cmds()));
        } else {
          goto handle_unusual;
        }
        if (input->ExpectTag(34)) goto parse_loop_cmds;
        input->UnsafeDecrementRecursionDepth();
        if (input->ExpectTag(42)) goto parse_rcvdBytes;
        break;
      }

      // optional bytes rcvdBytes = 5;
      case 5: {
        if (tag == 42) {
         parse_rcvdBytes:
          DO_(::google::protobuf::internal::WireFormatLite::ReadBytes(
                input, this->mutable_rcvdbytes()));
        } else {
          goto handle_unusual;
        }
        if (input->ExpectTag(50)) goto parse_dataBlock;
        break;
      }

      // optional bytes dataBlock = 6;
      case 6: {
        if (tag == 50) {
         parse_dataBlock:
          DO_(::google::protobuf::internal::WireFormatLite::ReadBytes(
                input, this->mutable_datablock()));
        } else {
          goto handle_unusual;
        }
        if (input->ExpectAtEnd()) goto success;
        break;
      }

      default: {
      handle_unusual:
        if (tag == 0 ||
            ::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_END_GROUP) {
          goto success;
        }
        DO_(::google::protobuf::internal::WireFormatLite::SkipField(input, tag));
        break;
      }
    }
  }
success:
  // @@protoc_insertion_point(parse_success:nodeInterface.NodeThreadMsg)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:nodeInterface.NodeThreadMsg)
  return false;
#undef DO_
}

void NodeThreadMsg::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:nodeInterface.NodeThreadMsg)
  // optional .nodeInterface.NodeThreadMsg.NodeMsgType type = 1;
  if (this->type() != 0) {
    ::google::protobuf::internal::WireFormatLite::WriteEnum(
      1, this->type(), output);
  }

  // optional double timestamp = 2;
  if (this->timestamp() != 0) {
    ::google::protobuf::internal::WireFormatLite::WriteDouble(2, this->timestamp(), output);
  }

  // repeated bytes cmdRelay = 3;
  for (int i = 0; i < this->cmdrelay_size(); i++) {
    ::google::protobuf::internal::WireFormatLite::WriteBytes(
      3, this->cmdrelay(i), output);
  }

  // repeated .nodeInterface.Command cmds = 4;
  for (unsigned int i = 0, n = this->cmds_size(); i < n; i++) {
    ::google::protobuf::internal::WireFormatLite::WriteMessageMaybeToArray(
      4, this->cmds(i), output);
  }

  // optional bytes rcvdBytes = 5;
  if (this->rcvdbytes().size() > 0) {
    ::google::protobuf::internal::WireFormatLite::WriteBytesMaybeAliased(
      5, this->rcvdbytes(), output);
  }

  // optional bytes dataBlock = 6;
  if (this->datablock().size() > 0) {
    ::google::protobuf::internal::WireFormatLite::WriteBytesMaybeAliased(
      6, this->datablock(), output);
  }

  // @@protoc_insertion_point(serialize_end:nodeInterface.NodeThreadMsg)
}

::google::protobuf::uint8* NodeThreadMsg::SerializeWithCachedSizesToArray(
    ::google::protobuf::uint8* target) const {
  // @@protoc_insertion_point(serialize_to_array_start:nodeInterface.NodeThreadMsg)
  // optional .nodeInterface.NodeThreadMsg.NodeMsgType type = 1;
  if (this->type() != 0) {
    target = ::google::protobuf::internal::WireFormatLite::WriteEnumToArray(
      1, this->type(), target);
  }

  // optional double timestamp = 2;
  if (this->timestamp() != 0) {
    target = ::google::protobuf::internal::WireFormatLite::WriteDoubleToArray(2, this->timestamp(), target);
  }

  // repeated bytes cmdRelay = 3;
  for (int i = 0; i < this->cmdrelay_size(); i++) {
    target = ::google::protobuf::internal::WireFormatLite::
      WriteBytesToArray(3, this->cmdrelay(i), target);
  }

  // repeated .nodeInterface.Command cmds = 4;
  for (unsigned int i = 0, n = this->cmds_size(); i < n; i++) {
    target = ::google::protobuf::internal::WireFormatLite::
      WriteMessageNoVirtualToArray(
        4, this->cmds(i), target);
  }

  // optional bytes rcvdBytes = 5;
  if (this->rcvdbytes().size() > 0) {
    target =
      ::google::protobuf::internal::WireFormatLite::WriteBytesToArray(
        5, this->rcvdbytes(), target);
  }

  // optional bytes dataBlock = 6;
  if (this->datablock().size() > 0) {
    target =
      ::google::protobuf::internal::WireFormatLite::WriteBytesToArray(
        6, this->datablock(), target);
  }

  // @@protoc_insertion_point(serialize_to_array_end:nodeInterface.NodeThreadMsg)
  return target;
}

int NodeThreadMsg::ByteSize() const {
  int total_size = 0;

  // optional .nodeInterface.NodeThreadMsg.NodeMsgType type = 1;
  if (this->type() != 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::EnumSize(this->type());
  }

  // optional double timestamp = 2;
  if (this->timestamp() != 0) {
    total_size += 1 + 8;
  }

  // optional bytes rcvdBytes = 5;
  if (this->rcvdbytes().size() > 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::BytesSize(
        this->rcvdbytes());
  }

  // optional bytes dataBlock = 6;
  if (this->datablock().size() > 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::BytesSize(
        this->datablock());
  }

  // repeated bytes cmdRelay = 3;
  total_size += 1 * this->cmdrelay_size();
  for (int i = 0; i < this->cmdrelay_size(); i++) {
    total_size += ::google::protobuf::internal::WireFormatLite::BytesSize(
      this->cmdrelay(i));
  }

  // repeated .nodeInterface.Command cmds = 4;
  total_size += 1 * this->cmds_size();
  for (int i = 0; i < this->cmds_size(); i++) {
    total_size +=
      ::google::protobuf::internal::WireFormatLite::MessageSizeNoVirtual(
        this->cmds(i));
  }

  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = total_size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
  return total_size;
}

void NodeThreadMsg::MergeFrom(const ::google::protobuf::Message& from) {
  if (GOOGLE_PREDICT_FALSE(&from == this)) MergeFromFail(__LINE__);
  const NodeThreadMsg* source = 
      ::google::protobuf::internal::DynamicCastToGenerated<const NodeThreadMsg>(
          &from);
  if (source == NULL) {
    ::google::protobuf::internal::ReflectionOps::Merge(from, this);
  } else {
    MergeFrom(*source);
  }
}

void NodeThreadMsg::MergeFrom(const NodeThreadMsg& from) {
  if (GOOGLE_PREDICT_FALSE(&from == this)) MergeFromFail(__LINE__);
  cmdrelay_.MergeFrom(from.cmdrelay_);
  cmds_.MergeFrom(from.cmds_);
  if (from.type() != 0) {
    set_type(from.type());
  }
  if (from.timestamp() != 0) {
    set_timestamp(from.timestamp());
  }
  if (from.rcvdbytes().size() > 0) {

    rcvdbytes_.AssignWithDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), from.rcvdbytes_);
  }
  if (from.datablock().size() > 0) {

    datablock_.AssignWithDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), from.datablock_);
  }
}

void NodeThreadMsg::CopyFrom(const ::google::protobuf::Message& from) {
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void NodeThreadMsg::CopyFrom(const NodeThreadMsg& from) {
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool NodeThreadMsg::IsInitialized() const {

  return true;
}

void NodeThreadMsg::Swap(NodeThreadMsg* other) {
  if (other == this) return;
  InternalSwap(other);
}
void NodeThreadMsg::InternalSwap(NodeThreadMsg* other) {
  std::swap(type_, other->type_);
  std::swap(timestamp_, other->timestamp_);
  cmdrelay_.UnsafeArenaSwap(&other->cmdrelay_);
  cmds_.UnsafeArenaSwap(&other->cmds_);
  rcvdbytes_.Swap(&other->rcvdbytes_);
  datablock_.Swap(&other->datablock_);
  _internal_metadata_.Swap(&other->_internal_metadata_);
  std::swap(_cached_size_, other->_cached_size_);
}

::google::protobuf::Metadata NodeThreadMsg::GetMetadata() const {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::Metadata metadata;
  metadata.descriptor = NodeThreadMsg_descriptor_;
  metadata.reflection = NodeThreadMsg_reflection_;
  return metadata;
}

#if PROTOBUF_INLINE_NOT_IN_HEADERS
// NodeThreadMsg

// optional .nodeInterface.NodeThreadMsg.NodeMsgType type = 1;
void NodeThreadMsg::clear_type() {
  type_ = 0;
}
 ::nodeInterface::NodeThreadMsg_NodeMsgType NodeThreadMsg::type() const {
  // @@protoc_insertion_point(field_get:nodeInterface.NodeThreadMsg.type)
  return static_cast< ::nodeInterface::NodeThreadMsg_NodeMsgType >(type_);
}
 void NodeThreadMsg::set_type(::nodeInterface::NodeThreadMsg_NodeMsgType value) {
  
  type_ = value;
  // @@protoc_insertion_point(field_set:nodeInterface.NodeThreadMsg.type)
}

// optional double timestamp = 2;
void NodeThreadMsg::clear_timestamp() {
  timestamp_ = 0;
}
 double NodeThreadMsg::timestamp() const {
  // @@protoc_insertion_point(field_get:nodeInterface.NodeThreadMsg.timestamp)
  return timestamp_;
}
 void NodeThreadMsg::set_timestamp(double value) {
  
  timestamp_ = value;
  // @@protoc_insertion_point(field_set:nodeInterface.NodeThreadMsg.timestamp)
}

// repeated bytes cmdRelay = 3;
int NodeThreadMsg::cmdrelay_size() const {
  return cmdrelay_.size();
}
void NodeThreadMsg::clear_cmdrelay() {
  cmdrelay_.Clear();
}
 const ::std::string& NodeThreadMsg::cmdrelay(int index) const {
  // @@protoc_insertion_point(field_get:nodeInterface.NodeThreadMsg.cmdRelay)
  return cmdrelay_.Get(index);
}
 ::std::string* NodeThreadMsg::mutable_cmdrelay(int index) {
  // @@protoc_insertion_point(field_mutable:nodeInterface.NodeThreadMsg.cmdRelay)
  return cmdrelay_.Mutable(index);
}
 void NodeThreadMsg::set_cmdrelay(int index, const ::std::string& value) {
  // @@protoc_insertion_point(field_set:nodeInterface.NodeThreadMsg.cmdRelay)
  cmdrelay_.Mutable(index)->assign(value);
}
 void NodeThreadMsg::set_cmdrelay(int index, const char* value) {
  cmdrelay_.Mutable(index)->assign(value);
  // @@protoc_insertion_point(field_set_char:nodeInterface.NodeThreadMsg.cmdRelay)
}
 void NodeThreadMsg::set_cmdrelay(int index, const void* value, size_t size) {
  cmdrelay_.Mutable(index)->assign(
    reinterpret_cast<const char*>(value), size);
  // @@protoc_insertion_point(field_set_pointer:nodeInterface.NodeThreadMsg.cmdRelay)
}
 ::std::string* NodeThreadMsg::add_cmdrelay() {
  return cmdrelay_.Add();
}
 void NodeThreadMsg::add_cmdrelay(const ::std::string& value) {
  cmdrelay_.Add()->assign(value);
  // @@protoc_insertion_point(field_add:nodeInterface.NodeThreadMsg.cmdRelay)
}
 void NodeThreadMsg::add_cmdrelay(const char* value) {
  cmdrelay_.Add()->assign(value);
  // @@protoc_insertion_point(field_add_char:nodeInterface.NodeThreadMsg.cmdRelay)
}
 void NodeThreadMsg::add_cmdrelay(const void* value, size_t size) {
  cmdrelay_.Add()->assign(reinterpret_cast<const char*>(value), size);
  // @@protoc_insertion_point(field_add_pointer:nodeInterface.NodeThreadMsg.cmdRelay)
}
 const ::google::protobuf::RepeatedPtrField< ::std::string>&
NodeThreadMsg::cmdrelay() const {
  // @@protoc_insertion_point(field_list:nodeInterface.NodeThreadMsg.cmdRelay)
  return cmdrelay_;
}
 ::google::protobuf::RepeatedPtrField< ::std::string>*
NodeThreadMsg::mutable_cmdrelay() {
  // @@protoc_insertion_point(field_mutable_list:nodeInterface.NodeThreadMsg.cmdRelay)
  return &cmdrelay_;
}

// repeated .nodeInterface.Command cmds = 4;
int NodeThreadMsg::cmds_size() const {
  return cmds_.size();
}
void NodeThreadMsg::clear_cmds() {
  cmds_.Clear();
}
const ::nodeInterface::Command& NodeThreadMsg::cmds(int index) const {
  // @@protoc_insertion_point(field_get:nodeInterface.NodeThreadMsg.cmds)
  return cmds_.Get(index);
}
::nodeInterface::Command* NodeThreadMsg::mutable_cmds(int index) {
  // @@protoc_insertion_point(field_mutable:nodeInterface.NodeThreadMsg.cmds)
  return cmds_.Mutable(index);
}
::nodeInterface::Command* NodeThreadMsg::add_cmds() {
  // @@protoc_insertion_point(field_add:nodeInterface.NodeThreadMsg.cmds)
  return cmds_.Add();
}
::google::protobuf::RepeatedPtrField< ::nodeInterface::Command >*
NodeThreadMsg::mutable_cmds() {
  // @@protoc_insertion_point(field_mutable_list:nodeInterface.NodeThreadMsg.cmds)
  return &cmds_;
}
const ::google::protobuf::RepeatedPtrField< ::nodeInterface::Command >&
NodeThreadMsg::cmds() const {
  // @@protoc_insertion_point(field_list:nodeInterface.NodeThreadMsg.cmds)
  return cmds_;
}

// optional bytes rcvdBytes = 5;
void NodeThreadMsg::clear_rcvdbytes() {
  rcvdbytes_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
 const ::std::string& NodeThreadMsg::rcvdbytes() const {
  // @@protoc_insertion_point(field_get:nodeInterface.NodeThreadMsg.rcvdBytes)
  return rcvdbytes_.GetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
 void NodeThreadMsg::set_rcvdbytes(const ::std::string& value) {
  
  rcvdbytes_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:nodeInterface.NodeThreadMsg.rcvdBytes)
}
 void NodeThreadMsg::set_rcvdbytes(const char* value) {
  
  rcvdbytes_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:nodeInterface.NodeThreadMsg.rcvdBytes)
}
 void NodeThreadMsg::set_rcvdbytes(const void* value, size_t size) {
  
  rcvdbytes_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:nodeInterface.NodeThreadMsg.rcvdBytes)
}
 ::std::string* NodeThreadMsg::mutable_rcvdbytes() {
  
  // @@protoc_insertion_point(field_mutable:nodeInterface.NodeThreadMsg.rcvdBytes)
  return rcvdbytes_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
 ::std::string* NodeThreadMsg::release_rcvdbytes() {
  
  return rcvdbytes_.ReleaseNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
 void NodeThreadMsg::set_allocated_rcvdbytes(::std::string* rcvdbytes) {
  if (rcvdbytes != NULL) {
    
  } else {
    
  }
  rcvdbytes_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), rcvdbytes);
  // @@protoc_insertion_point(field_set_allocated:nodeInterface.NodeThreadMsg.rcvdBytes)
}

// optional bytes dataBlock = 6;
void NodeThreadMsg::clear_datablock() {
  datablock_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
 const ::std::string& NodeThreadMsg::datablock() const {
  // @@protoc_insertion_point(field_get:nodeInterface.NodeThreadMsg.dataBlock)
  return datablock_.GetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
 void NodeThreadMsg::set_datablock(const ::std::string& value) {
  
  datablock_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:nodeInterface.NodeThreadMsg.dataBlock)
}
 void NodeThreadMsg::set_datablock(const char* value) {
  
  datablock_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:nodeInterface.NodeThreadMsg.dataBlock)
}
 void NodeThreadMsg::set_datablock(const void* value, size_t size) {
  
  datablock_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:nodeInterface.NodeThreadMsg.dataBlock)
}
 ::std::string* NodeThreadMsg::mutable_datablock() {
  
  // @@protoc_insertion_point(field_mutable:nodeInterface.NodeThreadMsg.dataBlock)
  return datablock_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
 ::std::string* NodeThreadMsg::release_datablock() {
  
  return datablock_.ReleaseNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
 void NodeThreadMsg::set_allocated_datablock(::std::string* datablock) {
  if (datablock != NULL) {
    
  } else {
    
  }
  datablock_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), datablock);
  // @@protoc_insertion_point(field_set_allocated:nodeInterface.NodeThreadMsg.dataBlock)
}

#endif  // PROTOBUF_INLINE_NOT_IN_HEADERS

// @@protoc_insertion_point(namespace_scope)

}  // namespace nodeInterface

// @@protoc_insertion_point(global_scope)