#pragma once

#include <cstdint>
#include <string>
namespace Offsets {
    inline std::string ClientVersion = "version-145f189a6a974303";

    namespace AirProperties {
         inline constexpr uintptr_t AirDensity = 0x7F3A2B1C;
         inline constexpr uintptr_t GlobalWind = 0x3E5D8F2A;
    }

    namespace AnimationTrack {
         inline constexpr uintptr_t Animation = 0x2B8F4E7A;
         inline constexpr uintptr_t Animator = 0x9C3D6F8B;
         inline constexpr uintptr_t IsPlaying = 0x4E7A2C1D;
         inline constexpr uintptr_t Looped = 0x8F3B6A2E;
         inline constexpr uintptr_t Speed = 0x1C4D8F3A;
         inline constexpr uintptr_t TimePosition = 0x6E2B9F4C;
    }

    namespace Animator {
         inline constexpr uintptr_t ActiveAnimations = 0x3D8F2B7E;
    }

    namespace Atmosphere {
         inline constexpr uintptr_t Color = 0x5A8C3F2E;
         inline constexpr uintptr_t Decay = 0x9B4E2D7F;
         inline constexpr uintptr_t Density = 0x2C7F4A3E;
         inline constexpr uintptr_t Glare = 0x8E3B6F2A;
         inline constexpr uintptr_t Haze = 0x4D9F2C8B;
         inline constexpr uintptr_t Offset = 0x7A2E4B3F;
    }

    namespace Attachment {
         inline constexpr uintptr_t Position = 0x3F8B2E7A;
    }

    namespace Attribute {
         inline constexpr uintptr_t Key = 0x8A2C4F7E;
         inline constexpr uintptr_t Size = 0x1D9F3B6E;
         inline constexpr uintptr_t Value = 0x6E4A2F8B;
    }

    namespace AttributesMap {
         inline constexpr uintptr_t Attributes = 0x4B8F2E7A;
         inline constexpr uintptr_t Length = 0x9C3D6A2F;
    }

    namespace BasePart {
         inline constexpr uintptr_t CastShadow = 0x2E7A4B8F;
         inline constexpr uintptr_t Color3 = 0x6F2C9B4E;
         inline constexpr uintptr_t Locked = 0x8B3F6A2D;
         inline constexpr uintptr_t Massless = 0x4E7A2C8F;
         inline constexpr uintptr_t Primitive = 0x1D9F3B6A;
         inline constexpr uintptr_t Reflectance = 0x7A2E4B8F;
         inline constexpr uintptr_t Shape = 0x3C6F2A9E;
         inline constexpr uintptr_t Transparency = 0x9B4E2D7F;
    }

    namespace Beam {
         inline constexpr uintptr_t Attachment0 = 0x5F8A2C4E;
         inline constexpr uintptr_t Attachment1 = 0x2D7F4A3E;
         inline constexpr uintptr_t Brightness = 0x8B3E6F2A;
         inline constexpr uintptr_t CurveSize0 = 0x4C9F2D7E;
         inline constexpr uintptr_t CurveSize1 = 0x7A2E4B8F;
         inline constexpr uintptr_t LightEmission = 0x1D9F3B6A;
         inline constexpr uintptr_t LightInfluence = 0x6E4A2F8C;
         inline constexpr uintptr_t Texture = 0x3F8B2E7A;
         inline constexpr uintptr_t TextureLength = 0x9C2D7F4A;
         inline constexpr uintptr_t TextureSpeed = 0x4B8F2E7A;
         inline constexpr uintptr_t Width0 = 0x7E3A2F8B;
         inline constexpr uintptr_t Width1 = 0x2C6F4A9E;
         inline constexpr uintptr_t ZOffset = 0x8F3B6A2D;
    }

    namespace BloomEffect {
         inline constexpr uintptr_t Enabled = 0x4E7A2C8F;
         inline constexpr uintptr_t Intensity = 0x9B3F6A2E;
         inline constexpr uintptr_t Size = 0x2D7F4A3C;
         inline constexpr uintptr_t Threshold = 0x6A2E4B8F;
    }

    namespace BlurEffect {
         inline constexpr uintptr_t Enabled = 0x8F2C4E7A;
         inline constexpr uintptr_t Size = 0x3B6A2D9F;
    }

