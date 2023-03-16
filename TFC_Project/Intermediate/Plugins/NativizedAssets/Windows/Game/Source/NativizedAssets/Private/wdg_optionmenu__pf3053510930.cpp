#include "NativizedAssets.h"
#include "wdg_optionmenu__pf3053510930.h"
#include "GeneratedCodeHelpers.h"
#include "Runtime/UMG/Public/Blueprint/WidgetTree.h"
#include "Runtime/UMG/Public/Components/CanvasPanel.h"
#include "Runtime/UMG/Public/Components/CanvasPanelSlot.h"
#include "Runtime/UMG/Public/Components/Image.h"
#include "Runtime/UMG/Public/Components/VerticalBox.h"
#include "Runtime/UMG/Public/Components/VerticalBoxSlot.h"
#include "Runtime/UMG/Public/Components/TextBlock.h"
#include "Runtime/Engine/Classes/Engine/Font.h"
#include "Runtime/UMG/Public/Components/HorizontalBox.h"
#include "Runtime/UMG/Public/Components/HorizontalBoxSlot.h"
#include "Runtime/UMG/Public/Components/Spacer.h"
#include "Runtime/UMG/Public/Components/Slider.h"
#include "Runtime/UMG/Public/Components/ComboBoxString.h"
#include "Runtime/UMG/Public/Components/InputKeySelector.h"
#include "Runtime/UMG/Public/Components/Button.h"
#include "Runtime/UMG/Public/Components/ButtonSlot.h"
#include "Runtime/Engine/Classes/Engine/ComponentDelegateBinding.h"
#include "Runtime/Engine/Classes/Kismet/KismetSystemLibrary.h"
#include "Runtime/Engine/Classes/Kismet/BlueprintFunctionLibrary.h"
#include "Runtime/CoreUObject/Public/UObject/NoExportTypes.h"
#include "Runtime/Engine/Classes/Engine/EngineTypes.h"
#include "Runtime/Engine/Classes/GameFramework/Actor.h"
#include "Runtime/Engine/Classes/Engine/EngineBaseTypes.h"
#include "Runtime/Engine/Classes/Components/ActorComponent.h"
#include "Runtime/Engine/Classes/Engine/AssetUserData.h"
#include "Runtime/Engine/Public/ComponentInstanceDataCache.h"
#include "Runtime/Engine/Classes/EdGraph/EdGraphPin.h"
#include "Runtime/Engine/Classes/Interfaces/Interface_AssetUserData.h"
#include "Runtime/Engine/Classes/GameFramework/DamageType.h"
#include "Runtime/Engine/Classes/Engine/NetSerialization.h"
#include "Runtime/PhysicsCore/Public/PhysicalMaterials/PhysicalMaterial.h"
#include "Runtime/PhysicsCore/Public/PhysicsSettingsEnums.h"
#include "Runtime/PhysicsCore/Public/PhysicalMaterials/PhysicalMaterialPropertyBase.h"
#include "Runtime/PhysicsCore/Public/Chaos/ChaosEngineInterface.h"
#include "Runtime/Engine/Classes/Components/PrimitiveComponent.h"
#include "Runtime/Engine/Classes/Components/SceneComponent.h"
#include "Runtime/Engine/Classes/GameFramework/PhysicsVolume.h"
#include "Runtime/Engine/Classes/GameFramework/Volume.h"
#include "Runtime/Engine/Classes/Engine/Brush.h"
#include "Runtime/Engine/Classes/Components/BrushComponent.h"
#include "Runtime/Engine/Classes/PhysicsEngine/BodySetup.h"
#include "Runtime/PhysicsCore/Public/BodySetupCore.h"
#include "Runtime/PhysicsCore/Public/BodySetupEnums.h"
#include "Runtime/Engine/Classes/PhysicsEngine/AggregateGeom.h"
#include "Runtime/Engine/Classes/PhysicsEngine/SphereElem.h"
#include "Runtime/Engine/Classes/PhysicsEngine/ShapeElem.h"
#include "Runtime/Engine/Classes/PhysicsEngine/BoxElem.h"
#include "Runtime/Engine/Classes/PhysicsEngine/SphylElem.h"
#include "Runtime/Engine/Classes/PhysicsEngine/ConvexElem.h"
#include "Runtime/Engine/Classes/PhysicsEngine/TaperedCapsuleElem.h"
#include "Runtime/Engine/Classes/PhysicsEngine/BodyInstance.h"
#include "Runtime/PhysicsCore/Public/BodyInstanceCore.h"
#include "Runtime/Engine/Classes/Engine/BrushBuilder.h"
#include "Runtime/Engine/Classes/Materials/MaterialInterface.h"
#include "Runtime/Engine/Classes/PhysicalMaterials/PhysicalMaterialMask.h"
#include "Runtime/Engine/Classes/Engine/Texture.h"
#include "Runtime/Engine/Classes/EditorFramework/AssetImportData.h"
#include "Runtime/Engine/Classes/Engine/StreamableRenderAsset.h"
#include "Runtime/Engine/Classes/Engine/TextureDefines.h"
#include "Runtime/Engine/Public/PerPlatformProperties.h"
#include "Runtime/Engine/Classes/Materials/MaterialLayersFunctions.h"
#include "Runtime/Engine/Classes/Materials/MaterialFunctionInterface.h"
#include "Runtime/Engine/Classes/EditorFramework/ThumbnailInfo.h"
#include "Runtime/Engine/Classes/Materials/Material.h"
#include "Runtime/Engine/Classes/Materials/MaterialExpression.h"
#include "Runtime/Engine/Classes/Materials/MaterialFunction.h"
#include "Runtime/Engine/Classes/Materials/MaterialExpressionComment.h"
#include "Runtime/Engine/Classes/Materials/MaterialExpressionMaterialFunctionCall.h"
#include "Runtime/Engine/Classes/Materials/MaterialExpressionFunctionInput.h"
#include "Runtime/Engine/Classes/Materials/MaterialExpressionFunctionOutput.h"
#include "Runtime/Engine/Classes/EdGraph/EdGraphNode.h"
#include "Runtime/Engine/Public/MaterialShared.h"
#include "Runtime/Engine/Classes/Engine/BlendableInterface.h"
#include "Runtime/Engine/Public/MaterialCachedData.h"
#include "Runtime/Engine/Classes/Engine/Texture2D.h"
#include "Runtime/Engine/Classes/Engine/FontImportOptions.h"
#include "Runtime/SlateCore/Public/Fonts/CompositeFont.h"
#include "Runtime/SlateCore/Public/Fonts/FontBulkData.h"
#include "Runtime/SlateCore/Public/Fonts/FontProviderInterface.h"
#include "Runtime/Engine/Classes/VT/RuntimeVirtualTexture.h"
#include "Runtime/Engine/Public/VT/RuntimeVirtualTextureEnum.h"
#include "Runtime/Engine/Classes/VT/VirtualTexture.h"
#include "Runtime/Engine/Classes/Curves/CurveLinearColor.h"
#include "Runtime/Engine/Classes/Curves/CurveBase.h"
#include "Runtime/Engine/Classes/Curves/RichCurve.h"
#include "Runtime/Engine/Classes/Curves/RealCurve.h"
#include "Runtime/Engine/Classes/Curves/IndexedCurve.h"
#include "Runtime/Engine/Classes/Curves/KeyHandle.h"
#include "Runtime/Engine/Classes/Curves/CurveLinearColorAtlas.h"
#include "Runtime/Engine/Classes/Materials/MaterialParameterCollection.h"
#include "Runtime/Landscape/Classes/LandscapeGrassType.h"
#include "Runtime/Engine/Classes/Engine/StaticMesh.h"
#include "Runtime/Engine/Classes/Engine/StaticMeshSocket.h"
#include "Runtime/StaticMeshDescription/Public/StaticMeshDescription.h"
#include "Runtime/MeshDescription/Public/MeshDescriptionBase.h"
#include "Runtime/MeshDescription/Public/MeshTypes.h"
#include "Runtime/Engine/Public/Components.h"
#include "Runtime/Engine/Classes/AI/Navigation/NavCollisionBase.h"
#include "Runtime/Engine/Classes/Interfaces/Interface_CollisionDataProvider.h"
#include "Runtime/Engine/Classes/Engine/MeshMerging.h"
#include "Runtime/Engine/Classes/Engine/SubsurfaceProfile.h"
#include "Runtime/Engine/Classes/Materials/MaterialInstanceDynamic.h"
#include "Runtime/Engine/Classes/Materials/MaterialInstance.h"
#include "Runtime/Engine/Classes/Materials/MaterialInstanceBasePropertyOverrides.h"
#include "Runtime/Engine/Public/StaticParameterSet.h"
#include "Runtime/Engine/Classes/GameFramework/Pawn.h"
#include "Runtime/Engine/Classes/GameFramework/Controller.h"
#include "Runtime/Engine/Classes/GameFramework/PlayerController.h"
#include "Runtime/InputCore/Classes/InputCoreTypes.h"
#include "Runtime/Engine/Classes/Camera/PlayerCameraManager.h"
#include "Runtime/UMG/Public/Components/Widget.h"
#include "Runtime/UMG/Public/Components/Visual.h"
#include "Runtime/UMG/Public/Components/SlateWrapperTypes.h"
#include "Runtime/UMG/Public/Slate/WidgetTransform.h"
#include "Runtime/SlateCore/Public/Input/NavigationReply.h"
#include "Runtime/SlateCore/Public/Layout/Clipping.h"
#include "Runtime/SlateCore/Public/Layout/Geometry.h"
#include "Runtime/SlateCore/Public/Input/Events.h"
#include "Runtime/SlateCore/Public/Styling/SlateColor.h"
#include "Runtime/SlateCore/Public/Styling/SlateBrush.h"
#include "Runtime/SlateCore/Public/Layout/Margin.h"
#include "Runtime/UMG/Public/Components/PanelWidget.h"
#include "Runtime/UMG/Public/Components/PanelSlot.h"
#include "Runtime/Engine/Classes/Engine/LocalPlayer.h"
#include "Runtime/Engine/Classes/Engine/Player.h"
#include "Runtime/Engine/Classes/Engine/GameViewportClient.h"
#include "Runtime/Engine/Classes/Engine/ScriptViewportClient.h"
#include "Runtime/Engine/Classes/Engine/Console.h"
#include "Runtime/Engine/Classes/Engine/DebugDisplayProperty.h"
#include "Runtime/Engine/Classes/Engine/World.h"
#include "Runtime/Engine/Classes/GameFramework/WorldSettings.h"
#include "Runtime/Engine/Classes/GameFramework/Info.h"
#include "Runtime/Engine/Classes/Components/BillboardComponent.h"
#include "Runtime/Engine/Classes/AI/NavigationSystemConfig.h"
#include "Runtime/Engine/Classes/AI/Navigation/NavigationTypes.h"
#include "Runtime/Engine/Classes/GameFramework/DefaultPhysicsVolume.h"
#include "Runtime/Engine/Classes/PhysicsEngine/PhysicsCollisionHandler.h"
#include "Runtime/Engine/Classes/Sound/SoundBase.h"
#include "Runtime/Engine/Classes/Sound/SoundClass.h"
#include "Runtime/Engine/Classes/Sound/SoundModulationDestination.h"
#include "Runtime/AudioExtensions/Public/IAudioModulation.h"
#include "Runtime/Engine/Classes/Sound/AudioOutputTarget.h"
#include "Runtime/Engine/Classes/Sound/SoundWaveLoadingBehavior.h"
#include "Runtime/Engine/Classes/Sound/SoundSubmix.h"
#include "Runtime/Engine/Classes/Sound/SoundSubmixSend.h"
#include "Runtime/Engine/Classes/Sound/SoundWave.h"
#include "Runtime/AudioPlatformConfiguration/Public/AudioCompressionSettings.h"
#include "Runtime/Engine/Classes/Sound/SoundGroups.h"
#include "Runtime/Engine/Classes/Engine/CurveTable.h"
#include "Runtime/Engine/Classes/Sound/SoundEffectSubmix.h"
#include "Runtime/Engine/Classes/Sound/SoundEffectPreset.h"
#include "Runtime/AudioExtensions/Public/ISoundfieldFormat.h"
#include "Runtime/Engine/Classes/Sound/SoundMix.h"
#include "Runtime/Engine/Classes/Sound/SoundConcurrency.h"
#include "Runtime/Engine/Classes/Sound/SoundAttenuation.h"
#include "Runtime/Engine/Classes/Engine/Attenuation.h"
#include "Runtime/Engine/Classes/Curves/CurveFloat.h"
#include "Runtime/AudioExtensions/Public/IAudioExtensionPlugin.h"
#include "Runtime/Engine/Classes/Sound/SoundEffectSource.h"
#include "Runtime/Engine/Classes/Sound/SoundSourceBusSend.h"
#include "Runtime/Engine/Classes/Sound/SoundSourceBus.h"
#include "Runtime/Engine/Classes/Sound/AudioBus.h"
#include "Runtime/Engine/Classes/GameFramework/GameModeBase.h"
#include "Runtime/Engine/Classes/GameFramework/PlayerState.h"
#include "Runtime/Engine/Classes/GameFramework/LocalMessage.h"
#include "Runtime/Engine/Classes/GameFramework/OnlineReplStructs.h"
#include "Runtime/CoreUObject/Public/UObject/CoreOnline.h"
#include "Runtime/Engine/Classes/GameFramework/EngineMessage.h"
#include "Runtime/Engine/Classes/GameFramework/GameSession.h"
#include "Runtime/Engine/Classes/GameFramework/GameStateBase.h"
#include "Runtime/Engine/Classes/GameFramework/SpectatorPawn.h"
#include "Runtime/Engine/Classes/GameFramework/DefaultPawn.h"
#include "Runtime/Engine/Classes/GameFramework/PawnMovementComponent.h"
#include "Runtime/Engine/Classes/GameFramework/NavMovementComponent.h"
#include "Runtime/Engine/Classes/GameFramework/MovementComponent.h"
#include "Runtime/Engine/Classes/Components/SphereComponent.h"
#include "Runtime/Engine/Classes/Components/ShapeComponent.h"
#include "Runtime/Engine/Classes/AI/Navigation/NavAreaBase.h"
#include "Runtime/Engine/Classes/Components/StaticMeshComponent.h"
#include "Runtime/Engine/Classes/Components/MeshComponent.h"
#include "Runtime/Engine/Classes/Engine/TextureStreamingTypes.h"
#include "Runtime/Engine/Classes/GameFramework/FloatingPawnMovement.h"
#include "Runtime/AIModule/Classes/AIController.h"
#include "Runtime/AIModule/Classes/BehaviorTree/BlackboardData.h"
#include "Runtime/Engine/Classes/Engine/DataAsset.h"
#include "Runtime/AIModule/Classes/BehaviorTree/Blackboard/BlackboardKeyType.h"
#include "Runtime/AIModule/Classes/BehaviorTree/BlackboardComponent.h"
#include "Runtime/AIModule/Classes/BrainComponent.h"
#include "Runtime/AIModule/Classes/AIResourceInterface.h"
#include "Runtime/GameplayTasks/Classes/GameplayTaskResource.h"
#include "Runtime/AIModule/Classes/Navigation/PathFollowingComponent.h"
#include "Runtime/NavigationSystem/Public/NavigationData.h"
#include "Runtime/Engine/Classes/AI/Navigation/NavigationDataInterface.h"
#include "Runtime/Engine/Classes/AI/Navigation/PathFollowingAgentInterface.h"
#include "Runtime/AIModule/Classes/BehaviorTree/BehaviorTree.h"
#include "Runtime/AIModule/Classes/BehaviorTree/BTCompositeNode.h"
#include "Runtime/AIModule/Classes/BehaviorTree/BTNode.h"
#include "Runtime/GameplayTasks/Classes/GameplayTaskOwnerInterface.h"
#include "Runtime/AIModule/Classes/BehaviorTree/BTTaskNode.h"
#include "Runtime/AIModule/Classes/BehaviorTree/BTService.h"
#include "Runtime/AIModule/Classes/BehaviorTree/BTAuxiliaryNode.h"
#include "Runtime/AIModule/Classes/BehaviorTree/BTDecorator.h"
#include "Runtime/AIModule/Classes/BehaviorTree/BehaviorTreeTypes.h"
#include "Runtime/AIModule/Classes/BehaviorTree/BlackboardAssetProvider.h"
#include "Runtime/Engine/Classes/EdGraph/EdGraph.h"
#include "Runtime/Engine/Classes/EdGraph/EdGraphSchema.h"
#include "Runtime/Engine/Classes/Engine/Blueprint.h"
#include "Runtime/GameplayTasks/Classes/GameplayTask.h"
#include "Runtime/NavigationSystem/Public/NavFilters/NavigationQueryFilter.h"
#include "Runtime/NavigationSystem/Public/NavAreas/NavArea.h"
#include "Runtime/AIModule/Classes/Perception/AIPerceptionComponent.h"
#include "Runtime/AIModule/Classes/Perception/AISense.h"
#include "Runtime/AIModule/Classes/Perception/AIPerceptionTypes.h"
#include "Runtime/AIModule/Classes/Perception/AIPerceptionSystem.h"
#include "Runtime/AIModule/Classes/AISubsystem.h"
#include "Runtime/AIModule/Classes/AISystem.h"
#include "Runtime/Engine/Classes/AI/AISystemBase.h"
#include "Runtime/AIModule/Classes/BehaviorTree/BehaviorTreeManager.h"
#include "Runtime/AIModule/Classes/BehaviorTree/BehaviorTreeComponent.h"
#include "Runtime/GameplayTags/Classes/GameplayTagContainer.h"
#include "Runtime/AIModule/Classes/EnvironmentQuery/EnvQueryManager.h"
#include "Runtime/AIModule/Classes/EnvironmentQuery/EnvQuery.h"
#include "Runtime/AIModule/Classes/EnvironmentQuery/EnvQueryOption.h"
#include "Runtime/AIModule/Classes/EnvironmentQuery/EnvQueryGenerator.h"
#include "Runtime/AIModule/Classes/EnvironmentQuery/EnvQueryNode.h"
#include "Runtime/AIModule/Classes/EnvironmentQuery/Items/EnvQueryItemType.h"
#include "Runtime/AIModule/Classes/EnvironmentQuery/EnvQueryTest.h"
#include "Runtime/AIModule/Classes/EnvironmentQuery/EnvQueryTypes.h"
#include "Runtime/AIModule/Classes/DataProviders/AIDataProvider.h"
#include "Runtime/AIModule/Classes/EnvironmentQuery/EnvQueryInstanceBlueprintWrapper.h"
#include "Runtime/AIModule/Classes/EnvironmentQuery/EQSQueryResultSourceInterface.h"
#include "Runtime/AIModule/Classes/EnvironmentQuery/EnvQueryContext.h"
#include "Runtime/AIModule/Classes/Blueprint/AIAsyncTaskBlueprintProxy.h"
#include "Runtime/AIModule/Classes/AITypes.h"
#include "Runtime/AIModule/Classes/HotSpots/AIHotSpotManager.h"
#include "Runtime/AIModule/Classes/Navigation/NavLocalGridManager.h"
#include "Runtime/AIModule/Classes/Perception/AISenseEvent.h"
#include "Runtime/AIModule/Classes/Perception/AISenseConfig.h"
#include "Runtime/AIModule/Classes/Actions/PawnActionsComponent.h"
#include "Runtime/AIModule/Classes/Actions/PawnAction.h"
#include "Runtime/GameplayTasks/Classes/GameplayTasksComponent.h"
#include "Runtime/AIModule/Classes/Perception/AIPerceptionListenerInterface.h"
#include "Runtime/AIModule/Classes/GenericTeamAgentInterface.h"
#include "Runtime/Engine/Public/VisualLogger/VisualLoggerDebugSnapshotInterface.h"
#include "Runtime/Engine/Classes/GameFramework/SpectatorPawnMovement.h"
#include "Runtime/Engine/Classes/GameFramework/HUD.h"
#include "Runtime/Engine/Classes/Engine/Canvas.h"
#include "Runtime/Engine/Classes/Debug/ReporterGraph.h"
#include "Runtime/Engine/Classes/Debug/ReporterBase.h"
#include "Runtime/Engine/Classes/GameFramework/DebugTextInfo.h"
#include "Runtime/Engine/Classes/Engine/ServerStatReplicator.h"
#include "Runtime/Engine/Classes/GameFramework/GameNetworkManager.h"
#include "Runtime/Engine/Classes/Sound/ReverbSettings.h"
#include "Runtime/Engine/Classes/Sound/ReverbEffect.h"
#include "Runtime/Engine/Classes/Sound/AudioVolume.h"
#include "Runtime/Engine/Classes/Engine/NetConnection.h"
#include "Runtime/Engine/Classes/Engine/ChildConnection.h"
#include "Runtime/Engine/Classes/Engine/PackageMapClient.h"
#include "Runtime/Engine/Classes/Engine/NetDriver.h"
#include "Runtime/Engine/Classes/Engine/Channel.h"
#include "Runtime/Engine/Classes/Engine/ReplicationDriver.h"
#include "Runtime/Engine/Classes/Engine/BookmarkBase.h"
#include "Runtime/Engine/Classes/Engine/BookMark.h"
#include "Runtime/Engine/Classes/Engine/MaterialMerging.h"
#include "Runtime/Engine/Classes/Engine/Level.h"
#include "Runtime/Engine/Classes/Components/ModelComponent.h"
#include "Runtime/Engine/Classes/Engine/LevelActorContainer.h"
#include "Runtime/Engine/Classes/Engine/LevelScriptActor.h"
#include "Runtime/Engine/Classes/Engine/NavigationObjectBase.h"
#include "Runtime/Engine/Classes/Components/CapsuleComponent.h"
#include "Runtime/Engine/Classes/AI/Navigation/NavAgentInterface.h"
#include "Runtime/Engine/Classes/AI/Navigation/NavigationDataChunk.h"
#include "Runtime/Engine/Classes/Engine/MapBuildDataRegistry.h"
#include "Runtime/Engine/Classes/Engine/LevelScriptBlueprint.h"
#include "Runtime/Engine/Classes/Engine/BlueprintCore.h"
#include "Runtime/Engine/Classes/Engine/SimpleConstructionScript.h"
#include "Runtime/Engine/Classes/Engine/SCS_Node.h"
#include "Runtime/Engine/Classes/Engine/BlueprintGeneratedClass.h"
#include "Runtime/Engine/Classes/Engine/TimelineTemplate.h"
#include "Runtime/Engine/Classes/Components/TimelineComponent.h"
#include "Runtime/Engine/Classes/Curves/CurveVector.h"
#include "Runtime/Engine/Classes/Engine/InheritableComponentHandler.h"
#include "Runtime/CoreUObject/Public/UObject/CoreNetTypes.h"
#include "Runtime/Engine/Classes/Engine/Breakpoint.h"
#include "Runtime/Engine/Public/Blueprint/BlueprintExtension.h"
#include "Runtime/Engine/Classes/Components/LineBatchComponent.h"
#include "Runtime/Engine/Classes/Engine/LevelStreaming.h"
#include "Runtime/Engine/Classes/Engine/LevelStreamingVolume.h"
#include "Runtime/Engine/Classes/Engine/DemoNetDriver.h"
#include "Runtime/Engine/Classes/Particles/ParticleEventManager.h"
#include "Runtime/Engine/Classes/AI/NavigationSystemBase.h"
#include "Runtime/Engine/Classes/AI/Navigation/AvoidanceManager.h"
#include "Runtime/Engine/Classes/Engine/GameInstance.h"
#include "Runtime/Engine/Classes/GameFramework/OnlineSession.h"
#include "Runtime/Engine/Classes/Materials/MaterialParameterCollectionInstance.h"
#include "Runtime/Engine/Classes/Engine/WorldComposition.h"
#include "Runtime/Engine/Classes/Particles/WorldPSCPool.h"
#include "Runtime/Engine/Classes/Particles/ParticleSystem.h"
#include "Runtime/Engine/Classes/Particles/ParticleEmitter.h"
#include "Runtime/Engine/Public/ParticleHelper.h"
#include "Runtime/Engine/Classes/Particles/ParticleLODLevel.h"
#include "Runtime/Engine/Classes/Particles/ParticleModuleRequired.h"
#include "Runtime/Engine/Classes/Particles/ParticleModule.h"
#include "Runtime/Engine/Classes/Particles/ParticleSpriteEmitter.h"
#include "Runtime/Engine/Classes/Distributions/DistributionFloat.h"
#include "Runtime/Engine/Classes/Distributions/Distribution.h"
#include "Runtime/Engine/Classes/Particles/SubUVAnimation.h"
#include "Runtime/Engine/Classes/Particles/TypeData/ParticleModuleTypeDataBase.h"
#include "Runtime/Engine/Classes/Particles/Spawn/ParticleModuleSpawn.h"
#include "Runtime/Engine/Classes/Particles/Spawn/ParticleModuleSpawnBase.h"
#include "Runtime/Engine/Classes/Particles/Event/ParticleModuleEventGenerator.h"
#include "Runtime/Engine/Classes/Particles/Event/ParticleModuleEventBase.h"
#include "Runtime/Engine/Classes/Particles/ParticleSystemComponent.h"
#include "Runtime/Engine/Classes/Particles/Event/ParticleModuleEventSendToGame.h"
#include "Runtime/Engine/Classes/Particles/Orbit/ParticleModuleOrbit.h"
#include "Runtime/Engine/Classes/Particles/Orbit/ParticleModuleOrbitBase.h"
#include "Runtime/Engine/Classes/Distributions/DistributionVector.h"
#include "Runtime/Engine/Classes/Particles/Event/ParticleModuleEventReceiverBase.h"
#include "Runtime/Engine/Classes/Components/SkeletalMeshComponent.h"
#include "Runtime/Engine/Classes/Components/SkinnedMeshComponent.h"
#include "Runtime/Engine/Classes/Engine/SkeletalMesh.h"
#include "Runtime/Engine/Classes/Engine/SkeletalMeshLODSettings.h"
#include "Runtime/Engine/Classes/Animation/AnimSequence.h"
#include "Runtime/Engine/Classes/Animation/AnimSequenceBase.h"
#include "Runtime/Engine/Classes/Animation/AnimationAsset.h"
#include "Runtime/Engine/Classes/Animation/Skeleton.h"
#include "Runtime/Engine/Classes/Engine/SkeletalMeshSocket.h"
#include "Runtime/Engine/Classes/Animation/SmartName.h"
#include "Runtime/Engine/Classes/Animation/BlendProfile.h"
#include "Runtime/Engine/Public/BoneContainer.h"
#include "Runtime/Engine/Classes/Interfaces/Interface_PreviewMeshProvider.h"
#include "Runtime/Engine/Classes/Animation/Rig.h"
#include "Runtime/Engine/Public/Animation/NodeMappingProviderInterface.h"
#include "Runtime/Engine/Classes/Animation/PreviewAssetAttachComponent.h"
#include "Runtime/Engine/Classes/Animation/AnimMetaData.h"
#include "Runtime/Engine/Classes/Animation/AssetMappingTable.h"
#include "Runtime/Engine/Classes/Animation/PoseAsset.h"
#include "Runtime/Engine/Public/Animation/AnimCurveTypes.h"
#include "Runtime/Engine/Public/Animation/AnimTypes.h"
#include "Runtime/Engine/Classes/Animation/AnimLinkableElement.h"
#include "Runtime/Engine/Classes/Animation/AnimMontage.h"
#include "Runtime/Engine/Classes/Animation/AnimCompositeBase.h"
#include "Runtime/Engine/Public/AlphaBlend.h"
#include "Runtime/Engine/Classes/Animation/AnimEnums.h"
#include "Runtime/Engine/Classes/Animation/TimeStretchCurve.h"
#include "Runtime/Engine/Classes/Animation/AnimNotifies/AnimNotify.h"
#include "Runtime/Engine/Classes/Animation/AnimNotifies/AnimNotifyState.h"
#include "Runtime/Engine/Classes/Animation/AnimBoneCompressionSettings.h"
#include "Runtime/Engine/Classes/Animation/AnimBoneCompressionCodec.h"
#include "Runtime/Engine/Classes/Animation/AnimCurveCompressionSettings.h"
#include "Runtime/Engine/Classes/Animation/AnimCurveCompressionCodec.h"
#include "Runtime/Engine/Classes/Animation/AnimCurveCompressionCodec_CompressedRichCurve.h"
#include "Runtime/Engine/Classes/Animation/CustomAttributes.h"
#include "Runtime/Engine/Classes/Curves/StringCurve.h"
#include "Runtime/Engine/Classes/Curves/IntegralCurve.h"
#include "Runtime/Engine/Classes/Curves/SimpleCurve.h"
#include "Runtime/Engine/Public/SkeletalMeshReductionSettings.h"
#include "Runtime/Engine/Public/Animation/NodeMappingContainer.h"
#include "Runtime/Engine/Classes/PhysicsEngine/PhysicsAsset.h"
#include "Runtime/Engine/Classes/PhysicsEngine/PhysicalAnimationComponent.h"
#include "Runtime/Engine/Classes/PhysicsEngine/PhysicsConstraintTemplate.h"
#include "Runtime/Engine/Classes/PhysicsEngine/ConstraintInstance.h"
#include "Runtime/Engine/Classes/PhysicsEngine/ConstraintTypes.h"
#include "Runtime/Engine/Classes/PhysicsEngine/ConstraintDrives.h"
#include "Runtime/Engine/Classes/Animation/MorphTarget.h"
#include "Runtime/Engine/Classes/Animation/AnimInstance.h"
#include "Runtime/Engine/Public/Animation/PoseSnapshot.h"
#include "Runtime/Engine/Public/Animation/AnimNotifyQueue.h"
#include "Runtime/ClothingSystemRuntimeInterface/Public/ClothingAssetBase.h"
#include "Runtime/Engine/Classes/Engine/SkeletalMeshSampling.h"
#include "Runtime/Engine/Public/Animation/SkinWeightProfile.h"
#include "Runtime/Engine/Classes/Engine/SkeletalMeshEditorData.h"
#include "Runtime/Engine/Public/LODSyncInterface.h"
#include "Runtime/ClothingSystemRuntimeInterface/Public/ClothingSimulationInteractor.h"
#include "Runtime/Engine/Classes/Animation/AnimBlueprintGeneratedClass.h"
#include "Runtime/Engine/Classes/Engine/DynamicBlueprintBinding.h"
#include "Runtime/Engine/Classes/Animation/AnimStateMachineTypes.h"
#include "Runtime/Engine/Classes/Animation/AnimClassInterface.h"
#include "Runtime/Engine/Classes/Animation/AnimNodeBase.h"
#include "Runtime/PropertyAccess/Public/PropertyAccess.h"
#include "Runtime/Engine/Public/SingleAnimationPlayData.h"
#include "Runtime/ClothingSystemRuntimeInterface/Public/ClothingSimulationFactory.h"
#include "Runtime/Engine/Classes/Animation/AnimBlueprint.h"
#include "Runtime/Engine/Classes/Engine/PoseWatch.h"
#include "Runtime/Engine/Classes/Particles/ParticleSystemReplay.h"
#include "Runtime/Engine/Classes/Engine/InterpCurveEdSetup.h"
#include "Runtime/Engine/Classes/Layers/Layer.h"
#include "Runtime/Engine/Classes/Engine/Engine.h"
#include "Runtime/Engine/Classes/GameFramework/GameUserSettings.h"
#include "Runtime/Engine/Classes/Engine/AssetManager.h"
#include "Runtime/Engine/Classes/Engine/EngineCustomTimeStep.h"
#include "Runtime/Engine/Classes/Engine/TimecodeProvider.h"
#include "Runtime/SlateCore/Public/Styling/SlateTypes.h"
#include "Runtime/UMG/Public/Blueprint/WidgetNavigation.h"
#include "Runtime/SlateCore/Public/Layout/FlowDirection.h"
#include "Runtime/UMG/Public/Binding/PropertyBinding.h"
#include "Runtime/UMG/Public/Binding/DynamicPropertyPath.h"
#include "Runtime/PropertyPath/Public/PropertyPathHelpers.h"
#include "Runtime/UMG/Public/Animation/WidgetAnimation.h"
#include "Runtime/MovieScene/Public/MovieSceneSequence.h"
#include "Runtime/MovieScene/Public/MovieSceneSignedObject.h"
#include "Runtime/MovieScene/Public/MovieSceneObjectBindingID.h"
#include "Runtime/MovieScene/Public/Compilation/MovieSceneCompiledDataManager.h"
#include "Runtime/MovieScene/Public/Evaluation/MovieSceneEvaluationTemplate.h"
#include "Runtime/MovieScene/Public/Evaluation/MovieSceneTrackIdentifier.h"
#include "Runtime/MovieScene/Public/Evaluation/MovieSceneEvaluationTrack.h"
#include "Runtime/MovieScene/Public/MovieSceneTrack.h"
#include "Runtime/MovieScene/Public/MovieSceneTrackEvaluationField.h"
#include "Runtime/MovieScene/Public/MovieSceneSection.h"
#include "Runtime/MovieScene/Public/Evaluation/MovieSceneCompletionMode.h"
#include "Runtime/MovieScene/Public/Evaluation/Blending/MovieSceneBlendType.h"
#include "Runtime/MovieScene/Public/Generators/MovieSceneEasingFunction.h"
#include "Runtime/MovieScene/Public/MovieSceneFrameMigration.h"
#include "Runtime/MovieScene/Public/Generators/MovieSceneEasingCurves.h"
#include "Runtime/MovieScene/Public/MovieScene.h"
#include "Runtime/MovieScene/Public/Evaluation/MovieSceneSegment.h"
#include "Runtime/MovieScene/Public/Evaluation/MovieSceneEvalTemplate.h"
#include "Runtime/MovieScene/Public/Evaluation/MovieSceneTrackImplementation.h"
#include "Runtime/MovieScene/Public/Evaluation/MovieSceneSequenceHierarchy.h"
#include "Runtime/MovieScene/Public/MovieSceneSequenceID.h"
#include "Runtime/MovieScene/Public/Evaluation/MovieSceneSequenceTransform.h"
#include "Runtime/MovieScene/Public/Evaluation/MovieSceneTimeTransform.h"
#include "Runtime/MovieScene/Public/Evaluation/MovieSceneTimeWarping.h"
#include "Runtime/MovieScene/Public/Evaluation/MovieSceneSequenceInstanceData.h"
#include "Runtime/MovieScene/Public/Evaluation/MovieSceneEvaluationField.h"
#include "Runtime/MovieScene/Public/Evaluation/MovieSceneEvaluationKey.h"
#include "Runtime/MovieScene/Public/MovieSceneFwd.h"
#include "Runtime/MovieScene/Public/MovieSceneSpawnable.h"
#include "Runtime/MovieScene/Public/MovieScenePossessable.h"
#include "Runtime/MovieScene/Public/MovieSceneBinding.h"
#include "Runtime/MovieScene/Public/MovieSceneFolder.h"
#include "Runtime/UMG/Public/Animation/WidgetAnimationBinding.h"
#include "Runtime/Slate/Public/Widgets/Layout/Anchors.h"
#include "Runtime/UMG/Public/Animation/UMGSequencePlayer.h"
#include "Runtime/MovieScene/Public/Evaluation/MovieSceneEvaluationTemplateInstance.h"
#include "Runtime/MovieScene/Public/EntitySystem/MovieSceneEntitySystemLinker.h"
#include "Runtime/MovieScene/Public/EntitySystem/MovieSceneEntitySystemGraphs.h"
#include "Runtime/UMG/Public/Blueprint/DragDropOperation.h"
#include "Runtime/Engine/Classes/Camera/CameraShakeBase.h"
#include "Runtime/Engine/Classes/Camera/CameraAnimInst.h"
#include "Runtime/Engine/Classes/Camera/CameraAnim.h"
#include "Runtime/Engine/Classes/Matinee/InterpGroup.h"
#include "Runtime/Engine/Classes/Matinee/InterpTrack.h"
#include "Runtime/Engine/Classes/Matinee/InterpTrackInst.h"
#include "Runtime/Engine/Classes/Engine/Scene.h"
#include "Runtime/Engine/Classes/Engine/TextureCube.h"
#include "Runtime/Engine/Classes/Matinee/InterpGroupInst.h"
#include "Runtime/Engine/Classes/Matinee/InterpTrackMove.h"
#include "Runtime/Engine/Classes/Matinee/InterpTrackInstMove.h"
#include "Runtime/Engine/Classes/Camera/CameraTypes.h"
#include "Runtime/Engine/Classes/Camera/CameraShakeSourceComponent.h"
#include "Runtime/Engine/Classes/Camera/CameraShake.h"
#include "Runtime/Engine/Classes/Camera/CameraModifier.h"
#include "Runtime/Engine/Classes/Particles/EmitterCameraLensEffectBase.h"
#include "Runtime/Engine/Classes/Particles/Emitter.h"
#include "Runtime/Engine/Classes/Components/ArrowComponent.h"
#include "Runtime/Engine/Classes/Camera/CameraModifier_CameraShake.h"
#include "Runtime/Engine/Classes/Camera/CameraActor.h"
#include "Runtime/Engine/Classes/Camera/CameraComponent.h"
#include "Runtime/UMG/Public/Animation/UMGSequenceTickManager.h"
#include "Runtime/Engine/Classes/Components/InputComponent.h"
#include "Runtime/Engine/Classes/GameFramework/PlayerInput.h"
#include "Runtime/UMG/Public/Components/NamedSlotInterface.h"
#include "Runtime/Engine/Classes/GameFramework/UpdateLevelVisibilityLevelInfo.h"
#include "Runtime/Engine/Classes/Haptics/HapticFeedbackEffect_Base.h"
#include "Runtime/Engine/Classes/Engine/LatentActionManager.h"
#include "Runtime/Engine/Classes/GameFramework/ForceFeedbackEffect.h"
#include "Runtime/Engine/Classes/GameFramework/TouchInterface.h"
#include "Runtime/Engine/Classes/Matinee/InterpTrackInstDirector.h"
#include "Runtime/Engine/Classes/GameFramework/CheatManager.h"
#include "Runtime/Engine/Classes/Engine/DebugCameraController.h"
#include "Runtime/Engine/Classes/Components/DrawFrustumComponent.h"
#include "Runtime/Engine/Classes/GameFramework/Character.h"
#include "Runtime/Engine/Classes/GameFramework/CharacterMovementReplication.h"
#include "Runtime/Engine/Classes/GameFramework/RootMotionSource.h"
#include "Runtime/Engine/Classes/GameFramework/CharacterMovementComponent.h"
#include "Runtime/Engine/Classes/AI/Navigation/NavigationAvoidanceTypes.h"
#include "Runtime/Engine/Public/AI/RVOAvoidanceInterface.h"
#include "Runtime/Engine/Classes/Interfaces/NetworkPredictionInterface.h"
#include "Runtime/Engine/Public/SceneTypes.h"
#include "Runtime/Engine/Classes/AI/Navigation/NavRelevantInterface.h"
#include "Runtime/Engine/Public/HitProxies.h"
#include "Runtime/Engine/Classes/Components/ChildActorComponent.h"
#include "Runtime/Engine/Classes/Matinee/MatineeActor.h"
#include "Runtime/Engine/Classes/Matinee/InterpData.h"
#include "Runtime/Engine/Classes/Matinee/InterpGroupDirector.h"
#include "Runtime/Engine/Classes/Matinee/InterpFilter.h"
#include "Runtime/Engine/Classes/Engine/CollisionProfile.h"
#include "Runtime/Engine/Classes/Kismet/GameplayStatics.h"
#include "Runtime/Engine/Classes/Components/AudioComponent.h"
#include "Runtime/AudioMixer/Public/Quartz/AudioMixerClockHandle.h"
#include "Runtime/Engine/Classes/Sound/QuartzQuantizationUtilities.h"
#include "Runtime/Engine/Classes/GameFramework/ForceFeedbackAttenuation.h"
#include "Runtime/Engine/Classes/Components/ForceFeedbackComponent.h"
#include "Runtime/Engine/Classes/Sound/DialogueWave.h"
#include "Runtime/Engine/Classes/Sound/DialogueTypes.h"
#include "Runtime/Engine/Classes/Sound/DialogueVoice.h"
#include "Runtime/Engine/Classes/Sound/DialogueSoundWaveProxy.h"
#include "Runtime/Engine/Classes/Components/DecalComponent.h"
#include "Runtime/Engine/Classes/GameFramework/SaveGame.h"
#include "Runtime/Engine/Classes/Kismet/GameplayStaticsTypes.h"
#include "Runtime/SlateCore/Public/Styling/SlateWidgetStyle.h"
#include "Runtime/SlateCore/Public/Sound/SlateSound.h"
#include "Runtime/SlateCore/Public/Fonts/SlateFontInfo.h"
#include "Runtime/Engine/Classes/Kismet/KismetStringLibrary.h"
#include "Runtime/Engine/Classes/Kismet/KismetTextLibrary.h"
#include "Runtime/Slate/Public/Framework/Commands/InputChord.h"
#include "Runtime/UMG/Public/Components/ContentWidget.h"
#include "Runtime/SlateCore/Public/Styling/SlateWidgetStyleAsset.h"
#include "Runtime/SlateCore/Public/Styling/SlateWidgetStyleContainerBase.h"
#include "Runtime/SlateCore/Public/Styling/SlateWidgetStyleContainerInterface.h"
#include "Runtime/Engine/Classes/Engine/Texture2DDynamic.h"
#include "Runtime/Engine/Public/Slate/SlateTextureAtlasInterface.h"
#include "Runtime/Engine/Classes/Slate/SlateBrushAsset.h"
#include "Runtime/UMG/Public/Components/TextWidgetTypes.h"
#include "Runtime/Slate/Public/Framework/Text/TextLayout.h"
#include "Runtime/SlateCore/Public/Fonts/FontCache.h"


