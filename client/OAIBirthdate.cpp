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

#include "OAIBirthdate.h"

#include <QDebug>
#include <QJsonArray>
#include <QJsonDocument>
#include <QObject>

#include "OAIHelpers.h"

namespace tele_rest {

OAIBirthdate::OAIBirthdate(QString json) {
    this->initializeModel();
    this->fromJson(json);
}

OAIBirthdate::OAIBirthdate() {
    this->initializeModel();
}

OAIBirthdate::~OAIBirthdate() {}

void OAIBirthdate::initializeModel() {

    m_day_isSet = false;
    m_day_isValid = false;

    m_month_isSet = false;
    m_month_isValid = false;

    m_year_isSet = false;
    m_year_isValid = false;
}

void OAIBirthdate::fromJson(QString jsonString) {
    QByteArray array(jsonString.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
}

void OAIBirthdate::fromJsonObject(QJsonObject json) {

    m_day_isValid = ::tele_rest::fromJsonValue(m_day, json[QString("day")]);
    m_day_isSet = !json[QString("day")].isNull() && m_day_isValid;

    m_month_isValid = ::tele_rest::fromJsonValue(m_month, json[QString("month")]);
    m_month_isSet = !json[QString("month")].isNull() && m_month_isValid;

    m_year_isValid = ::tele_rest::fromJsonValue(m_year, json[QString("year")]);
    m_year_isSet = !json[QString("year")].isNull() && m_year_isValid;
}

QString OAIBirthdate::asJson() const {
    QJsonObject obj = this->asJsonObject();
    QJsonDocument doc(obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject OAIBirthdate::asJsonObject() const {
    QJsonObject obj;
    if (m_day_isSet) {
        obj.insert(QString("day"), ::tele_rest::toJsonValue(m_day));
    }
    if (m_month_isSet) {
        obj.insert(QString("month"), ::tele_rest::toJsonValue(m_month));
    }
    if (m_year_isSet) {
        obj.insert(QString("year"), ::tele_rest::toJsonValue(m_year));
    }
    return obj;
}

qint32 OAIBirthdate::getDay() const {
    return m_day;
}
void OAIBirthdate::setDay(const qint32 &day) {
    m_day = day;
    m_day_isSet = true;
}

bool OAIBirthdate::is_day_Set() const{
    return m_day_isSet;
}

bool OAIBirthdate::is_day_Valid() const{
    return m_day_isValid;
}

qint32 OAIBirthdate::getMonth() const {
    return m_month;
}
void OAIBirthdate::setMonth(const qint32 &month) {
    m_month = month;
    m_month_isSet = true;
}

bool OAIBirthdate::is_month_Set() const{
    return m_month_isSet;
}

bool OAIBirthdate::is_month_Valid() const{
    return m_month_isValid;
}

qint32 OAIBirthdate::getYear() const {
    return m_year;
}
void OAIBirthdate::setYear(const qint32 &year) {
    m_year = year;
    m_year_isSet = true;
}

bool OAIBirthdate::is_year_Set() const{
    return m_year_isSet;
}

bool OAIBirthdate::is_year_Valid() const{
    return m_year_isValid;
}

bool OAIBirthdate::isSet() const {
    bool isObjectUpdated = false;
    do {
        if (m_day_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_month_isSet) {
            isObjectUpdated = true;
            break;
        }

        if (m_year_isSet) {
            isObjectUpdated = true;
            break;
        }
    } while (false);
    return isObjectUpdated;
}

bool OAIBirthdate::isValid() const {
    // only required properties are required for the object to be considered valid
    return m_day_isValid && m_month_isValid && true;
}

} // namespace tele_rest
