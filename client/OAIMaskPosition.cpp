/**
 * Telegram Bot API - REST API Client
 * The Bot API is an HTTP-based interface created for developers keen on building bots for Telegram. To learn how to create and set up a bot, please consult our Introduction to Bots and Bot FAQ.
 * 
 * ## Metadata
 *   
 * - **Copyright**: Copyright (c) 2025 Qntx
 * - **Author**: ΣX <gitctrlx@gmail.com>
 * - **Version**: 9.0.0
 * - **Modified**: 2025-07-02T07:03:12.172160579Z[Etc/UTC]
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

#include "OAIMaskPosition.h"

#include <QDebug>
#include <QJsonArray>
#include <QJsonDocument>
#include <QObject>

#include "OAIHelpers.h"

namespace tele_rest {

OAIMaskPosition::OAIMaskPosition(QString json) {
    this->initializeModel();
    this->fromJson(json);
}

OAIMaskPosition::OAIMaskPosition() {
    this->initializeModel();
}

OAIMaskPosition::~OAIMaskPosition() {}

void OAIMaskPosition::initializeModel() {

    m_point_isSet = false;
    m_point_isValid = false;

    m_x_shift_isSet = false;
    m_x_shift_isValid = false;

    m_y_shift_isSet = false;
    m_y_shift_isValid = false;

    m_scale_isSet = false;
    m_scale_isValid = false;
}

void OAIMaskPosition::fromJson(QString jsonString) {
    QByteArray array(jsonString.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
}

void OAIMaskPosition::fromJsonObject(QJsonObject json) {

    m_point_isValid = ::tele_rest::fromJsonValue(m_point, json[QString("point")]);
    m_point_isSet = !json[QString("point")].isNull() && m_point_isValid;

    m_x_shift_isValid = ::tele_rest::fromJsonValue(m_x_shift, json[QString("x_shift")]);
    m_x_shift_isSet = !json[QString("x_shift")].isNull() && m_x_shift_isValid;

    m_y_shift_isValid = ::tele_rest::fromJsonValue(m_y_shift, json[QString("y_shift")]);
    m_y_shift_isSet = !json[QString("y_shift")].isNull() && m_y_shift_isValid;

    m_scale_isValid = ::tele_rest::fromJsonValue(m_scale, json[QString("scale")]);
    m_scale_isSet = !json[QString("scale")].isNull() && m_scale_isValid;
}

QString OAIMaskPosition::asJson() const {
    QJsonObject obj = this->asJsonObject();
    QJsonDocument doc(obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject OAIMaskPosition::asJsonObject() const {
    QJsonObject obj;
    if (m_point_isSet) {
        obj.insert(QString("point"), ::tele_rest::toJsonValue(m_point));
    }
    if (m_x_shift_isSet) {
        obj.insert(QString("x_shift"), ::tele_rest::toJsonValue(m_x_shift));
    }
    if (m_y_shift_isSet) {
        obj.insert(QString("y_shift"), ::tele_rest::toJsonValue(m_y_shift));
    }
    if (m_scale_isSet) {
        obj.insert(QString("scale"), ::tele_rest::toJsonValue(m_scale));
    }
    return obj;
}

QString OAIMaskPosition::getPoint() const {
    return m_point;
}
void OAIMaskPosition::setPoint(const QString &point) {
    m_point = point;
    m_point_isSet = true;
}

bool OAIMaskPosition::is_point_Set() const{
    return m_point_isSet;
}

bool OAIMaskPosition::is_point_Valid() const{
    return m_point_isValid;
}

double OAIMaskPosition::getXShift() const {
    return m_x_shift;
}
void OAIMaskPosition::setXShift(const double &x_shift) {
    m_x_shift = x_shift;
    m_x_shift_isSet = true;
}

bool OAIMaskPosition::is_x_shift_Set() const{
    return m_x_shift_isSet;
}

bool OAIMaskPosition::is_x_shift_Valid() const{
    return m_x_shift_isValid;
}

double OAIMaskPosition::getYShift() const {
    return m_y_shift;
}
void OAIMaskPosition::setYShift(const double &y_shift) {
    m_y_shift = y_shift;
    m_y_shift_isSet = true;
}

bool OAIMaskPosition::is_y_shift_Set() const{
    return m_y_shift_isSet;
}

bool OAIMaskPosition::is_y_shift_Valid() const{
    return m_y_shift_isValid;
}

double OAIMaskPosition::getScale() const {
    return m_scale;
}
void OAIMaskPosition::setScale(const double &scale) {
    m_scale = scale;
    m_scale_isSet = true;
}

bool OAIMaskPosition::is_scale_Set() const{
    return m_scale_isSet;
}

bool OAIMaskPosition::is_scale_Valid() const{
    return m_scale_isValid;
}

bool OAIMaskPosition::isSet() const {
    bool isObjectUpdated = false;
    do {
        if (m_point_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_x_shift_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_y_shift_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_scale_isSet) {
            isObjectUpdated = true;
            break;
        }
    } while (false);
    return isObjectUpdated;
}

bool OAIMaskPosition::isValid() const {
    // only required properties are required for the object to be considered valid
    return m_point_isValid && m_x_shift_isValid && m_y_shift_isValid && m_scale_isValid && true;
}

} // namespace tele_rest