#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
PRAGMA_DISABLE_OPTIMIZATION
Uwdg_optionmenu_C__pf3053510930::Uwdg_optionmenu_C__pf3053510930(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer)
{
	
	bpv__BACKKeySelector__pf = nullptr;
	bpv__Button_apply__pf = nullptr;
	bpv__Button_undo__pf = nullptr;
	bpv__ComboBoxString_528__pf = nullptr;
	bpv__FORWARDKeySelector__pf = nullptr;
	bpv__Image_39__pf = nullptr;
	bpv__Image_235__pf = nullptr;
	bpv__LEFTKeySelector__pf = nullptr;
	bpv__MOUS_RKeySelector__pf = nullptr;
	bpv__MOUSE_LKeySelector__pf = nullptr;
	bpv__RIGHTKeySelector__pf = nullptr;
	bpv__Slider_bgm__pf = nullptr;
	bpv__Slider_matser__pf = nullptr;
	bpv__Slider_sfx__pf = nullptr;
	bpv__TextBlock_1__pf = nullptr;
	bpv__TextBlock_8__pf = nullptr;
	bpv__TextBlock_616__pf = nullptr;
	bpv__mastervl__pf = 0.700000f;
	bpv__bgmvl__pf = 0.700000f;
	bpv__sfxvl__pf = 0.700000f;
	bpv__resol__pf = FString(TEXT("r.setRes "));
	bpv__selectedresol__pf = FString(TEXT(""));
	bHasScriptImplementedTick = false;
	bHasScriptImplementedPaint = false;
}
PRAGMA_ENABLE_OPTIMIZATION
void Uwdg_optionmenu_C__pf3053510930::PostLoadSubobjects(FObjectInstancingGraph* OuterInstanceGraph)
{
	Super::PostLoadSubobjects(OuterInstanceGraph);
}
PRAGMA_DISABLE_OPTIMIZATION
void Uwdg_optionmenu_C__pf3053510930::__CustomDynamicClassInitialization(UDynamicClass* InDynamicClass)
{
	ensure(0 == InDynamicClass->ReferencedConvertedFields.Num());
	ensure(0 == InDynamicClass->MiscConvertedSubobjects.Num());
	ensure(0 == InDynamicClass->DynamicBindingObjects.Num());
	ensure(0 == InDynamicClass->ComponentTemplates.Num());
	ensure(0 == InDynamicClass->Timelines.Num());
	ensure(0 == InDynamicClass->ComponentClassOverrides.Num());
	ensure(nullptr == InDynamicClass->AnimClassImplementation);
	InDynamicClass->AssembleReferenceTokenStream();
	FConvertedBlueprintsDependencies::FillUsedAssetsInDynamicClass(InDynamicClass, &__StaticDependencies_DirectlyUsedAssets);
	auto __Local__0 = NewObject<UComponentDelegateBinding>(InDynamicClass, UComponentDelegateBinding::StaticClass(), TEXT("ComponentDelegateBinding_1"), (EObjectFlags)0x00000000);
	InDynamicClass->DynamicBindingObjects.Add(__Local__0);
	auto __Local__1 = NewObject<UWidgetTree>(InDynamicClass, UWidgetTree::StaticClass(), TEXT("WidgetTree"), (EObjectFlags)0x00000008);
	InDynamicClass->MiscConvertedSubobjects.Add(__Local__1);
	__Local__0->ComponentDelegateBindings = TArray<FBlueprintComponentDelegateBinding> ();
	__Local__0->ComponentDelegateBindings.AddUninitialized(6);
	FBlueprintComponentDelegateBinding::StaticStruct()->InitializeStruct(__Local__0->ComponentDelegateBindings.GetData(), 6);
	auto& __Local__2 = __Local__0->ComponentDelegateBindings[0];
	__Local__2.ComponentPropertyName = FName(TEXT("ComboBoxString_528"));
	__Local__2.DelegatePropertyName = FName(TEXT("OnSelectionChanged"));
	__Local__2.FunctionNameToBind = FName(TEXT("BndEvt__wdg_optionmenu_ComboBoxString_528_K2Node_ComponentBoundEvent_5_OnSelectionChangedEvent__DelegateSignature"));
	auto& __Local__3 = __Local__0->ComponentDelegateBindings[1];
	__Local__3.ComponentPropertyName = FName(TEXT("Button_undo"));
	__Local__3.DelegatePropertyName = FName(TEXT("OnClicked"));
	__Local__3.FunctionNameToBind = FName(TEXT("BndEvt__wdg_optionmenu_Button_undo_K2Node_ComponentBoundEvent_4_OnButtonClickedEvent__DelegateSignature"));
	auto& __Local__4 = __Local__0->ComponentDelegateBindings[2];
	__Local__4.ComponentPropertyName = FName(TEXT("Button_apply"));
	__Local__4.DelegatePropertyName = FName(TEXT("OnClicked"));
	__Local__4.FunctionNameToBind = FName(TEXT("BndEvt__wdg_optionmenu_Button_apply_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature"));
	auto& __Local__5 = __Local__0->ComponentDelegateBindings[3];
	__Local__5.ComponentPropertyName = FName(TEXT("Slider_sfx"));
	__Local__5.DelegatePropertyName = FName(TEXT("OnValueChanged"));
	__Local__5.FunctionNameToBind = FName(TEXT("BndEvt__wdg_optionmenu_Slider_sfx_K2Node_ComponentBoundEvent_2_OnFloatValueChangedEvent__DelegateSignature"));
	auto& __Local__6 = __Local__0->ComponentDelegateBindings[4];
	__Local__6.ComponentPropertyName = FName(TEXT("Slider_matser"));
	__Local__6.DelegatePropertyName = FName(TEXT("OnValueChanged"));
	__Local__6.FunctionNameToBind = FName(TEXT("BndEvt__wdg_optionmenu_Slider_matser_K2Node_ComponentBoundEvent_1_OnFloatValueChangedEvent__DelegateSignature"));
	auto& __Local__7 = __Local__0->ComponentDelegateBindings[5];
	__Local__7.ComponentPropertyName = FName(TEXT("Slider_bgm"));
	__Local__7.DelegatePropertyName = FName(TEXT("OnValueChanged"));
	__Local__7.FunctionNameToBind = FName(TEXT("BndEvt__wdg_optionmenu_Slider_bgm_K2Node_ComponentBoundEvent_0_OnFloatValueChangedEvent__DelegateSignature"));
	auto __Local__8 = NewObject<UCanvasPanel>(__Local__1, TEXT("CanvasPanel_0"), (EObjectFlags)0x00280008);
	auto& __Local__9 = (*(AccessPrivateProperty<TArray<UPanelSlot*> >((__Local__8), UPanelWidget::__PPO__Slots() )));
	__Local__9 = TArray<UPanelSlot*> ();
	__Local__9.Reserve(2);
	auto __Local__10 = NewObject<UCanvasPanelSlot>(__Local__8, TEXT("CanvasPanelSlot_12"), (EObjectFlags)0x00280008);
	__Local__10->LayoutData.Offsets.Left = -4.000000f;
	__Local__10->LayoutData.Offsets.Right = 4.000000f;
	__Local__10->LayoutData.Offsets.Bottom = 0.000000f;
	__Local__10->LayoutData.Anchors.Maximum = FVector2D(1.000000, 1.000000);
	__Local__10->Parent = __Local__8;
	auto __Local__11 = NewObject<UImage>(__Local__1, TEXT("Image_39"), (EObjectFlags)0x00280008);
	__Local__11->ColorAndOpacity = FLinearColor(0.067708, 0.067708, 0.067708, 1.000000);
	__Local__11->Slot = __Local__10;
	__Local__10->Content = __Local__11;
	__Local__9.Add(__Local__10);
	auto __Local__12 = NewObject<UCanvasPanelSlot>(__Local__8, TEXT("CanvasPanelSlot_13"), (EObjectFlags)0x00280008);
	__Local__12->LayoutData.Offsets.Left = -416.000000f;
	__Local__12->LayoutData.Offsets.Top = -308.000000f;
	__Local__12->LayoutData.Offsets.Right = 800.000000f;
	__Local__12->LayoutData.Offsets.Bottom = 650.000000f;
	__Local__12->LayoutData.Anchors.Minimum = FVector2D(0.500000, 0.500000);
	__Local__12->LayoutData.Anchors.Maximum = FVector2D(0.500000, 0.500000);
	__Local__12->Parent = __Local__8;
	auto __Local__13 = NewObject<UVerticalBox>(__Local__1, TEXT("VerticalBox_77"), (EObjectFlags)0x00280008);
	auto& __Local__14 = (*(AccessPrivateProperty<TArray<UPanelSlot*> >((__Local__13), UPanelWidget::__PPO__Slots() )));
	__Local__14 = TArray<UPanelSlot*> ();
	__Local__14.Reserve(9);
	auto __Local__15 = NewObject<UVerticalBoxSlot>(__Local__13, TEXT("VerticalBoxSlot_5"), (EObjectFlags)0x00280008);
	__Local__15->HorizontalAlignment = EHorizontalAlignment::HAlign_Center;
	__Local__15->Parent = __Local__13;
	auto __Local__16 = NewObject<UTextBlock>(__Local__1, TEXT("TextBlock_294"), (EObjectFlags)0x00280008);
	__Local__16->Text = FTextStringHelper::CreateFromBuffer(
TEXT("NSLOCTEXT(\"[4A135A9348785CB0C5D9D0ABE80EEE11]\", \"4673FFBC42B8DA5E3157F69A79568E35\", \"OPTION\")")	);
	__Local__16->Font.Size = 72;
	__Local__16->Slot = __Local__15;
	__Local__15->Content = __Local__16;
	__Local__14.Add(__Local__15);
	auto __Local__17 = NewObject<UVerticalBoxSlot>(__Local__13, TEXT("VerticalBoxSlot_24"), (EObjectFlags)0x00280008);
	__Local__17->Parent = __Local__13;
	auto __Local__18 = NewObject<UHorizontalBox>(__Local__1, TEXT("bgmbox_1"), (EObjectFlags)0x00280008);
	auto& __Local__19 = (*(AccessPrivateProperty<TArray<UPanelSlot*> >((__Local__18), UPanelWidget::__PPO__Slots() )));
	__Local__19 = TArray<UPanelSlot*> ();
	__Local__19.Reserve(5);
	auto __Local__20 = NewObject<UHorizontalBoxSlot>(__Local__18, TEXT("HorizontalBoxSlot_0"), (EObjectFlags)0x00280008);
	__Local__20->VerticalAlignment = EVerticalAlignment::VAlign_Center;
	__Local__20->Parent = __Local__18;
	auto __Local__21 = NewObject<UTextBlock>(__Local__1, TEXT("TextBlock_7"), (EObjectFlags)0x00280008);
	__Local__21->Text = FTextStringHelper::CreateFromBuffer(
TEXT("NSLOCTEXT(\"[4A135A9348785CB0C5D9D0ABE80EEE11]\", \"99E02DB34EAC489BD7B07288411E67EA\", \"MASTER\")")	);
	__Local__21->Slot = __Local__20;
	__Local__20->Content = __Local__21;
	__Local__19.Add(__Local__20);
	auto __Local__22 = NewObject<UHorizontalBoxSlot>(__Local__18, TEXT("HorizontalBoxSlot_5"), (EObjectFlags)0x00280008);
	__Local__22->Parent = __Local__18;
	auto __Local__23 = NewObject<USpacer>(__Local__1, TEXT("Spacer_7"), (EObjectFlags)0x00280008);
	__Local__23->Size = FVector2D(5.000000, 1.000000);
	__Local__23->Slot = __Local__22;
	__Local__22->Content = __Local__23;
	__Local__19.Add(__Local__22);
	auto __Local__24 = NewObject<UHorizontalBoxSlot>(__Local__18, TEXT("HorizontalBoxSlot_3"), (EObjectFlags)0x00280008);
	__Local__24->Size.SizeRule = ESlateSizeRule::Type::Fill;
	__Local__24->VerticalAlignment = EVerticalAlignment::VAlign_Center;
	__Local__24->Parent = __Local__18;
	auto __Local__25 = NewObject<USlider>(__Local__1, TEXT("Slider_matser"), (EObjectFlags)0x00280008);
	__Local__25->Value = 0.700000f;
	__Local__25->Slot = __Local__24;
	__Local__24->Content = __Local__25;
	__Local__19.Add(__Local__24);
	auto __Local__26 = NewObject<UHorizontalBoxSlot>(__Local__18, TEXT("HorizontalBoxSlot_7"), (EObjectFlags)0x00280008);
	__Local__26->Parent = __Local__18;
	auto __Local__27 = NewObject<USpacer>(__Local__1, TEXT("Spacer_8"), (EObjectFlags)0x00280008);
	__Local__27->Size = FVector2D(20.000000, 1.000000);
	__Local__27->Slot = __Local__26;
	__Local__26->Content = __Local__27;
	__Local__19.Add(__Local__26);
	auto __Local__28 = NewObject<UHorizontalBoxSlot>(__Local__18, TEXT("HorizontalBoxSlot_2"), (EObjectFlags)0x00280008);
	__Local__28->VerticalAlignment = EVerticalAlignment::VAlign_Center;
	__Local__28->Parent = __Local__18;
	auto __Local__29 = NewObject<UTextBlock>(__Local__1, TEXT("TextBlock_8"), (EObjectFlags)0x00280008);
	__Local__29->Text = FTextStringHelper::CreateFromBuffer(
TEXT("NSLOCTEXT(\"UMG\", \"TextBlockDefaultValue\", \"Text Block\")")	);
	__Local__29->Slot = __Local__28;
	__Local__28->Content = __Local__29;
	__Local__19.Add(__Local__28);
	__Local__18->Slot = __Local__17;
	__Local__17->Content = __Local__18;
	__Local__14.Add(__Local__17);
	auto __Local__30 = NewObject<UVerticalBoxSlot>(__Local__13, TEXT("VerticalBoxSlot_1"), (EObjectFlags)0x00280008);
	__Local__30->Parent = __Local__13;
	auto __Local__31 = NewObject<UHorizontalBox>(__Local__1, TEXT("bgmbox"), (EObjectFlags)0x00280008);
	auto& __Local__32 = (*(AccessPrivateProperty<TArray<UPanelSlot*> >((__Local__31), UPanelWidget::__PPO__Slots() )));
	__Local__32 = TArray<UPanelSlot*> ();
	__Local__32.Reserve(5);
	auto __Local__33 = NewObject<UHorizontalBoxSlot>(__Local__31, TEXT("HorizontalBoxSlot_0"), (EObjectFlags)0x00280008);
	__Local__33->VerticalAlignment = EVerticalAlignment::VAlign_Center;
	__Local__33->Parent = __Local__31;
	auto __Local__34 = NewObject<UTextBlock>(__Local__1, TEXT("TextBlock_177"), (EObjectFlags)0x00280008);
	__Local__34->Text = FTextStringHelper::CreateFromBuffer(
TEXT("NSLOCTEXT(\"[4A135A9348785CB0C5D9D0ABE80EEE11]\", \"E7FDEAE5467AC6DFEA16379D4BC5A9D4\", \"BGM\")")	);
	__Local__34->Slot = __Local__33;
	__Local__33->Content = __Local__34;
	__Local__32.Add(__Local__33);
	auto __Local__35 = NewObject<UHorizontalBoxSlot>(__Local__31, TEXT("HorizontalBoxSlot_5"), (EObjectFlags)0x00280008);
	__Local__35->Parent = __Local__31;
	auto __Local__36 = NewObject<USpacer>(__Local__1, TEXT("Spacer_3"), (EObjectFlags)0x00280008);
	__Local__36->Size = FVector2D(60.000000, 1.000000);
	__Local__36->Slot = __Local__35;
	__Local__35->Content = __Local__36;
	__Local__32.Add(__Local__35);
	auto __Local__37 = NewObject<UHorizontalBoxSlot>(__Local__31, TEXT("HorizontalBoxSlot_1"), (EObjectFlags)0x00280008);
	__Local__37->Size.SizeRule = ESlateSizeRule::Type::Fill;
	__Local__37->VerticalAlignment = EVerticalAlignment::VAlign_Center;
	__Local__37->Parent = __Local__31;
	auto __Local__38 = NewObject<USlider>(__Local__1, TEXT("Slider_bgm"), (EObjectFlags)0x00280008);
	__Local__38->Value = 0.700000f;
	__Local__38->Slot = __Local__37;
	__Local__37->Content = __Local__38;
	__Local__32.Add(__Local__37);
	auto __Local__39 = NewObject<UHorizontalBoxSlot>(__Local__31, TEXT("HorizontalBoxSlot_7"), (EObjectFlags)0x00280008);
	__Local__39->Parent = __Local__31;
	auto __Local__40 = NewObject<USpacer>(__Local__1, TEXT("Spacer_4"), (EObjectFlags)0x00280008);
	__Local__40->Size = FVector2D(20.000000, 1.000000);
	__Local__40->Slot = __Local__39;
	__Local__39->Content = __Local__40;
	__Local__32.Add(__Local__39);
	auto __Local__41 = NewObject<UHorizontalBoxSlot>(__Local__31, TEXT("HorizontalBoxSlot_2"), (EObjectFlags)0x00280008);
	__Local__41->VerticalAlignment = EVerticalAlignment::VAlign_Center;
	__Local__41->Parent = __Local__31;
	auto __Local__42 = NewObject<UTextBlock>(__Local__1, TEXT("TextBlock_616"), (EObjectFlags)0x00280008);
	__Local__42->Text = FTextStringHelper::CreateFromBuffer(
TEXT("NSLOCTEXT(\"UMG\", \"TextBlockDefaultValue\", \"Text Block\")")	);
	__Local__42->Slot = __Local__41;
	__Local__41->Content = __Local__42;
	__Local__32.Add(__Local__41);
	__Local__31->Slot = __Local__30;
	__Local__30->Content = __Local__31;
	__Local__14.Add(__Local__30);
	auto __Local__43 = NewObject<UVerticalBoxSlot>(__Local__13, TEXT("VerticalBoxSlot_6"), (EObjectFlags)0x00280008);
	__Local__43->Parent = __Local__13;
	auto __Local__44 = NewObject<UHorizontalBox>(__Local__1, TEXT("sfxbox"), (EObjectFlags)0x00280008);
	auto& __Local__45 = (*(AccessPrivateProperty<TArray<UPanelSlot*> >((__Local__44), UPanelWidget::__PPO__Slots() )));
	__Local__45 = TArray<UPanelSlot*> ();
	__Local__45.Reserve(5);
	auto __Local__46 = NewObject<UHorizontalBoxSlot>(__Local__44, TEXT("HorizontalBoxSlot_0"), (EObjectFlags)0x00280008);
	__Local__46->VerticalAlignment = EVerticalAlignment::VAlign_Center;
	__Local__46->Parent = __Local__44;
	auto __Local__47 = NewObject<UTextBlock>(__Local__1, TEXT("TextBlock"), (EObjectFlags)0x00280008);
	__Local__47->Text = FTextStringHelper::CreateFromBuffer(
TEXT("NSLOCTEXT(\"[4A135A9348785CB0C5D9D0ABE80EEE11]\", \"79552087452F02FCC9B5A1A68603B25D\", \"SFX\")")	);
	__Local__47->Slot = __Local__46;
	__Local__46->Content = __Local__47;
	__Local__45.Add(__Local__46);
	auto __Local__48 = NewObject<UHorizontalBoxSlot>(__Local__44, TEXT("HorizontalBoxSlot_3"), (EObjectFlags)0x00280008);
	__Local__48->Parent = __Local__44;
	auto __Local__49 = NewObject<USpacer>(__Local__1, TEXT("Spacer_400"), (EObjectFlags)0x00280008);
	__Local__49->Size = FVector2D(70.000000, 1.000000);
	__Local__49->Slot = __Local__48;
	__Local__48->Content = __Local__49;
	__Local__45.Add(__Local__48);
	auto __Local__50 = NewObject<UHorizontalBoxSlot>(__Local__44, TEXT("HorizontalBoxSlot_1"), (EObjectFlags)0x00280008);
	__Local__50->Size.SizeRule = ESlateSizeRule::Type::Fill;
	__Local__50->VerticalAlignment = EVerticalAlignment::VAlign_Center;
	__Local__50->Parent = __Local__44;
	auto __Local__51 = NewObject<USlider>(__Local__1, TEXT("Slider_sfx"), (EObjectFlags)0x00280008);
	__Local__51->Value = 0.700000f;
	__Local__51->Slot = __Local__50;
	__Local__50->Content = __Local__51;
	__Local__45.Add(__Local__50);
	auto __Local__52 = NewObject<UHorizontalBoxSlot>(__Local__44, TEXT("HorizontalBoxSlot_5"), (EObjectFlags)0x00280008);
	__Local__52->Parent = __Local__44;
	auto __Local__53 = NewObject<USpacer>(__Local__1, TEXT("Spacer_2"), (EObjectFlags)0x00280008);
	__Local__53->Size = FVector2D(20.000000, 1.000000);
	__Local__53->Slot = __Local__52;
	__Local__52->Content = __Local__53;
	__Local__45.Add(__Local__52);
	auto __Local__54 = NewObject<UHorizontalBoxSlot>(__Local__44, TEXT("HorizontalBoxSlot_2"), (EObjectFlags)0x00280008);
	__Local__54->VerticalAlignment = EVerticalAlignment::VAlign_Center;
	__Local__54->Parent = __Local__44;
	auto __Local__55 = NewObject<UTextBlock>(__Local__1, TEXT("TextBlock_1"), (EObjectFlags)0x00280008);
	__Local__55->Text = FTextStringHelper::CreateFromBuffer(
TEXT("NSLOCTEXT(\"UMG\", \"TextBlockDefaultValue\", \"Text Block\")")	);
	__Local__55->Slot = __Local__54;
	__Local__54->Content = __Local__55;
	__Local__45.Add(__Local__54);
	__Local__44->Slot = __Local__43;
	__Local__43->Content = __Local__44;
	__Local__14.Add(__Local__43);
	auto __Local__56 = NewObject<UVerticalBoxSlot>(__Local__13, TEXT("VerticalBoxSlot_8"), (EObjectFlags)0x00280008);
	__Local__56->Parent = __Local__13;
	auto __Local__57 = NewObject<UHorizontalBox>(__Local__1, TEXT("combo"), (EObjectFlags)0x00280008);
	auto& __Local__58 = (*(AccessPrivateProperty<TArray<UPanelSlot*> >((__Local__57), UPanelWidget::__PPO__Slots() )));
	__Local__58 = TArray<UPanelSlot*> ();
	__Local__58.Reserve(5);
	auto __Local__59 = NewObject<UHorizontalBoxSlot>(__Local__57, TEXT("HorizontalBoxSlot_3"), (EObjectFlags)0x00280008);
	__Local__59->Parent = __Local__57;
	auto __Local__60 = NewObject<USpacer>(__Local__1, TEXT("Spacer_110"), (EObjectFlags)0x00280008);
	__Local__60->Size = FVector2D(200.000000, 1.000000);
	__Local__60->Slot = __Local__59;
	__Local__59->Content = __Local__60;
	__Local__58.Add(__Local__59);
	auto __Local__61 = NewObject<UHorizontalBoxSlot>(__Local__57, TEXT("HorizontalBoxSlot_2"), (EObjectFlags)0x00280008);
	__Local__61->Parent = __Local__57;
	auto __Local__62 = NewObject<UTextBlock>(__Local__1, TEXT("TextBlock_712"), (EObjectFlags)0x00280008);
	__Local__62->Text = FTextStringHelper::CreateFromBuffer(
TEXT("NSLOCTEXT(\"[4A135A9348785CB0C5D9D0ABE80EEE11]\", \"556FEAF7467E7924EC2910A3F9423792\", \"Resolution\")")	);
	__Local__62->Slot = __Local__61;
	__Local__61->Content = __Local__62;
	__Local__58.Add(__Local__61);
	auto __Local__63 = NewObject<UHorizontalBoxSlot>(__Local__57, TEXT("HorizontalBoxSlot_5"), (EObjectFlags)0x00280008);
	__Local__63->Parent = __Local__57;
	auto __Local__64 = NewObject<USpacer>(__Local__1, TEXT("Spacer"), (EObjectFlags)0x00280008);
	__Local__64->Size = FVector2D(27.198849, 1.000000);
	__Local__64->Slot = __Local__63;
	__Local__63->Content = __Local__64;
	__Local__58.Add(__Local__63);
	auto __Local__65 = NewObject<UHorizontalBoxSlot>(__Local__57, TEXT("HorizontalBoxSlot_0"), (EObjectFlags)0x00280008);
	__Local__65->Size.SizeRule = ESlateSizeRule::Type::Fill;
	__Local__65->Parent = __Local__57;
	auto __Local__66 = NewObject<UComboBoxString>(__Local__1, TEXT("ComboBoxString_528"), (EObjectFlags)0x00280008);
	auto& __Local__67 = (*(AccessPrivateProperty<TArray<FString> >((__Local__66), UComboBoxString::__PPO__DefaultOptions() )));
	__Local__67 = TArray<FString> ();
	__Local__67.Reserve(3);
	__Local__67.Add(FString(TEXT("640x480")));
	__Local__67.Add(FString(TEXT("1280x720")));
	__Local__67.Add(FString(TEXT("1920x1080")));
	__Local__66->Slot = __Local__65;
	__Local__65->Content = __Local__66;
	__Local__58.Add(__Local__65);
	auto __Local__68 = NewObject<UHorizontalBoxSlot>(__Local__57, TEXT("HorizontalBoxSlot_7"), (EObjectFlags)0x00280008);
	__Local__68->Parent = __Local__57;
	auto __Local__69 = NewObject<USpacer>(__Local__1, TEXT("Spacer_1"), (EObjectFlags)0x00280008);
	__Local__69->Size = FVector2D(200.000000, 1.000000);
	__Local__69->Slot = __Local__68;
	__Local__68->Content = __Local__69;
	__Local__58.Add(__Local__68);
	__Local__57->Slot = __Local__56;
	__Local__56->Content = __Local__57;
	__Local__14.Add(__Local__56);
	auto __Local__70 = NewObject<UVerticalBoxSlot>(__Local__13, TEXT("VerticalBoxSlot_13"), (EObjectFlags)0x00280008);
	__Local__70->HorizontalAlignment = EHorizontalAlignment::HAlign_Center;
	__Local__70->VerticalAlignment = EVerticalAlignment::VAlign_Center;
	__Local__70->Parent = __Local__13;
	auto __Local__71 = NewObject<UTextBlock>(__Local__1, TEXT("TextBlock_799"), (EObjectFlags)0x00280008);
	__Local__71->Text = FTextStringHelper::CreateFromBuffer(
TEXT("NSLOCTEXT(\"[4A135A9348785CB0C5D9D0ABE80EEE11]\", \"6B680BD34395012749DC1EAFD8839134\", \"INPUT\")")	);
	__Local__71->Slot = __Local__70;
	__Local__70->Content = __Local__71;
	__Local__14.Add(__Local__70);
	auto __Local__72 = NewObject<UVerticalBoxSlot>(__Local__13, TEXT("VerticalBoxSlot_12"), (EObjectFlags)0x00280008);
	__Local__72->HorizontalAlignment = EHorizontalAlignment::HAlign_Center;
	__Local__72->Parent = __Local__13;
	auto __Local__73 = NewObject<UHorizontalBox>(__Local__1, TEXT("inputmouseL"), (EObjectFlags)0x00280008);
	auto& __Local__74 = (*(AccessPrivateProperty<TArray<UPanelSlot*> >((__Local__73), UPanelWidget::__PPO__Slots() )));
	__Local__74 = TArray<UPanelSlot*> ();
	__Local__74.Reserve(3);
	auto __Local__75 = NewObject<UHorizontalBoxSlot>(__Local__73, TEXT("HorizontalBoxSlot_3"), (EObjectFlags)0x00280008);
	__Local__75->Parent = __Local__73;
	auto __Local__76 = NewObject<UVerticalBox>(__Local__1, TEXT("inputTEXT"), (EObjectFlags)0x00280008);
	auto& __Local__77 = (*(AccessPrivateProperty<TArray<UPanelSlot*> >((__Local__76), UPanelWidget::__PPO__Slots() )));
	__Local__77 = TArray<UPanelSlot*> ();
	__Local__77.Reserve(6);
	auto __Local__78 = NewObject<UVerticalBoxSlot>(__Local__76, TEXT("VerticalBoxSlot_10"), (EObjectFlags)0x00280008);
	__Local__78->Size.SizeRule = ESlateSizeRule::Type::Fill;
	__Local__78->HorizontalAlignment = EHorizontalAlignment::HAlign_Center;
	__Local__78->Parent = __Local__76;
	auto __Local__79 = NewObject<UTextBlock>(__Local__1, TEXT("TextBlock_1097"), (EObjectFlags)0x00280008);
	__Local__79->Text = FTextStringHelper::CreateFromBuffer(
TEXT("NSLOCTEXT(\"[4A135A9348785CB0C5D9D0ABE80EEE11]\", \"CAE57B9B49335BBBFA9BA09540391B3F\", \"MOVE FORWARD\")")	);
	__Local__79->Slot = __Local__78;
	__Local__78->Content = __Local__79;
	__Local__77.Add(__Local__78);
	auto __Local__80 = NewObject<UVerticalBoxSlot>(__Local__76, TEXT("VerticalBoxSlot_3"), (EObjectFlags)0x00280008);
	__Local__80->Size.SizeRule = ESlateSizeRule::Type::Fill;
	__Local__80->HorizontalAlignment = EHorizontalAlignment::HAlign_Center;
	__Local__80->Parent = __Local__76;
	auto __Local__81 = NewObject<UTextBlock>(__Local__1, TEXT("TextBlock_2"), (EObjectFlags)0x00280008);
	__Local__81->Text = FTextStringHelper::CreateFromBuffer(
TEXT("NSLOCTEXT(\"[4A135A9348785CB0C5D9D0ABE80EEE11]\", \"63AFA3AA4E2BE9D69684448C7DB2A1A2\", \"MOVE RIGHT\")")	);
	__Local__81->Slot = __Local__80;
	__Local__80->Content = __Local__81;
	__Local__77.Add(__Local__80);
	auto __Local__82 = NewObject<UVerticalBoxSlot>(__Local__76, TEXT("VerticalBoxSlot_4"), (EObjectFlags)0x00280008);
	__Local__82->Size.SizeRule = ESlateSizeRule::Type::Fill;
	__Local__82->HorizontalAlignment = EHorizontalAlignment::HAlign_Center;
	__Local__82->Parent = __Local__76;
	auto __Local__83 = NewObject<UTextBlock>(__Local__1, TEXT("TextBlock_3"), (EObjectFlags)0x00280008);
	__Local__83->Text = FTextStringHelper::CreateFromBuffer(
TEXT("NSLOCTEXT(\"[4A135A9348785CB0C5D9D0ABE80EEE11]\", \"2234A3C54F09CDEB38D9DA811D7127A4\", \"MOVE LEFT\")")	);
	__Local__83->Slot = __Local__82;
	__Local__82->Content = __Local__83;
	__Local__77.Add(__Local__82);
	auto __Local__84 = NewObject<UVerticalBoxSlot>(__Local__76, TEXT("VerticalBoxSlot_11"), (EObjectFlags)0x00280008);
	__Local__84->Size.SizeRule = ESlateSizeRule::Type::Fill;
	__Local__84->HorizontalAlignment = EHorizontalAlignment::HAlign_Center;
	__Local__84->Parent = __Local__76;
	auto __Local__85 = NewObject<UTextBlock>(__Local__1, TEXT("TextBlock_4"), (EObjectFlags)0x00280008);
	__Local__85->Text = FTextStringHelper::CreateFromBuffer(
TEXT("NSLOCTEXT(\"[4A135A9348785CB0C5D9D0ABE80EEE11]\", \"F2C7BCF04CDB257A5E9B14A314AF89F2\", \"MOVE BACK\")")	);
	__Local__85->Slot = __Local__84;
	__Local__84->Content = __Local__85;
	__Local__77.Add(__Local__84);
	auto __Local__86 = NewObject<UVerticalBoxSlot>(__Local__76, TEXT("VerticalBoxSlot_6"), (EObjectFlags)0x00280008);
	__Local__86->Size.SizeRule = ESlateSizeRule::Type::Fill;
	__Local__86->HorizontalAlignment = EHorizontalAlignment::HAlign_Center;
	__Local__86->Parent = __Local__76;
	auto __Local__87 = NewObject<UTextBlock>(__Local__1, TEXT("TextBlock_5"), (EObjectFlags)0x00280008);
	__Local__87->Text = FTextStringHelper::CreateFromBuffer(
TEXT("NSLOCTEXT(\"[4A135A9348785CB0C5D9D0ABE80EEE11]\", \"7D07A7424A8228CAEEF1DBA47AB955C1\", \"SHOOT\")")	);
	__Local__87->Slot = __Local__86;
	__Local__86->Content = __Local__87;
	__Local__77.Add(__Local__86);
	auto __Local__88 = NewObject<UVerticalBoxSlot>(__Local__76, TEXT("VerticalBoxSlot_7"), (EObjectFlags)0x00280008);
	__Local__88->Size.SizeRule = ESlateSizeRule::Type::Fill;
	__Local__88->HorizontalAlignment = EHorizontalAlignment::HAlign_Center;
	__Local__88->Parent = __Local__76;
	auto __Local__89 = NewObject<UTextBlock>(__Local__1, TEXT("TextBlock_6"), (EObjectFlags)0x00280008);
	__Local__89->Text = FTextStringHelper::CreateFromBuffer(
TEXT("NSLOCTEXT(\"[4A135A9348785CB0C5D9D0ABE80EEE11]\", \"BDA63793489749D6B11806AC1865134E\", \"AIM\")")	);
	__Local__89->Slot = __Local__88;
	__Local__88->Content = __Local__89;
	__Local__77.Add(__Local__88);
	__Local__76->Slot = __Local__75;
	__Local__75->Content = __Local__76;
	__Local__74.Add(__Local__75);
	auto __Local__90 = NewObject<UHorizontalBoxSlot>(__Local__73, TEXT("HorizontalBoxSlot_5"), (EObjectFlags)0x00280008);
	__Local__90->HorizontalAlignment = EHorizontalAlignment::HAlign_Center;
	__Local__90->Parent = __Local__73;
	auto __Local__91 = NewObject<UImage>(__Local__1, TEXT("Image_235"), (EObjectFlags)0x00280008);
	__Local__91->Slot = __Local__90;
	__Local__90->Content = __Local__91;
	__Local__74.Add(__Local__90);
	auto __Local__92 = NewObject<UHorizontalBoxSlot>(__Local__73, TEXT("HorizontalBoxSlot_4"), (EObjectFlags)0x00280008);
	__Local__92->Parent = __Local__73;
	auto __Local__93 = NewObject<UVerticalBox>(__Local__1, TEXT("unputBOX"), (EObjectFlags)0x00280008);
	auto& __Local__94 = (*(AccessPrivateProperty<TArray<UPanelSlot*> >((__Local__93), UPanelWidget::__PPO__Slots() )));
	__Local__94 = TArray<UPanelSlot*> ();
	__Local__94.Reserve(6);
	auto __Local__95 = NewObject<UVerticalBoxSlot>(__Local__93, TEXT("VerticalBoxSlot_0"), (EObjectFlags)0x00280008);
	__Local__95->Size.SizeRule = ESlateSizeRule::Type::Fill;
	__Local__95->Parent = __Local__93;
	auto __Local__96 = NewObject<UInputKeySelector>(__Local__1, TEXT("FORWARDKeySelector"), (EObjectFlags)0x00280008);
	__Local__96->Slot = __Local__95;
	__Local__95->Content = __Local__96;
	__Local__94.Add(__Local__95);
	auto __Local__97 = NewObject<UVerticalBoxSlot>(__Local__93, TEXT("VerticalBoxSlot_1"), (EObjectFlags)0x00280008);
	__Local__97->Size.SizeRule = ESlateSizeRule::Type::Fill;
	__Local__97->Parent = __Local__93;
	auto __Local__98 = NewObject<UInputKeySelector>(__Local__1, TEXT("RIGHTKeySelector"), (EObjectFlags)0x00280008);
	__Local__98->Slot = __Local__97;
	__Local__97->Content = __Local__98;
	__Local__94.Add(__Local__97);
	auto __Local__99 = NewObject<UVerticalBoxSlot>(__Local__93, TEXT("VerticalBoxSlot_2"), (EObjectFlags)0x00280008);
	__Local__99->Size.SizeRule = ESlateSizeRule::Type::Fill;
	__Local__99->Parent = __Local__93;
	auto __Local__100 = NewObject<UInputKeySelector>(__Local__1, TEXT("LEFTKeySelector"), (EObjectFlags)0x00280008);
	__Local__100->Slot = __Local__99;
	__Local__99->Content = __Local__100;
	__Local__94.Add(__Local__99);
	auto __Local__101 = NewObject<UVerticalBoxSlot>(__Local__93, TEXT("VerticalBoxSlot_3"), (EObjectFlags)0x00280008);
	__Local__101->Size.SizeRule = ESlateSizeRule::Type::Fill;
	__Local__101->Parent = __Local__93;
	auto __Local__102 = NewObject<UInputKeySelector>(__Local__1, TEXT("BACKKeySelector"), (EObjectFlags)0x00280008);
	__Local__102->Slot = __Local__101;
	__Local__101->Content = __Local__102;
	__Local__94.Add(__Local__101);
	auto __Local__103 = NewObject<UVerticalBoxSlot>(__Local__93, TEXT("VerticalBoxSlot_5"), (EObjectFlags)0x00280008);
	__Local__103->Size.SizeRule = ESlateSizeRule::Type::Fill;
	__Local__103->Parent = __Local__93;
	auto __Local__104 = NewObject<UInputKeySelector>(__Local__1, TEXT("MOUS_RKeySelector"), (EObjectFlags)0x00280008);
	__Local__104->Slot = __Local__103;
	__Local__103->Content = __Local__104;
	__Local__94.Add(__Local__103);
	auto __Local__105 = NewObject<UVerticalBoxSlot>(__Local__93, TEXT("VerticalBoxSlot_4"), (EObjectFlags)0x00280008);
	__Local__105->Size.SizeRule = ESlateSizeRule::Type::Fill;
	__Local__105->Parent = __Local__93;
	auto __Local__106 = NewObject<UInputKeySelector>(__Local__1, TEXT("MOUSE_LKeySelector"), (EObjectFlags)0x00280008);
	__Local__106->Slot = __Local__105;
	__Local__105->Content = __Local__106;
	__Local__94.Add(__Local__105);
	__Local__93->Slot = __Local__92;
	__Local__92->Content = __Local__93;
	__Local__74.Add(__Local__92);
	__Local__73->Slot = __Local__72;
	__Local__72->Content = __Local__73;
	__Local__14.Add(__Local__72);
	auto __Local__107 = NewObject<UVerticalBoxSlot>(__Local__13, TEXT("VerticalBoxSlot_23"), (EObjectFlags)0x00280008);
	__Local__107->Parent = __Local__13;
	auto __Local__108 = NewObject<USpacer>(__Local__1, TEXT("Spacer_6"), (EObjectFlags)0x00280008);
	__Local__108->Size = FVector2D(0.000000, 29.005453);
	__Local__108->Slot = __Local__107;
	__Local__107->Content = __Local__108;
	__Local__14.Add(__Local__107);
	auto __Local__109 = NewObject<UVerticalBoxSlot>(__Local__13, TEXT("VerticalBoxSlot_16"), (EObjectFlags)0x00280008);
	__Local__109->HorizontalAlignment = EHorizontalAlignment::HAlign_Center;
	__Local__109->Parent = __Local__13;
	auto __Local__110 = NewObject<UHorizontalBox>(__Local__1, TEXT("HorizontalBox_745"), (EObjectFlags)0x00280008);
	auto& __Local__111 = (*(AccessPrivateProperty<TArray<UPanelSlot*> >((__Local__110), UPanelWidget::__PPO__Slots() )));
	__Local__111 = TArray<UPanelSlot*> ();
	__Local__111.Reserve(3);
	auto __Local__112 = NewObject<UHorizontalBoxSlot>(__Local__110, TEXT("HorizontalBoxSlot_0"), (EObjectFlags)0x00280008);
	__Local__112->Parent = __Local__110;
	auto __Local__113 = NewObject<UButton>(__Local__1, TEXT("Button_apply"), (EObjectFlags)0x00280008);
	auto& __Local__114 = (*(AccessPrivateProperty<TArray<UPanelSlot*> >((__Local__113), UPanelWidget::__PPO__Slots() )));
	__Local__114 = TArray<UPanelSlot*> ();
	__Local__114.Reserve(1);
	auto __Local__115 = NewObject<UButtonSlot>(__Local__113, TEXT("ButtonSlot_0"), (EObjectFlags)0x00280008);
	__Local__115->Padding.Left = 0.000000f;
	__Local__115->Padding.Top = 0.000000f;
	__Local__115->Padding.Right = 0.000000f;
	__Local__115->Padding.Bottom = 0.000000f;
	__Local__115->VerticalAlignment = EVerticalAlignment::VAlign_Fill;
	__Local__115->Parent = __Local__113;
	auto __Local__116 = NewObject<UTextBlock>(__Local__1, TEXT("TextBlock_1179"), (EObjectFlags)0x00280008);
	__Local__116->Text = FTextStringHelper::CreateFromBuffer(
TEXT("NSLOCTEXT(\"[4A135A9348785CB0C5D9D0ABE80EEE11]\", \"40DBE8E340A60C2A855168B5F8483C19\", \"    APPLY    \")")	);
	auto& __Local__117 = (*(AccessPrivateProperty<FLinearColor >(&(__Local__116->ColorAndOpacity), FSlateColor::__PPO__SpecifiedColor() )));
	__Local__117 = FLinearColor(0.000000, 0.000000, 0.000000, 1.000000);
	__Local__116->Slot = __Local__115;
	__Local__115->Content = __Local__116;
	__Local__114.Add(__Local__115);
	__Local__113->Slot = __Local__112;
	__Local__112->Content = __Local__113;
	__Local__111.Add(__Local__112);
	auto __Local__118 = NewObject<UHorizontalBoxSlot>(__Local__110, TEXT("HorizontalBoxSlot_2"), (EObjectFlags)0x00280008);
	__Local__118->Parent = __Local__110;
	auto __Local__119 = NewObject<USpacer>(__Local__1, TEXT("Spacer_5"), (EObjectFlags)0x00280008);
	__Local__119->Size = FVector2D(100.000000, 0.000000);
	__Local__119->Slot = __Local__118;
	__Local__118->Content = __Local__119;
	__Local__111.Add(__Local__118);
	auto __Local__120 = NewObject<UHorizontalBoxSlot>(__Local__110, TEXT("HorizontalBoxSlot_1"), (EObjectFlags)0x00280008);
	__Local__120->HorizontalAlignment = EHorizontalAlignment::HAlign_Center;
	__Local__120->Parent = __Local__110;
	auto __Local__121 = NewObject<UButton>(__Local__1, TEXT("Button_undo"), (EObjectFlags)0x00280008);
	auto& __Local__122 = (*(AccessPrivateProperty<TArray<UPanelSlot*> >((__Local__121), UPanelWidget::__PPO__Slots() )));
	__Local__122 = TArray<UPanelSlot*> ();
	__Local__122.Reserve(1);
	auto __Local__123 = NewObject<UButtonSlot>(__Local__121, TEXT("ButtonSlot_0"), (EObjectFlags)0x00280008);
	__Local__123->Parent = __Local__121;
	auto __Local__124 = NewObject<UTextBlock>(__Local__1, TEXT("TextBlock_1240"), (EObjectFlags)0x00280008);
	__Local__124->Text = FTextStringHelper::CreateFromBuffer(
TEXT("NSLOCTEXT(\"[4A135A9348785CB0C5D9D0ABE80EEE11]\", \"9A1316A740A849D6C1E484BF49A7C752\", \"UNDO\")")	);
	auto& __Local__125 = (*(AccessPrivateProperty<FLinearColor >(&(__Local__124->ColorAndOpacity), FSlateColor::__PPO__SpecifiedColor() )));
	__Local__125 = FLinearColor(0.000000, 0.000000, 0.000000, 1.000000);
	__Local__124->Slot = __Local__123;
	__Local__123->Content = __Local__124;
	__Local__122.Add(__Local__123);
	__Local__121->Slot = __Local__120;
	__Local__120->Content = __Local__121;
	__Local__111.Add(__Local__120);
	__Local__110->Slot = __Local__109;
	__Local__109->Content = __Local__110;
	__Local__14.Add(__Local__109);
	__Local__13->Slot = __Local__12;
	__Local__12->Content = __Local__13;
	__Local__9.Add(__Local__12);
	__Local__1->RootWidget = __Local__8;
}
PRAGMA_ENABLE_OPTIMIZATION
void Uwdg_optionmenu_C__pf3053510930::GetSlotNames(TArray<FName>& SlotNames) const
{
	TArray<FName>  __Local__126;
	SlotNames.Append(__Local__126);
}
void Uwdg_optionmenu_C__pf3053510930::InitializeNativeClassData()
{
	TArray<UWidgetAnimation*>  __Local__127;
	TArray<FDelegateRuntimeBinding>  __Local__128;
	__Local__128.AddUninitialized(6);
	FDelegateRuntimeBinding::StaticStruct()->InitializeStruct(__Local__128.GetData(), 6);
	auto& __Local__129 = __Local__128[0];
	__Local__129.ObjectName = FString(TEXT("TextBlock_8"));
	__Local__129.PropertyName = FName(TEXT("Text"));
	__Local__129.FunctionName = FName(TEXT("GetText_0"));
	auto& __Local__130 = (*(AccessPrivateProperty<TArray<FPropertyPathSegment> >(&(__Local__129.SourcePath), FCachedPropertyPath::__PPO__Segments() )));
	__Local__130 = TArray<FPropertyPathSegment> ();
	__Local__130.AddUninitialized(1);
	FPropertyPathSegment::StaticStruct()->InitializeStruct(__Local__130.GetData(), 1);
	auto& __Local__131 = __Local__130[0];
	__Local__131.Name = FName(TEXT("GetText_0"));
	auto& __Local__132 = __Local__128[1];
	__Local__132.ObjectName = FString(TEXT("TextBlock_616"));
	__Local__132.PropertyName = FName(TEXT("Text"));
	__Local__132.FunctionName = FName(TEXT("GetText_1"));
	auto& __Local__133 = (*(AccessPrivateProperty<TArray<FPropertyPathSegment> >(&(__Local__132.SourcePath), FCachedPropertyPath::__PPO__Segments() )));
	__Local__133 = TArray<FPropertyPathSegment> ();
	__Local__133.AddUninitialized(1);
	FPropertyPathSegment::StaticStruct()->InitializeStruct(__Local__133.GetData(), 1);
	auto& __Local__134 = __Local__133[0];
	__Local__134.Name = FName(TEXT("GetText_1"));
	auto& __Local__135 = __Local__128[2];
	__Local__135.ObjectName = FString(TEXT("TextBlock_1"));
	__Local__135.PropertyName = FName(TEXT("Text"));
	__Local__135.FunctionName = FName(TEXT("GetText_2"));
	auto& __Local__136 = (*(AccessPrivateProperty<TArray<FPropertyPathSegment> >(&(__Local__135.SourcePath), FCachedPropertyPath::__PPO__Segments() )));
	__Local__136 = TArray<FPropertyPathSegment> ();
	__Local__136.AddUninitialized(1);
	FPropertyPathSegment::StaticStruct()->InitializeStruct(__Local__136.GetData(), 1);
	auto& __Local__137 = __Local__136[0];
	__Local__137.Name = FName(TEXT("GetText_2"));
	auto& __Local__138 = __Local__128[3];
	__Local__138.ObjectName = FString(TEXT("Slider_matser"));
	__Local__138.PropertyName = FName(TEXT("Value"));
	auto& __Local__139 = (*(AccessPrivateProperty<TArray<FPropertyPathSegment> >(&(__Local__138.SourcePath), FCachedPropertyPath::__PPO__Segments() )));
	__Local__139 = TArray<FPropertyPathSegment> ();
	__Local__139.AddUninitialized(1);
	FPropertyPathSegment::StaticStruct()->InitializeStruct(__Local__139.GetData(), 1);
	auto& __Local__140 = __Local__139[0];
	__Local__140.Name = FName(TEXT("mastervl"));
	__Local__138.Kind = EBindingKind::Property;
	auto& __Local__141 = __Local__128[4];
	__Local__141.ObjectName = FString(TEXT("Slider_bgm"));
	__Local__141.PropertyName = FName(TEXT("Value"));
	auto& __Local__142 = (*(AccessPrivateProperty<TArray<FPropertyPathSegment> >(&(__Local__141.SourcePath), FCachedPropertyPath::__PPO__Segments() )));
	__Local__142 = TArray<FPropertyPathSegment> ();
	__Local__142.AddUninitialized(1);
	FPropertyPathSegment::StaticStruct()->InitializeStruct(__Local__142.GetData(), 1);
	auto& __Local__143 = __Local__142[0];
	__Local__143.Name = FName(TEXT("bgmvl"));
	__Local__141.Kind = EBindingKind::Property;
	auto& __Local__144 = __Local__128[5];
	__Local__144.ObjectName = FString(TEXT("Slider_sfx"));
	__Local__144.PropertyName = FName(TEXT("Value"));
	auto& __Local__145 = (*(AccessPrivateProperty<TArray<FPropertyPathSegment> >(&(__Local__144.SourcePath), FCachedPropertyPath::__PPO__Segments() )));
	__Local__145 = TArray<FPropertyPathSegment> ();
	__Local__145.AddUninitialized(1);
	FPropertyPathSegment::StaticStruct()->InitializeStruct(__Local__145.GetData(), 1);
	auto& __Local__146 = __Local__145[0];
	__Local__146.Name = FName(TEXT("sfxvl"));
	__Local__144.Kind = EBindingKind::Property;
	UWidgetBlueprintGeneratedClass::InitializeWidgetStatic(this, GetClass(), CastChecked<UWidgetTree>(CastChecked<UDynamicClass>(Uwdg_optionmenu_C__pf3053510930::StaticClass())->MiscConvertedSubobjects[0]), __Local__127, __Local__128);
}
void Uwdg_optionmenu_C__pf3053510930::PreSave(const class ITargetPlatform* TargetPlatform)
{
	Super::PreSave(TargetPlatform);
	TArray<FName> LocalNamedSlots;
	GetSlotNames(LocalNamedSlots);
	RemoveObsoleteBindings(LocalNamedSlots);
}
void Uwdg_optionmenu_C__pf3053510930::bpf__ExecuteUbergraph_wdg_optionmenu__pf_0(int32 bpp__EntryPoint__pf)
{
	FString bpfv__CallFunc_GetSelectedOption_ReturnValue__pf{};
	FString bpfv__CallFunc_Concat_StrStr_ReturnValue__pf{};
	check(bpp__EntryPoint__pf == 20);
	// optimized KCST_UnconditionalGoto
	if(::IsValid(bpv__ComboBoxString_528__pf))
	{
		bpfv__CallFunc_GetSelectedOption_ReturnValue__pf = bpv__ComboBoxString_528__pf->UComboBoxString::GetSelectedOption();
	}
	bpfv__CallFunc_Concat_StrStr_ReturnValue__pf = UKismetStringLibrary::Concat_StrStr(bpv__resol__pf, bpfv__CallFunc_GetSelectedOption_ReturnValue__pf);
	bpv__selectedresol__pf = bpfv__CallFunc_Concat_StrStr_ReturnValue__pf;
	return; // KCST_GotoReturn
}
void Uwdg_optionmenu_C__pf3053510930::bpf__ExecuteUbergraph_wdg_optionmenu__pf_1(int32 bpp__EntryPoint__pf)
{
	float bpfv__CallFunc_GetValue_ReturnValue__pf{};
	float bpfv__CallFunc_GetValue_ReturnValue_1__pf{};
	float bpfv__CallFunc_GetValue_ReturnValue_2__pf{};
	check(bpp__EntryPoint__pf == 11);
	// optimized KCST_UnconditionalGoto
	if(::IsValid(bpv__Slider_matser__pf))
	{
		bpfv__CallFunc_GetValue_ReturnValue_1__pf = bpv__Slider_matser__pf->USlider::GetValue();
	}
	bpv__mastervl__pf = bpfv__CallFunc_GetValue_ReturnValue_1__pf;
	if(::IsValid(bpv__Slider_bgm__pf))
	{
		bpfv__CallFunc_GetValue_ReturnValue__pf = bpv__Slider_bgm__pf->USlider::GetValue();
	}
	bpv__bgmvl__pf = bpfv__CallFunc_GetValue_ReturnValue__pf;
	if(::IsValid(bpv__Slider_sfx__pf))
	{
		bpfv__CallFunc_GetValue_ReturnValue_2__pf = bpv__Slider_sfx__pf->USlider::GetValue();
	}
	bpv__sfxvl__pf = bpfv__CallFunc_GetValue_ReturnValue_2__pf;
	// optimized KCST_UnconditionalGoto
	UKismetSystemLibrary::ExecuteConsoleCommand(this, bpv__selectedresol__pf, ((APlayerController*)nullptr));
	RemoveFromParent();
	return; // KCST_GotoReturn
}
void Uwdg_optionmenu_C__pf3053510930::bpf__ExecuteUbergraph_wdg_optionmenu__pf_2(int32 bpp__EntryPoint__pf)
{
	check(bpp__EntryPoint__pf == 15);
	// optimized KCST_UnconditionalGoto
	UGameplayStatics::SetSoundMixClassOverride(this, CastChecked<USoundMix>(CastChecked<UDynamicClass>(Uwdg_optionmenu_C__pf3053510930::StaticClass())->UsedAssets[0], ECastCheckedType::NullAllowed), CastChecked<USoundClass>(CastChecked<UDynamicClass>(Uwdg_optionmenu_C__pf3053510930::StaticClass())->UsedAssets[1], ECastCheckedType::NullAllowed), bpv__mastervl__pf, 1.000000, 1.000000, true);
	UGameplayStatics::SetSoundMixClassOverride(this, CastChecked<USoundMix>(CastChecked<UDynamicClass>(Uwdg_optionmenu_C__pf3053510930::StaticClass())->UsedAssets[2], ECastCheckedType::NullAllowed), CastChecked<USoundClass>(CastChecked<UDynamicClass>(Uwdg_optionmenu_C__pf3053510930::StaticClass())->UsedAssets[3], ECastCheckedType::NullAllowed), bpv__bgmvl__pf, 1.000000, 1.000000, true);
	UGameplayStatics::SetSoundMixClassOverride(this, CastChecked<USoundMix>(CastChecked<UDynamicClass>(Uwdg_optionmenu_C__pf3053510930::StaticClass())->UsedAssets[4], ECastCheckedType::NullAllowed), CastChecked<USoundClass>(CastChecked<UDynamicClass>(Uwdg_optionmenu_C__pf3053510930::StaticClass())->UsedAssets[5], ECastCheckedType::NullAllowed), bpv__sfxvl__pf, 1.000000, 1.000000, true);
	RemoveFromParent();
	return; // KCST_GotoReturn
}
void Uwdg_optionmenu_C__pf3053510930::bpf__ExecuteUbergraph_wdg_optionmenu__pf_3(int32 bpp__EntryPoint__pf)
{
	check(bpp__EntryPoint__pf == 3);
	// optimized KCST_UnconditionalGoto
	bpf__ResetOptionInfo__pf();
	return; // KCST_GotoReturn
}
void Uwdg_optionmenu_C__pf3053510930::bpf__ExecuteUbergraph_wdg_optionmenu__pf_4(int32 bpp__EntryPoint__pf)
{
	check(bpp__EntryPoint__pf == 9);
	// optimized KCST_UnconditionalGoto
	UGameplayStatics::SetSoundMixClassOverride(this, CastChecked<USoundMix>(CastChecked<UDynamicClass>(Uwdg_optionmenu_C__pf3053510930::StaticClass())->UsedAssets[4], ECastCheckedType::NullAllowed), CastChecked<USoundClass>(CastChecked<UDynamicClass>(Uwdg_optionmenu_C__pf3053510930::StaticClass())->UsedAssets[5], ECastCheckedType::NullAllowed), b0l__K2Node_ComponentBoundEvent_Value__pf, 1.000000, 1.000000, true);
	return; // KCST_GotoReturn
}
void Uwdg_optionmenu_C__pf3053510930::bpf__ExecuteUbergraph_wdg_optionmenu__pf_5(int32 bpp__EntryPoint__pf)
{
	check(bpp__EntryPoint__pf == 7);
	// optimized KCST_UnconditionalGoto
	UGameplayStatics::SetSoundMixClassOverride(this, CastChecked<USoundMix>(CastChecked<UDynamicClass>(Uwdg_optionmenu_C__pf3053510930::StaticClass())->UsedAssets[0], ECastCheckedType::NullAllowed), CastChecked<USoundClass>(CastChecked<UDynamicClass>(Uwdg_optionmenu_C__pf3053510930::StaticClass())->UsedAssets[1], ECastCheckedType::NullAllowed), b0l__K2Node_ComponentBoundEvent_Value_1__pf, 1.000000, 1.000000, true);
	return; // KCST_GotoReturn
}
void Uwdg_optionmenu_C__pf3053510930::bpf__ExecuteUbergraph_wdg_optionmenu__pf_6(int32 bpp__EntryPoint__pf)
{
	check(bpp__EntryPoint__pf == 5);
	// optimized KCST_UnconditionalGoto
	UGameplayStatics::SetSoundMixClassOverride(this, CastChecked<USoundMix>(CastChecked<UDynamicClass>(Uwdg_optionmenu_C__pf3053510930::StaticClass())->UsedAssets[2], ECastCheckedType::NullAllowed), CastChecked<USoundClass>(CastChecked<UDynamicClass>(Uwdg_optionmenu_C__pf3053510930::StaticClass())->UsedAssets[3], ECastCheckedType::NullAllowed), b0l__K2Node_ComponentBoundEvent_Value_2__pf, 1.000000, 1.000000, true);
	return; // KCST_GotoReturn
}
void Uwdg_optionmenu_C__pf3053510930::bpf__BndEvt__wdg_optionmenu_ComboBoxString_528_K2Node_ComponentBoundEvent_5_OnSelectionChangedEvent__DelegateSignature__pf(const FString& bpp__SelectedItem__pf__const, ESelectInfo::Type bpp__SelectionType__pf)
{
	typedef FString  T__Local__147;
	T__Local__147& bpp__SelectedItem__pf = *const_cast<T__Local__147 *>(&bpp__SelectedItem__pf__const);
	b0l__K2Node_ComponentBoundEvent_SelectedItem__pf = bpp__SelectedItem__pf;
	b0l__K2Node_ComponentBoundEvent_SelectionType__pf = bpp__SelectionType__pf;
	bpf__ExecuteUbergraph_wdg_optionmenu__pf_0(20);
}
void Uwdg_optionmenu_C__pf3053510930::bpf__BndEvt__wdg_optionmenu_Button_undo_K2Node_ComponentBoundEvent_4_OnButtonClickedEvent__DelegateSignature__pf()
{
	bpf__ExecuteUbergraph_wdg_optionmenu__pf_2(15);
}
void Uwdg_optionmenu_C__pf3053510930::bpf__BndEvt__wdg_optionmenu_Button_apply_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature__pf()
{
	bpf__ExecuteUbergraph_wdg_optionmenu__pf_1(11);
}
void Uwdg_optionmenu_C__pf3053510930::bpf__BndEvt__wdg_optionmenu_Slider_sfx_K2Node_ComponentBoundEvent_2_OnFloatValueChangedEvent__DelegateSignature__pf(float bpp__Value__pf)
{
	b0l__K2Node_ComponentBoundEvent_Value__pf = bpp__Value__pf;
	bpf__ExecuteUbergraph_wdg_optionmenu__pf_4(9);
}
void Uwdg_optionmenu_C__pf3053510930::bpf__BndEvt__wdg_optionmenu_Slider_matser_K2Node_ComponentBoundEvent_1_OnFloatValueChangedEvent__DelegateSignature__pf(float bpp__Value__pf)
{
	b0l__K2Node_ComponentBoundEvent_Value_1__pf = bpp__Value__pf;
	bpf__ExecuteUbergraph_wdg_optionmenu__pf_5(7);
}
void Uwdg_optionmenu_C__pf3053510930::bpf__BndEvt__wdg_optionmenu_Slider_bgm_K2Node_ComponentBoundEvent_0_OnFloatValueChangedEvent__DelegateSignature__pf(float bpp__Value__pf)
{
	b0l__K2Node_ComponentBoundEvent_Value_2__pf = bpp__Value__pf;
	bpf__ExecuteUbergraph_wdg_optionmenu__pf_6(5);
}
void Uwdg_optionmenu_C__pf3053510930::bpf__Construct__pf()
{
	bpf__ExecuteUbergraph_wdg_optionmenu__pf_3(3);
}
FText  Uwdg_optionmenu_C__pf3053510930::bpf__GetText_0__pf()
{
	FText bpp__ReturnValue__pf{};
	float bpfv__CallFunc_GetValue_ReturnValue__pf{};
	FText bpfv__CallFunc_Conv_FloatToText_ReturnValue__pf{};
	if(::IsValid(bpv__Slider_matser__pf))
	{
		bpfv__CallFunc_GetValue_ReturnValue__pf = bpv__Slider_matser__pf->USlider::GetValue();
	}
	bpfv__CallFunc_Conv_FloatToText_ReturnValue__pf = UKismetTextLibrary::Conv_FloatToText(bpfv__CallFunc_GetValue_ReturnValue__pf, ERoundingMode::HalfToEven, false, true, 1, 324, 0, 3);
	bpp__ReturnValue__pf = bpfv__CallFunc_Conv_FloatToText_ReturnValue__pf;
	return bpp__ReturnValue__pf;
}
FText  Uwdg_optionmenu_C__pf3053510930::bpf__GetText_1__pf()
{
	FText bpp__ReturnValue__pf{};
	float bpfv__CallFunc_GetValue_ReturnValue__pf{};
	FText bpfv__CallFunc_Conv_FloatToText_ReturnValue__pf{};
	if(::IsValid(bpv__Slider_bgm__pf))
	{
		bpfv__CallFunc_GetValue_ReturnValue__pf = bpv__Slider_bgm__pf->USlider::GetValue();
	}
	bpfv__CallFunc_Conv_FloatToText_ReturnValue__pf = UKismetTextLibrary::Conv_FloatToText(bpfv__CallFunc_GetValue_ReturnValue__pf, ERoundingMode::HalfToEven, false, true, 1, 324, 0, 3);
	bpp__ReturnValue__pf = bpfv__CallFunc_Conv_FloatToText_ReturnValue__pf;
	return bpp__ReturnValue__pf;
}
FText  Uwdg_optionmenu_C__pf3053510930::bpf__GetText_2__pf()
{
	FText bpp__ReturnValue__pf{};
	float bpfv__CallFunc_GetValue_ReturnValue__pf{};
	FText bpfv__CallFunc_Conv_FloatToText_ReturnValue__pf{};
	if(::IsValid(bpv__Slider_sfx__pf))
	{
		bpfv__CallFunc_GetValue_ReturnValue__pf = bpv__Slider_sfx__pf->USlider::GetValue();
	}
	bpfv__CallFunc_Conv_FloatToText_ReturnValue__pf = UKismetTextLibrary::Conv_FloatToText(bpfv__CallFunc_GetValue_ReturnValue__pf, ERoundingMode::HalfToEven, false, true, 1, 324, 0, 3);
	bpp__ReturnValue__pf = bpfv__CallFunc_Conv_FloatToText_ReturnValue__pf;
	return bpp__ReturnValue__pf;
}
void Uwdg_optionmenu_C__pf3053510930::bpf__ResetOptionInfo__pf()
{
	if(::IsValid(bpv__Slider_matser__pf))
	{
		bpv__Slider_matser__pf->USlider::SetValue(bpv__mastervl__pf);
	}
	if(::IsValid(bpv__Slider_bgm__pf))
	{
		bpv__Slider_bgm__pf->USlider::SetValue(bpv__bgmvl__pf);
	}
	if(::IsValid(bpv__Slider_sfx__pf))
	{
		bpv__Slider_sfx__pf->USlider::SetValue(bpv__sfxvl__pf);
	}
	if(::IsValid(bpv__ComboBoxString_528__pf))
	{
		bpv__ComboBoxString_528__pf->UComboBoxString::SetSelectedIndex(1);
	}
}
PRAGMA_DISABLE_OPTIMIZATION
void Uwdg_optionmenu_C__pf3053510930::__StaticDependencies_DirectlyUsedAssets(TArray<FBlueprintDependencyData>& AssetsToLoad)
{
	const FCompactBlueprintDependencyData LocCompactBlueprintDependencyData[] =
	{
		{170, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  SoundMix /Game/blueprints/others/Sounds/Master_Mix.Master_Mix 
		{171, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  SoundClass /Game/blueprints/others/Sounds/Sounds_MASTER.Sounds_MASTER 
		{172, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  SoundMix /Game/blueprints/others/Sounds/BGM_Mix.BGM_Mix 
		{173, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  SoundClass /Game/blueprints/others/Sounds/BGM.BGM 
		{174, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  SoundMix /Game/blueprints/others/Sounds/SFX_Mix.SFX_Mix 
		{175, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  SoundClass /Game/blueprints/others/Sounds/SFX.SFX 
	};
	for(const FCompactBlueprintDependencyData& CompactData : LocCompactBlueprintDependencyData)
	{
		AssetsToLoad.Add(FBlueprintDependencyData(F__NativeDependencies::Get(CompactData.ObjectRefIndex), CompactData));
	}
}
PRAGMA_ENABLE_OPTIMIZATION
PRAGMA_DISABLE_OPTIMIZATION
void Uwdg_optionmenu_C__pf3053510930::__StaticDependenciesAssets(TArray<FBlueprintDependencyData>& AssetsToLoad)
{
	__StaticDependencies_DirectlyUsedAssets(AssetsToLoad);
	const FCompactBlueprintDependencyData LocCompactBlueprintDependencyData[] =
	{
		{56, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Font /Engine/EngineFonts/Roboto.Roboto 
		{176, FBlueprintDependencyType(true, false, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Enum /Script/SlateCore.ESelectInfo 
		{7, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.KismetSystemLibrary 
		{14, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.GameplayStatics 
		{177, FBlueprintDependencyType(true, false, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/UMG.Slider 
		{178, FBlueprintDependencyType(true, false, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/UMG.ComboBoxString 
		{12, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.KismetStringLibrary 
		{28, FBlueprintDependencyType(true, false, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/UMG.UserWidget 
		{89, FBlueprintDependencyType(false, true, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/Engine.KismetTextLibrary 
		{15, FBlueprintDependencyType(true, false, false, false), FBlueprintDependencyType(false, false, false, false)},  //  ScriptStruct /Script/Engine.PointerToUberGraphFrame 
		{179, FBlueprintDependencyType(true, false, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/UMG.InputKeySelector 
		{88, FBlueprintDependencyType(true, false, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/UMG.Button 
		{36, FBlueprintDependencyType(true, false, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/UMG.Image 
		{37, FBlueprintDependencyType(true, false, false, false), FBlueprintDependencyType(false, false, false, false)},  //  Class /Script/UMG.TextBlock 
	};
	for(const FCompactBlueprintDependencyData& CompactData : LocCompactBlueprintDependencyData)
	{
		AssetsToLoad.Add(FBlueprintDependencyData(F__NativeDependencies::Get(CompactData.ObjectRefIndex), CompactData));
	}
}
PRAGMA_ENABLE_OPTIMIZATION
struct FRegisterHelper__Uwdg_optionmenu_C__pf3053510930
{
	FRegisterHelper__Uwdg_optionmenu_C__pf3053510930()
	{
		FConvertedBlueprintsDependencies::Get().RegisterConvertedClass(TEXT("/Game/blueprints/UI/wdg_optionmenu"), &Uwdg_optionmenu_C__pf3053510930::__StaticDependenciesAssets);
	}
	static FRegisterHelper__Uwdg_optionmenu_C__pf3053510930 Instance;
};
FRegisterHelper__Uwdg_optionmenu_C__pf3053510930 FRegisterHelper__Uwdg_optionmenu_C__pf3053510930::Instance;
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