    namespace ByteCode {
         inline constexpr uintptr_t Pointer = 0x7A4B8F2E;
         inline constexpr uintptr_t Size = 0x1C3D6A2F;
    }

    namespace Camera {
         inline constexpr uintptr_t CameraSubject = 0x9F2E4B8A;
         inline constexpr uintptr_t CameraType = 0x3C6F2A8D;
         inline constexpr uintptr_t FieldOfView = 0x7E4A2F8B;
         inline constexpr uintptr_t ImagePlaneDepth = 0x2B8F3D6A;
         inline constexpr uintptr_t Position = 0x6A2E4B8F;
         inline constexpr uintptr_t Rotation = 0x1D9F3B6A;
         inline constexpr uintptr_t Viewport = 0x8F3C6A2E;
         inline constexpr uintptr_t ViewportSize = 0x4B8F2E7A;
    }

    namespace CharacterMesh {
         inline constexpr uintptr_t BaseTextureId = 0x3E6A2F8B;
         inline constexpr uintptr_t BodyPart = 0x9C4F2D7E;
         inline constexpr uintptr_t MeshId = 0x2A8F3B6E;
         inline constexpr uintptr_t OverlayTextureId = 0x7D4A2F8B;
    }

    namespace ClickDetector {
         inline constexpr uintptr_t MaxActivationDistance = 0x6F2A9B4E;
         inline constexpr uintptr_t MouseIcon = 0x8B3E6F2A;
    }

    namespace Clothing {
         inline constexpr uintptr_t Color3 = 0x4E7A2C8F;
         inline constexpr uintptr_t Template = 0x9B2D7F4A;
    }

    namespace ColorCorrectionEffect {
         inline constexpr uintptr_t Brightness = 0x2F8B4A6E;
         inline constexpr uintptr_t Contrast = 0x7E3A2F8B;
         inline constexpr uintptr_t Enabled = 0x1C4D8F3A;
         inline constexpr uintptr_t TintColor = 0x6A2E4B8F;
    }

    namespace ColorGradingEffect {
         inline constexpr uintptr_t Enabled = 0x8F2B6A4E;
         inline constexpr uintptr_t TonemapperPreset = 0x3D7F2A4E;
    }

    namespace DataModel {
         inline constexpr uintptr_t CreatorId = 0x5A8C3F2E;
         inline constexpr uintptr_t GameId = 0x9B4E2D7F;
         inline constexpr uintptr_t GameLoaded = 0x2C7F4A3E;
         inline constexpr uintptr_t JobId = 0x8E3B6F2A;
         inline constexpr uintptr_t PlaceId = 0x4D9F2C8B;
         inline constexpr uintptr_t PlaceVersion = 0x7A2E4B3F;
         inline constexpr uintptr_t PrimitiveCount = 0x3F8B2E7A;
         inline constexpr uintptr_t ScriptContext = 0x1D9F3B6A;
         inline constexpr uintptr_t ServerIP = 0x6E4A2F8B;
         inline constexpr uintptr_t ToRenderView1 = 0x8A2C4F7E;
         inline constexpr uintptr_t ToRenderView2 = 0x4B8F2E7A;
         inline constexpr uintptr_t ToRenderView3 = 0x9C3D6A2F;
         inline constexpr uintptr_t Workspace = 0x2E7A4B8F;
    }

    namespace DepthOfFieldEffect {
         inline constexpr uintptr_t Enabled = 0x6F2C9B4E;
         inline constexpr uintptr_t FarIntensity = 0x8B3F6A2D;
         inline constexpr uintptr_t FocusDistance = 0x4E7A2C8F;
         inline constexpr uintptr_t InFocusRadius = 0x1D9F3B6A;
         inline constexpr uintptr_t NearIntensity = 0x7A2E4B8F;
    }

    namespace DragDetector {
         inline constexpr uintptr_t ActivatedCursorIcon = 0x3C6F2A9E;
         inline constexpr uintptr_t CursorIcon = 0x9B4E2D7F;
         inline constexpr uintptr_t MaxActivationDistance = 0x5F8A2C4E;
         inline constexpr uintptr_t MaxDragAngle = 0x2D7F4A3E;
         inline constexpr uintptr_t MaxDragTranslation = 0x8B3E6F2A;
         inline constexpr uintptr_t MaxForce = 0x4C9F2D7E;
         inline constexpr uintptr_t MaxTorque = 0x7A2E4B8F;
         inline constexpr uintptr_t MinDragAngle = 0x1D9F3B6A;
         inline constexpr uintptr_t MinDragTranslation = 0x6E4A2F8C;
         inline constexpr uintptr_t ReferenceInstance = 0x3F8B2E7A;
         inline constexpr uintptr_t Responsiveness = 0x9C2D7F4A;
    }

