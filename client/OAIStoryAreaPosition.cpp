/**
 * Telegram Bot API - REST API Client
 * Auto-generated OpenAPI schema
 * 
 * ## Metadata
 *   
 * - **Copyright**: Copyright (c) 2025 Qntx
 * - **Author**: ΣX <gitctrlx@gmail.com>
 * - **Version**: 9.0.0
 * - **Modified**: 2025-07-01T14:14:29.176360440Z[Etc/UTC]
 * - **Generator Version**: 7.14.0
 *
 * <details>
 * <summary><strong>⚠️ Important Disclaimer & Limitation of Liability</strong></summary>
 * <br>
 * > **IMPORTANT**: This software is provided "as is" without any warranties, express or implied, including but not limited
 * > to warranties of merchantability, fitness for a particular purpose, or non-infringement. The developers, contributors,
 * > and licensors (collectively, "Developers") make no representations regarding the accuracy, completeness, or reliability
 * > of this software or its outputs.
 * >
 * > This client is not intended to provide financial, investment, tax, or legal advice. It facilitates interaction with the
 * > Telegram Bot API service but does not endorse or recommend any financial actions, including the purchase, sale, or holding of
 * > financial instruments (e.g., stocks, bonds, derivatives, cryptocurrencies). Users must consult qualified financial or
 * > legal professionals before making decisions based on this software's outputs.
 * >
 * > Financial markets are inherently speculative and carry significant risks. Using this software in trading, analysis, or
 * > other financial activities may result in substantial losses, including total loss of capital. The Developers are not
 * > liable for any losses or damages arising from such use. Users assume full responsibility for validating the software's
 * > outputs and ensuring their suitability for intended purposes.
 * >
 * > This client may rely on third-party data or services (e.g., market feeds, APIs). The Developers do not control or verify
 * > the accuracy of these services and are not liable for any errors, delays, or losses resulting from their use. Users must
 * > comply with third-party terms and conditions.
 * >
 * > Users are solely responsible for ensuring compliance with all applicable financial, tax, and regulatory requirements in
 * > their jurisdiction. This includes obtaining necessary licenses or approvals for trading or investment activities. The
 * > Developers disclaim liability for any legal consequences arising from non-compliance.
 * >
 * > To the fullest extent permitted by law, the Developers shall not be liable for any direct, indirect, incidental,
 * > consequential, or punitive damages arising from the use or inability to use this software, including but not limited to
 * > loss of profits, data, or business opportunities.
 *
 * </details>
 */

#include "OAIStoryAreaPosition.h"

#include <QDebug>
#include <QJsonArray>
#include <QJsonDocument>
#include <QObject>

#include "OAIHelpers.h"

