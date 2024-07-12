// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from yolov8_msgs:srv/YoloInference.idl
// generated code does not contain a copyright notice

#ifndef YOLOV8_MSGS__SRV__DETAIL__YOLO_INFERENCE__STRUCT_HPP_
#define YOLOV8_MSGS__SRV__DETAIL__YOLO_INFERENCE__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__yolov8_msgs__srv__YoloInference_Request __attribute__((deprecated))
#else
# define DEPRECATED__yolov8_msgs__srv__YoloInference_Request __declspec(deprecated)
#endif

namespace yolov8_msgs
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct YoloInference_Request_
{
  using Type = YoloInference_Request_<ContainerAllocator>;

  explicit YoloInference_Request_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->structure_needs_at_least_one_member = 0;
    }
  }

  explicit YoloInference_Request_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->structure_needs_at_least_one_member = 0;
    }
  }

  // field types and members
  using _structure_needs_at_least_one_member_type =
    uint8_t;
  _structure_needs_at_least_one_member_type structure_needs_at_least_one_member;


  // constant declarations

  // pointer types
  using RawPtr =
    yolov8_msgs::srv::YoloInference_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const yolov8_msgs::srv::YoloInference_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<yolov8_msgs::srv::YoloInference_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<yolov8_msgs::srv::YoloInference_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      yolov8_msgs::srv::YoloInference_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<yolov8_msgs::srv::YoloInference_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      yolov8_msgs::srv::YoloInference_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<yolov8_msgs::srv::YoloInference_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<yolov8_msgs::srv::YoloInference_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<yolov8_msgs::srv::YoloInference_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__yolov8_msgs__srv__YoloInference_Request
    std::shared_ptr<yolov8_msgs::srv::YoloInference_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__yolov8_msgs__srv__YoloInference_Request
    std::shared_ptr<yolov8_msgs::srv::YoloInference_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const YoloInference_Request_ & other) const
  {
    if (this->structure_needs_at_least_one_member != other.structure_needs_at_least_one_member) {
      return false;
    }
    return true;
  }
  bool operator!=(const YoloInference_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct YoloInference_Request_

// alias to use template instance with default allocator
using YoloInference_Request =
  yolov8_msgs::srv::YoloInference_Request_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace yolov8_msgs


// Include directives for member types
// Member 'roi'
#include "sensor_msgs/msg/detail/region_of_interest__struct.hpp"
// Member 'segmentation'
#include "sensor_msgs/msg/detail/image__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__yolov8_msgs__srv__YoloInference_Response __attribute__((deprecated))
#else
# define DEPRECATED__yolov8_msgs__srv__YoloInference_Response __declspec(deprecated)
#endif

namespace yolov8_msgs
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct YoloInference_Response_
{
  using Type = YoloInference_Response_<ContainerAllocator>;

  explicit YoloInference_Response_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : roi(_init),
    segmentation(_init)
  {
    (void)_init;
  }

  explicit YoloInference_Response_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : roi(_alloc, _init),
    segmentation(_alloc, _init)
  {
    (void)_init;
  }

  // field types and members
  using _roi_type =
    sensor_msgs::msg::RegionOfInterest_<ContainerAllocator>;
  _roi_type roi;
  using _segmentation_type =
    sensor_msgs::msg::Image_<ContainerAllocator>;
  _segmentation_type segmentation;

  // setters for named parameter idiom
  Type & set__roi(
    const sensor_msgs::msg::RegionOfInterest_<ContainerAllocator> & _arg)
  {
    this->roi = _arg;
    return *this;
  }
  Type & set__segmentation(
    const sensor_msgs::msg::Image_<ContainerAllocator> & _arg)
  {
    this->segmentation = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    yolov8_msgs::srv::YoloInference_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const yolov8_msgs::srv::YoloInference_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<yolov8_msgs::srv::YoloInference_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<yolov8_msgs::srv::YoloInference_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      yolov8_msgs::srv::YoloInference_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<yolov8_msgs::srv::YoloInference_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      yolov8_msgs::srv::YoloInference_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<yolov8_msgs::srv::YoloInference_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<yolov8_msgs::srv::YoloInference_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<yolov8_msgs::srv::YoloInference_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__yolov8_msgs__srv__YoloInference_Response
    std::shared_ptr<yolov8_msgs::srv::YoloInference_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__yolov8_msgs__srv__YoloInference_Response
    std::shared_ptr<yolov8_msgs::srv::YoloInference_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const YoloInference_Response_ & other) const
  {
    if (this->roi != other.roi) {
      return false;
    }
    if (this->segmentation != other.segmentation) {
      return false;
    }
    return true;
  }
  bool operator!=(const YoloInference_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct YoloInference_Response_

// alias to use template instance with default allocator
using YoloInference_Response =
  yolov8_msgs::srv::YoloInference_Response_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace yolov8_msgs

namespace yolov8_msgs
{

namespace srv
{

struct YoloInference
{
  using Request = yolov8_msgs::srv::YoloInference_Request;
  using Response = yolov8_msgs::srv::YoloInference_Response;
};

}  // namespace srv

}  // namespace yolov8_msgs

#endif  // YOLOV8_MSGS__SRV__DETAIL__YOLO_INFERENCE__STRUCT_HPP_