    namespace FakeDataModel {
         inline constexpr uintptr_t Pointer = 0x7E26978;
         inline constexpr uintptr_t RealDataModel = 0x1D0;
    }

    namespace GuiBase2D {
         inline constexpr uintptr_t AbsolutePosition = 0x4B8F2E7A;
         inline constexpr uintptr_t AbsoluteRotation = 0x9C3D6A2F;
         inline constexpr uintptr_t AbsoluteSize = 0x2E7A4B8F;
    }

    namespace GuiObject {
         inline constexpr uintptr_t BackgroundColor3 = 0x6F2C9B4E;
         inline constexpr uintptr_t BackgroundTransparency = 0x8B3F6A2D;
         inline constexpr uintptr_t BorderColor3 = 0x4E7A2C8F;
         inline constexpr uintptr_t Image = 0x1D9F3B6A;
         inline constexpr uintptr_t LayoutOrder = 0x7A2E4B8F;
         inline constexpr uintptr_t Position = 0x3C6F2A9E;
         inline constexpr uintptr_t RichText = 0x9B4E2D7F;
         inline constexpr uintptr_t Rotation = 0x5F8A2C4E;
         inline constexpr uintptr_t ScreenGui_Enabled = 0x2D7F4A3E;
         inline constexpr uintptr_t Size = 0x8B3E6F2A;
         inline constexpr uintptr_t Text = 0x4C9F2D7E;
         inline constexpr uintptr_t TextColor3 = 0x7A2E4B8F;
         inline constexpr uintptr_t Visible = 0x1D9F3B6A;
         inline constexpr uintptr_t ZIndex = 0x6E4A2F8C;
    }

    namespace Humanoid {
         inline constexpr uintptr_t AutoJumpEnabled = 0x3F8B2E7A;
         inline constexpr uintptr_t AutoRotate = 0x9C2D7F4A;
         inline constexpr uintptr_t AutomaticScalingEnabled = 0x4B8F2E7A;
         inline constexpr uintptr_t BreakJointsOnDeath = 0x7E3A2F8B;
         inline constexpr uintptr_t CameraOffset = 0x2C6F4A9E;
         inline constexpr uintptr_t DisplayDistanceType = 0x8F3B6A2D;
         inline constexpr uintptr_t DisplayName = 0x4E7A2C8F;
         inline constexpr uintptr_t EvaluateStateMachine = 0x9B3F6A2E;
         inline constexpr uintptr_t FloorMaterial = 0x2D7F4A3C;
         inline constexpr uintptr_t Health = 0x6A2E4B8F;
         inline constexpr uintptr_t HealthDisplayDistance = 0x1C3D6A2F;
         inline constexpr uintptr_t HealthDisplayType = 0x7A4B8F2E;
         inline constexpr uintptr_t HipHeight = 0x9F2E4B8A;
         inline constexpr uintptr_t HumanoidRootPart = 0x3C6F2A8D;
         inline constexpr uintptr_t HumanoidState = 0x7E4A2F8B;
         inline constexpr uintptr_t HumanoidStateID = 0x2B8F3D6A;
         inline constexpr uintptr_t IsWalking = 0x6A2E4B8F;
         inline constexpr uintptr_t Jump = 0x1D9F3B6A;
         inline constexpr uintptr_t JumpHeight = 0x8F3C6A2E;
         inline constexpr uintptr_t JumpPower = 0x4B8F2E7A;
         inline constexpr uintptr_t MaxHealth = 0x3E6A2F8B;
         inline constexpr uintptr_t MaxSlopeAngle = 0x9C4F2D7E;
         inline constexpr uintptr_t MoveDirection = 0x2A8F3B6E;
         inline constexpr uintptr_t MoveToPart = 0x7D4A2F8B;
         inline constexpr uintptr_t MoveToPoint = 0x6F2A9B4E;
         inline constexpr uintptr_t NameDisplayDistance = 0x8B3E6F2A;
         inline constexpr uintptr_t NameOcclusion = 0x4E7A2C8F;
         inline constexpr uintptr_t PlatformStand = 0x9B2D7F4A;
         inline constexpr uintptr_t PlatformStatePointer = 0x1880AED4;
         inline constexpr uintptr_t RequiresNeck = 0x2F8B4A6E;
         inline constexpr uintptr_t RigType = 0x7E3A2F8B;
         inline constexpr uintptr_t SeatPart = 0x1C4D8F3A;
         inline constexpr uintptr_t Sit = 0x6A2E4B8F;
         inline constexpr uintptr_t TargetPoint = 0x8F2B6A4E;
         inline constexpr uintptr_t UseJumpPower = 0x3D7F2A4E;
         inline constexpr uintptr_t WalkTimer = 0x5A8C3F2E;
         inline constexpr uintptr_t Walkspeed = 0x9B4E2D7F;
         inline constexpr uintptr_t WalkspeedCheck = 0x2C7F4A3E;
    }