namespace tele_rest {

OAIStoryAreaPosition::OAIStoryAreaPosition(QString json) {
    this->initializeModel();
    this->fromJson(json);
}

OAIStoryAreaPosition::OAIStoryAreaPosition() {
    this->initializeModel();
}

OAIStoryAreaPosition::~OAIStoryAreaPosition() {}

void OAIStoryAreaPosition::initializeModel() {

    m_x_percentage_isSet = false;
    m_x_percentage_isValid = false;

    m_y_percentage_isSet = false;
    m_y_percentage_isValid = false;

    m_width_percentage_isSet = false;
    m_width_percentage_isValid = false;

    m_height_percentage_isSet = false;
    m_height_percentage_isValid = false;

    m_rotation_angle_isSet = false;
    m_rotation_angle_isValid = false;

    m_corner_radius_percentage_isSet = false;
    m_corner_radius_percentage_isValid = false;
}

void OAIStoryAreaPosition::fromJson(QString jsonString) {
    QByteArray array(jsonString.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
}

void OAIStoryAreaPosition::fromJsonObject(QJsonObject json) {

    m_x_percentage_isValid = ::tele_rest::fromJsonValue(m_x_percentage, json[QString("x_percentage")]);
    m_x_percentage_isSet = !json[QString("x_percentage")].isNull() && m_x_percentage_isValid;

    m_y_percentage_isValid = ::tele_rest::fromJsonValue(m_y_percentage, json[QString("y_percentage")]);
    m_y_percentage_isSet = !json[QString("y_percentage")].isNull() && m_y_percentage_isValid;

    m_width_percentage_isValid = ::tele_rest::fromJsonValue(m_width_percentage, json[QString("width_percentage")]);
    m_width_percentage_isSet = !json[QString("width_percentage")].isNull() && m_width_percentage_isValid;

    m_height_percentage_isValid = ::tele_rest::fromJsonValue(m_height_percentage, json[QString("height_percentage")]);
    m_height_percentage_isSet = !json[QString("height_percentage")].isNull() && m_height_percentage_isValid;

    m_rotation_angle_isValid = ::tele_rest::fromJsonValue(m_rotation_angle, json[QString("rotation_angle")]);
    m_rotation_angle_isSet = !json[QString("rotation_angle")].isNull() && m_rotation_angle_isValid;

    m_corner_radius_percentage_isValid = ::tele_rest::fromJsonValue(m_corner_radius_percentage, json[QString("corner_radius_percentage")]);
    m_corner_radius_percentage_isSet = !json[QString("corner_radius_percentage")].isNull() && m_corner_radius_percentage_isValid;
}

QString OAIStoryAreaPosition::asJson() const {
    QJsonObject obj = this->asJsonObject();
    QJsonDocument doc(obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject OAIStoryAreaPosition::asJsonObject() const {
    QJsonObject obj;
    if (m_x_percentage_isSet) {
        obj.insert(QString("x_percentage"), ::tele_rest::toJsonValue(m_x_percentage));
    }
    if (m_y_percentage_isSet) {
        obj.insert(QString("y_percentage"), ::tele_rest::toJsonValue(m_y_percentage));
    }
    if (m_width_percentage_isSet) {
        obj.insert(QString("width_percentage"), ::tele_rest::toJsonValue(m_width_percentage));
    }
    if (m_height_percentage_isSet) {
        obj.insert(QString("height_percentage"), ::tele_rest::toJsonValue(m_height_percentage));
    }
    if (m_rotation_angle_isSet) {
        obj.insert(QString("rotation_angle"), ::tele_rest::toJsonValue(m_rotation_angle));
    }
    if (m_corner_radius_percentage_isSet) {
        obj.insert(QString("corner_radius_percentage"), ::tele_rest::toJsonValue(m_corner_radius_percentage));
    }
    return obj;
}

double OAIStoryAreaPosition::getXPercentage() const {
    return m_x_percentage;
}
void OAIStoryAreaPosition::setXPercentage(const double &x_percentage) {
    m_x_percentage = x_percentage;
    m_x_percentage_isSet = true;
}

bool OAIStoryAreaPosition::is_x_percentage_Set() const{
    return m_x_percentage_isSet;
}

bool OAIStoryAreaPosition::is_x_percentage_Valid() const{
    return m_x_percentage_isValid;
}

double OAIStoryAreaPosition::getYPercentage() const {
    return m_y_percentage;
}
void OAIStoryAreaPosition::setYPercentage(const double &y_percentage) {
    m_y_percentage = y_percentage;
    m_y_percentage_isSet = true;
}

bool OAIStoryAreaPosition::is_y_percentage_Set() const{
    return m_y_percentage_isSet;
}

bool OAIStoryAreaPosition::is_y_percentage_Valid() const{
    return m_y_percentage_isValid;
}

double OAIStoryAreaPosition::getWidthPercentage() const {
    return m_width_percentage;
}
void OAIStoryAreaPosition::setWidthPercentage(const double &width_percentage) {
    m_width_percentage = width_percentage;
    m_width_percentage_isSet = true;
}

bool OAIStoryAreaPosition::is_width_percentage_Set() const{
    return m_width_percentage_isSet;
}

bool OAIStoryAreaPosition::is_width_percentage_Valid() const{
    return m_width_percentage_isValid;
}

double OAIStoryAreaPosition::getHeightPercentage() const {
    return m_height_percentage;
}
void OAIStoryAreaPosition::setHeightPercentage(const double &height_percentage) {
    m_height_percentage = height_percentage;
    m_height_percentage_isSet = true;
}

bool OAIStoryAreaPosition::is_height_percentage_Set() const{
    return m_height_percentage_isSet;
}

bool OAIStoryAreaPosition::is_height_percentage_Valid() const{
    return m_height_percentage_isValid;
}

double OAIStoryAreaPosition::getRotationAngle() const {
    return m_rotation_angle;
}
void OAIStoryAreaPosition::setRotationAngle(const double &rotation_angle) {
    m_rotation_angle = rotation_angle;
    m_rotation_angle_isSet = true;
}

bool OAIStoryAreaPosition::is_rotation_angle_Set() const{
    return m_rotation_angle_isSet;
}

bool OAIStoryAreaPosition::is_rotation_angle_Valid() const{
    return m_rotation_angle_isValid;
}

double OAIStoryAreaPosition::getCornerRadiusPercentage() const {
    return m_corner_radius_percentage;
}
void OAIStoryAreaPosition::setCornerRadiusPercentage(const double &corner_radius_percentage) {
    m_corner_radius_percentage = corner_radius_percentage;
    m_corner_radius_percentage_isSet = true;
}

bool OAIStoryAreaPosition::is_corner_radius_percentage_Set() const{
    return m_corner_radius_percentage_isSet;
}

bool OAIStoryAreaPosition::is_corner_radius_percentage_Valid() const{
    return m_corner_radius_percentage_isValid;
}

bool OAIStoryAreaPosition::isSet() const {
    bool isObjectUpdated = false;
    do {
        if (m_x_percentage_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_y_percentage_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_width_percentage_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_height_percentage_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_rotation_angle_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_corner_radius_percentage_isSet) {
            isObjectUpdated = true;
            break;
        }
    } while (false);
    return isObjectUpdated;
}

bool OAIStoryAreaPosition::isValid() const {
    // only required properties are required for the object to be considered valid
    return m_x_percentage_isValid && m_y_percentage_isValid && m_width_percentage_isValid && m_height_percentage_isValid && m_rotation_angle_isValid && m_corner_radius_percentage_isValid && true;
}

} // namespace tele_rest
