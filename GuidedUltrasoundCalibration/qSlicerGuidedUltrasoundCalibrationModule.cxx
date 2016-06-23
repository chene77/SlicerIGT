/*==============================================================================

  Program: 3D Slicer

  Portions (c) Copyright Brigham and Women's Hospital (BWH) All Rights Reserved.

  See COPYRIGHT.txt
  or http://www.slicer.org/copyright/copyright.txt for details.

  Unless required by applicable law or agreed to in writing, software
  distributed under the License is distributed on an "AS IS" BASIS,
  WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
  See the License for the specific language governing permissions and
  limitations under the License.

==============================================================================*/

// Qt includes
#include <QtPlugin>

// GuidedUltrasoundCalibration Logic includes
#include <vtkSlicerGuidedUltrasoundCalibrationLogic.h>

// GuidedUltrasoundCalibration includes
#include "qSlicerGuidedUltrasoundCalibrationModule.h"
#include "qSlicerGuidedUltrasoundCalibrationModuleWidget.h"

//-----------------------------------------------------------------------------
Q_EXPORT_PLUGIN2(qSlicerGuidedUltrasoundCalibrationModule, qSlicerGuidedUltrasoundCalibrationModule);

//-----------------------------------------------------------------------------
/// \ingroup Slicer_QtModules_ExtensionTemplate
class qSlicerGuidedUltrasoundCalibrationModulePrivate
{
public:
  qSlicerGuidedUltrasoundCalibrationModulePrivate();
};

//-----------------------------------------------------------------------------
// qSlicerGuidedUltrasoundCalibrationModulePrivate methods

//-----------------------------------------------------------------------------
qSlicerGuidedUltrasoundCalibrationModulePrivate::qSlicerGuidedUltrasoundCalibrationModulePrivate()
{
}

//-----------------------------------------------------------------------------
// qSlicerGuidedUltrasoundCalibrationModule methods

//-----------------------------------------------------------------------------
qSlicerGuidedUltrasoundCalibrationModule::qSlicerGuidedUltrasoundCalibrationModule(QObject* _parent)
  : Superclass(_parent)
  , d_ptr(new qSlicerGuidedUltrasoundCalibrationModulePrivate)
{
}

//-----------------------------------------------------------------------------
qSlicerGuidedUltrasoundCalibrationModule::~qSlicerGuidedUltrasoundCalibrationModule()
{
}

//-----------------------------------------------------------------------------
QString qSlicerGuidedUltrasoundCalibrationModule::helpText() const
{
  return "For technical detail, including point-line registration and TRE estimation, please refer to the following paper: <a href='http://link.springer.com/article/10.1007/s11548-016-1390-7'>Guided UltraSound Calibration</a>.";
}

//-----------------------------------------------------------------------------
QString qSlicerGuidedUltrasoundCalibrationModule::acknowledgementText() const
{
  return "This work was partially funded by Canadian Institutes in Health Research (CIHR, Canada), Ontario Research Foundation (ORF, Canada), Canadian Foundation for Innovation (CFI, Canada), and Natural Sciences and Engineering Research Council, Discovery Grant (NSERC, Canada)";
}

//-----------------------------------------------------------------------------
QStringList qSlicerGuidedUltrasoundCalibrationModule::contributors() const
{
  QStringList moduleContributors;
  
  moduleContributors << QString("Elvis C.S. Chen (Robarts Research Institute)");
  moduleContributors << QString("Adam Rankin (Robarts Research Institute)");
  moduleContributors << QString("Tamas Ungi (Queen's University)");
  moduleContributors << QString("Inês Parta (Instituto Surperior Técnico)");

  return moduleContributors;
}

//-----------------------------------------------------------------------------
QIcon qSlicerGuidedUltrasoundCalibrationModule::icon() const
{
  return QIcon(":/Icons/GuidedUltrasoundCalibration.png");
}

//-----------------------------------------------------------------------------
QStringList qSlicerGuidedUltrasoundCalibrationModule::categories() const
{
  return QStringList() << "IGT";
}

//-----------------------------------------------------------------------------
QStringList qSlicerGuidedUltrasoundCalibrationModule::dependencies() const
{
  return QStringList();
}

//-----------------------------------------------------------------------------
void qSlicerGuidedUltrasoundCalibrationModule::setup()
{
  this->Superclass::setup();
}

//-----------------------------------------------------------------------------
qSlicerAbstractModuleRepresentation* qSlicerGuidedUltrasoundCalibrationModule
::createWidgetRepresentation()
{
  return new qSlicerGuidedUltrasoundCalibrationModuleWidget;
}

//-----------------------------------------------------------------------------
vtkMRMLAbstractLogic* qSlicerGuidedUltrasoundCalibrationModule::createLogic()
{
  return vtkSlicerGuidedUltrasoundCalibrationLogic::New();
}