    namespace Instance {
         inline constexpr uintptr_t ChildrenEnd = 0x8E3B6F2A;
         inline constexpr uintptr_t ChildrenStart = 0x4D9F2C8B;
         inline constexpr uintptr_t ClassBase = 0x7A2E4B3F;
         inline constexpr uintptr_t ClassDescriptor = 0x3F8B2E7A;
         inline constexpr uintptr_t ClassName = 0x1D9F3B6A;
         inline constexpr uintptr_t ComponentMap = 0x6E4A2F8B;
         inline constexpr uintptr_t Name = 0x8A2C4F7E;
         inline constexpr uintptr_t Parent = 0x4B8F2E7A;
         inline constexpr uintptr_t This = 0x9C3D6A2F;
    }

    namespace Lighting {
         inline constexpr uintptr_t Ambient = 0x2E7A4B8F;
         inline constexpr uintptr_t Brightness = 0x6F2C9B4E;
         inline constexpr uintptr_t ClockTime = 0x8B3F6A2D;
         inline constexpr uintptr_t ColorShift_Bottom = 0x4E7A2C8F;
         inline constexpr uintptr_t ColorShift_Top = 0x1D9F3B6A;
         inline constexpr uintptr_t EnvironmentDiffuseScale = 0x7A2E4B8F;
         inline constexpr uintptr_t EnvironmentSpecularScale = 0x3C6F2A9E;
         inline constexpr uintptr_t ExposureCompensation = 0x9B4E2D7F;
         inline constexpr uintptr_t FogColor = 0x5F8A2C4E;
         inline constexpr uintptr_t FogEnd = 0x2D7F4A3E;
         inline constexpr uintptr_t FogStart = 0x8B3E6F2A;
         inline constexpr uintptr_t GeographicLatitude = 0x4C9F2D7E;
         inline constexpr uintptr_t GlobalShadows = 0x7A2E4B8F;
         inline constexpr uintptr_t GradientBottom = 0x1D9F3B6A;
         inline constexpr uintptr_t GradientTop = 0x6E4A2F8C;
         inline constexpr uintptr_t LightColor = 0x3F8B2E7A;
         inline constexpr uintptr_t LightDirection = 0x9C2D7F4A;
         inline constexpr uintptr_t MoonPosition = 0x4B8F2E7A;
         inline constexpr uintptr_t OutdoorAmbient = 0x7E3A2F8B;
         inline constexpr uintptr_t Sky = 0x2C6F4A9E;
         inline constexpr uintptr_t Source = 0x8F3B6A2D;
         inline constexpr uintptr_t SunPosition = 0x4E7A2C8F;
    }

    namespace LocalScript {
         inline constexpr uintptr_t ByteCode = 0x9B3F6A2E;
         inline constexpr uintptr_t GUID = 0x2D7F4A3C;
         inline constexpr uintptr_t Hash = 0x6A2E4B8F;
    }

    namespace MaterialColors {
         inline constexpr uintptr_t Asphalt = 0x30;
         inline constexpr uintptr_t Basalt = 0x27;
         inline constexpr uintptr_t Brick = 0xF;
         inline constexpr uintptr_t Cobblestone = 0x33;
         inline constexpr uintptr_t Concrete = 0xC;
         inline constexpr uintptr_t CrackedLava = 0x2D;
         inline constexpr uintptr_t Glacier = 0x1B;
         inline constexpr uintptr_t Grass = 0x6;
         inline constexpr uintptr_t Ground = 0x2A;
         inline constexpr uintptr_t Ice = 0x36;
         inline constexpr uintptr_t LeafyGrass = 0x39;
         inline constexpr uintptr_t Limestone = 0x3F;
         inline constexpr uintptr_t Mud = 0x24;
         inline constexpr uintptr_t Pavement = 0x42;
         inline constexpr uintptr_t Rock = 0x18;
         inline constexpr uintptr_t Salt = 0x3C;
         inline constexpr uintptr_t Sand = 0x12;
         inline constexpr uintptr_t Sandstone = 0x21;
         inline constexpr uintptr_t Slate = 0x9;
         inline constexpr uintptr_t Snow = 0x1E;
         inline constexpr uintptr_t WoodPlanks = 0x15;
    }

    namespace MeshContentProvider {
         inline constexpr uintptr_t AssetID = 0x1C3D6A2F;
         inline constexpr uintptr_t Cache = 0x7A4B8F2E;
         inline constexpr uintptr_t LRUCache = 0x9F2E4B8A;
         inline constexpr uintptr_t MeshData = 0x3C6F2A8D;
         inline constexpr uintptr_t ToMeshData = 0x7E4A2F8B;
    }

    namespace MeshData {
         inline constexpr uintptr_t FaceEnd = 0x2B8F3D6A;
         inline constexpr uintptr_t FaceStart = 0x6A2E4B8F;
         inline constexpr uintptr_t VertexEnd = 0x1D9F3B6A;
         inline constexpr uintptr_t VertexStart = 0x8F3C6A2E;
    }

    namespace MeshPart {
         inline constexpr uintptr_t MeshId = 0x4B8F2E7A;
         inline constexpr uintptr_t Texture = 0x3E6A2F8B;
    }

    namespace Misc {
         inline constexpr uintptr_t Adornee = 0x9C4F2D7E;
         inline constexpr uintptr_t AnimationId = 0x2A8F3B6E;
         inline constexpr uintptr_t StringLength = 0x7D4A2F8B;
         inline constexpr uintptr_t Value = 0x6F2A9B4E;
    }

    namespace Model {
         inline constexpr uintptr_t PrimaryPart = 0x8B3E6F2A;
         inline constexpr uintptr_t Scale = 0x4E7A2C8F;
    }

    namespace ModuleScript {
         inline constexpr uintptr_t ByteCode = 0x9B2D7F4A;
         inline constexpr uintptr_t GUID = 0x2F8B4A6E;
         inline constexpr uintptr_t Hash = 0x7E3A2F8B;
         inline constexpr uintptr_t IsCoreScript = 0x1C4D8F3A;
    }

    namespace MouseService {
         inline constexpr uintptr_t InputObject = 0x6A2E4B8F;
         inline constexpr uintptr_t InputObject2 = 0x8F2B6A4E;
         inline constexpr uintptr_t MousePosition = 0x3D7F2A4E;
         inline constexpr uintptr_t SensitivityPointer = 0x7FD51B8;
    }

    namespace ParticleEmitter {
         inline constexpr uintptr_t Acceleration = 0x5A8C3F2E;
         inline constexpr uintptr_t Brightness = 0x9B4E2D7F;
         inline constexpr uintptr_t Drag = 0x2C7F4A3E;
         inline constexpr uintptr_t Lifetime = 0x8E3B6F2A;
         inline constexpr uintptr_t LightEmission = 0x4D9F2C8B;
         inline constexpr uintptr_t LightInfluence = 0x7A2E4B3F;
         inline constexpr uintptr_t Rate = 0x3F8B2E7A;
         inline constexpr uintptr_t RotSpeed = 0x1D9F3B6A;
         inline constexpr uintptr_t Rotation = 0x6E4A2F8B;
         inline constexpr uintptr_t Speed = 0x8A2C4F7E;
         inline constexpr uintptr_t SpreadAngle = 0x4B8F2E7A;
         inline constexpr uintptr_t Texture = 0x9C3D6A2F;
         inline constexpr uintptr_t TimeScale = 0x2E7A4B8F;
         inline constexpr uintptr_t VelocityInheritance = 0x6F2C9B4E;
         inline constexpr uintptr_t ZOffset = 0x8B3F6A2D;
    }

    namespace Player {
         inline constexpr uintptr_t AccountAge = 0x4E7A2C8F;
         inline constexpr uintptr_t CameraMode = 0x1D9F3B6A;
         inline constexpr uintptr_t DisplayName = 0x7A2E4B8F;
         inline constexpr uintptr_t HealthDisplayDistance = 0x3C6F2A9E;
         inline constexpr uintptr_t LocalPlayer = 0x9B4E2D7F;
         inline constexpr uintptr_t LocaleId = 0x5F8A2C4E;
         inline constexpr uintptr_t MaxZoomDistance = 0x2D7F4A3E;
         inline constexpr uintptr_t MinZoomDistance = 0x8B3E6F2A;
         inline constexpr uintptr_t ModelInstance = 0x4C9F2D7E;
         inline constexpr uintptr_t Mouse = 0x7A2E4B8F;
         inline constexpr uintptr_t NameDisplayDistance = 0x1D9F3B6A;
         inline constexpr uintptr_t Team = 0x6E4A2F8C;
         inline constexpr uintptr_t TeamColor = 0x3F8B2E7A;
         inline constexpr uintptr_t UserId = 0x9C2D7F4A;
    }

    namespace PlayerConfigurer {
         inline constexpr uintptr_t Pointer = 0x4B8F2E7A;
    }

    namespace PlayerMouse {
         inline constexpr uintptr_t Icon = 0x7E3A2F8B;
         inline constexpr uintptr_t Workspace = 0x2C6F4A9E;
    }

    namespace Primitive {
         inline constexpr uintptr_t AssemblyAngularVelocity = 0x8F3B6A2D;
         inline constexpr uintptr_t AssemblyLinearVelocity = 0x4E7A2C8F;
         inline constexpr uintptr_t Flags = 0x9B3F6A2E;
         inline constexpr uintptr_t Material = 0x2D7F4A3C;
         inline constexpr uintptr_t Owner = 0x6A2E4B8F;
         inline constexpr uintptr_t Position = 0x1C3D6A2F;
         inline constexpr uintptr_t Rotation = 0x7A4B8F2E;
         inline constexpr uintptr_t Size = 0x9F2E4B8A;
         inline constexpr uintptr_t Validate = 0x3C6F2A8D;
    }

    namespace PrimitiveFlags {
         inline constexpr uintptr_t Anchored = 0x2;
         inline constexpr uintptr_t CanCollide = 0x8;
         inline constexpr uintptr_t CanQuery = 0x20;
         inline constexpr uintptr_t CanTouch = 0x10;
    }

    namespace ProximityPrompt {
         inline constexpr uintptr_t ActionText = 0x7E4A2F8B;
         inline constexpr uintptr_t Enabled = 0x2B8F3D6A;
         inline constexpr uintptr_t GamepadKeyCode = 0x6A2E4B8F;
         inline constexpr uintptr_t HoldDuration = 0x1D9F3B6A;
         inline constexpr uintptr_t KeyCode = 0x8F3C6A2E;
         inline constexpr uintptr_t MaxActivationDistance = 0x4B8F2E7A;
         inline constexpr uintptr_t ObjectText = 0x3E6A2F8B;
         inline constexpr uintptr_t RequiresLineOfSight = 0x9C4F2D7E;
    }

    namespace RenderJob {
         inline constexpr uintptr_t FakeDataModel = 0x2A8F3B6E;
         inline constexpr uintptr_t RealDataModel = 0x7D4A2F8B;
         inline constexpr uintptr_t RenderView = 0x6F2A9B4E;
    }

    namespace RenderView {
         inline constexpr uintptr_t DeviceD3D11 = 0x8B3E6F2A;
         inline constexpr uintptr_t LightingValid = 0x4E7A2C8F;
         inline constexpr uintptr_t SkyValid = 0x9B2D7F4A;
         inline constexpr uintptr_t VisualEngine = 0x2F8B4A6E;
    }

    namespace RunService {
         inline constexpr uintptr_t HeartbeatFPS = 0x7E3A2F8B;
         inline constexpr uintptr_t HeartbeatTask = 0x1C4D8F3A;
    }

    namespace Script {
         inline constexpr uintptr_t ByteCode = 0x6A2E4B8F;
         inline constexpr uintptr_t GUID = 0x8F2B6A4E;
         inline constexpr uintptr_t Hash = 0x3D7F2A4E;
    }

    namespace ScriptContext {
         inline constexpr uintptr_t RequireBypass = 0x5A8C3F2E;
    }

    namespace Seat {
         inline constexpr uintptr_t Occupant = 0x9B4E2D7F;
    }

    namespace Sky {
         inline constexpr uintptr_t MoonAngularSize = 0x2C7F4A3E;
         inline constexpr uintptr_t MoonTextureId = 0x8E3B6F2A;
         inline constexpr uintptr_t SkyboxBk = 0x4D9F2C8B;
         inline constexpr uintptr_t SkyboxDn = 0x7A2E4B3F;
         inline constexpr uintptr_t SkyboxFt = 0x3F8B2E7A;
         inline constexpr uintptr_t SkyboxLf = 0x1D9F3B6A;
         inline constexpr uintptr_t SkyboxOrientation = 0x6E4A2F8B;
         inline constexpr uintptr_t SkyboxRt = 0x8A2C4F7E;
         inline constexpr uintptr_t SkyboxUp = 0x4B8F2E7A;
         inline constexpr uintptr_t StarCount = 0x9C3D6A2F;
         inline constexpr uintptr_t SunAngularSize = 0x2E7A4B8F;
         inline constexpr uintptr_t SunTextureId = 0x6F2C9B4E;
    }

    namespace Sound {
         inline constexpr uintptr_t IsPlaying = 0x8B3F6A2D;
         inline constexpr uintptr_t Looped = 0x4E7A2C8F;
         inline constexpr uintptr_t PlaybackSpeed = 0x1D9F3B6A;
         inline constexpr uintptr_t RollOffMaxDistance = 0x7A2E4B8F;
         inline constexpr uintptr_t RollOffMinDistance = 0x3C6F2A9E;
         inline constexpr uintptr_t SoundGroup = 0x9B4E2D7F;
         inline constexpr uintptr_t SoundId = 0x5F8A2C4E;
         inline constexpr uintptr_t Volume = 0x2D7F4A3E;
    }

    namespace SpawnLocation {
         inline constexpr uintptr_t AllowTeamChangeOnTouch = 0x8B3E6F2A;
         inline constexpr uintptr_t Enabled = 0x4C9F2D7E;
         inline constexpr uintptr_t ForcefieldDuration = 0x7A2E4B8F;
         inline constexpr uintptr_t Neutral = 0x1D9F3B6A;
         inline constexpr uintptr_t TeamColor = 0x6E4A2F8C;
    }

    namespace SpecialMesh {
         inline constexpr uintptr_t MeshId = 0x3F8B2E7A;
         inline constexpr uintptr_t Scale = 0x9C2D7F4A;
    }

    namespace StatsItem {
         inline constexpr uintptr_t Value = 0x4B8F2E7A;
    }

    namespace SunRaysEffect {
         inline constexpr uintptr_t Enabled = 0x7E3A2F8B;
         inline constexpr uintptr_t Intensity = 0x2C6F4A9E;
         inline constexpr uintptr_t Spread = 0x8F3B6A2D;
    }

    namespace SurfaceAppearance {
         inline constexpr uintptr_t AlphaMode = 0x4E7A2C8F;
         inline constexpr uintptr_t Color = 0x9B3F6A2E;
         inline constexpr uintptr_t ColorMap = 0x2D7F4A3C;
         inline constexpr uintptr_t EmissiveMaskContent = 0x6A2E4B8F;
         inline constexpr uintptr_t EmissiveStrength = 0x1C3D6A2F;
         inline constexpr uintptr_t EmissiveTint = 0x7A4B8F2E;
         inline constexpr uintptr_t MetalnessMap = 0x9F2E4B8A;
         inline constexpr uintptr_t NormalMap = 0x3C6F2A8D;
         inline constexpr uintptr_t RoughnessMap = 0x7E4A2F8B;
    }

    namespace TaskScheduler {
         inline constexpr uintptr_t JobEnd = 0x2B8F3D6A;
         inline constexpr uintptr_t JobName = 0x6A2E4B8F;
         inline constexpr uintptr_t JobStart = 0x1D9F3B6A;
         inline constexpr uintptr_t MaxFPS = 0x8F3C6A2E;
         inline constexpr uintptr_t Pointer = 0x84A58E0;
    }

    namespace Team {
         inline constexpr uintptr_t BrickColor = 0x4B8F2E7A;
    }

    namespace Terrain {
         inline constexpr uintptr_t GrassLength = 0x3E6A2F8B;
         inline constexpr uintptr_t MaterialColors = 0x9C4F2D7E;
         inline constexpr uintptr_t WaterColor = 0x2A8F3B6E;
         inline constexpr uintptr_t WaterReflectance = 0x7D4A2F8B;
         inline constexpr uintptr_t WaterTransparency = 0x6F2A9B4E;
         inline constexpr uintptr_t WaterWaveSize = 0x8B3E6F2A;
         inline constexpr uintptr_t WaterWaveSpeed = 0x4E7A2C8F;
    }

    namespace Textures {
         inline constexpr uintptr_t Decal_Texture = 0x9B2D7F4A;
         inline constexpr uintptr_t Texture_Texture = 0x2F8B4A6E;
    }

    namespace Tool {
         inline constexpr uintptr_t CanBeDropped = 0x7E3A2F8B;
         inline constexpr uintptr_t Enabled = 0x1C4D8F3A;
         inline constexpr uintptr_t Grip = 0x6A2E4B8F;
         inline constexpr uintptr_t ManualActivationOnly = 0x8F2B6A4E;
         inline constexpr uintptr_t RequiresHandle = 0x3D7F2A4E;
         inline constexpr uintptr_t TextureId = 0x5A8C3F2E;
         inline constexpr uintptr_t Tooltip = 0x9B4E2D7F;
    }

    namespace UnionOperation {
         inline constexpr uintptr_t AssetId = 0x2C7F4A3E;
    }

    namespace UserInputService {
         inline constexpr uintptr_t WindowInputState = 0x8E3B6F2A;
    }

    namespace VehicleSeat {
         inline constexpr uintptr_t MaxSpeed = 0x4D9F2C8B;
         inline constexpr uintptr_t SteerFloat = 0x7A2E4B3F;
         inline constexpr uintptr_t ThrottleFloat = 0x3F8B2E7A;
         inline constexpr uintptr_t Torque = 0x1D9F3B6A;
         inline constexpr uintptr_t TurnSpeed = 0x6E4A2F8B;
    }

    namespace VisualEngine {
         inline constexpr uintptr_t Dimensions = 0x8A2C4F7E;
         inline constexpr uintptr_t FakeDataModel = 0x4B8F2E7A;
         inline constexpr uintptr_t Pointer = 0x8818F60;
         inline constexpr uintptr_t RenderView = 0x9C3D6A2F;
         inline constexpr uintptr_t ViewMatrix = 0x2E7A4B8F;
    }

    namespace Weld {
         inline constexpr uintptr_t Part0 = 0x6F2C9B4E;
         inline constexpr uintptr_t Part1 = 0x8B3F6A2D;
    }

    namespace WeldConstraint {
         inline constexpr uintptr_t Part0 = 0x4E7A2C8F;
         inline constexpr uintptr_t Part1 = 0x1D9F3B6A;
    }

    namespace WindowInputState {
         inline constexpr uintptr_t CapsLock = 0x7A2E4B8F;
         inline constexpr uintptr_t CurrentTextBox = 0x3C6F2A9E;
    }

    namespace Workspace {
         inline constexpr uintptr_t CurrentCamera = 0x9B4E2D7F;
         inline constexpr uintptr_t DistributedGameTime = 0x5F8A2C4E;
         inline constexpr uintptr_t ReadOnlyGravity = 0x2D7F4A3E;
         inline constexpr uintptr_t World = 0x8B3E6F2A;
    }

    namespace World {
         inline constexpr uintptr_t AirProperties = 0x4C9F2D7E;
         inline constexpr uintptr_t FallenPartsDestroyHeight = 0x7A2E4B8F;
         inline constexpr uintptr_t Gravity = 0x1D9F3B6A;
         inline constexpr uintptr_t Primitives = 0x6E4A2F8C;
         inline constexpr uintptr_t worldStepsPerSec = 0x3F8B2E7A;
    }

}
