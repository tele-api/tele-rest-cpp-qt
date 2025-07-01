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

/*
 * OAIShippingQuery.h
 *
 * This object contains information about an incoming shipping query.
 */

#ifndef OAIShippingQuery_H
#define OAIShippingQuery_H

#include <QJsonObject>

#include "OAIShippingAddress.h"
#include "OAIUser.h"
#include <QString>

#include "OAIEnum.h"
#include "OAIObject.h"

namespace tele_rest {
class OAIUser;
class OAIShippingAddress;

class OAIShippingQuery : public OAIObject {
public:
    OAIShippingQuery();
    OAIShippingQuery(QString json);
    ~OAIShippingQuery() override;

    QString asJson() const override;
    QJsonObject asJsonObject() const override;
    void fromJsonObject(QJsonObject json) override;
    void fromJson(QString jsonString) override;

    QString getId() const;
    void setId(const QString &id);
    bool is_id_Set() const;
    bool is_id_Valid() const;

    OAIUser getFrom() const;
    void setFrom(const OAIUser &from);
    bool is_from_Set() const;
    bool is_from_Valid() const;

    QString getInvoicePayload() const;
    void setInvoicePayload(const QString &invoice_payload);
    bool is_invoice_payload_Set() const;
    bool is_invoice_payload_Valid() const;

    OAIShippingAddress getShippingAddress() const;
    void setShippingAddress(const OAIShippingAddress &shipping_address);
    bool is_shipping_address_Set() const;
    bool is_shipping_address_Valid() const;

    virtual bool isSet() const override;
    virtual bool isValid() const override;

private:
    void initializeModel();

    QString m_id;
    bool m_id_isSet;
    bool m_id_isValid;

    OAIUser m_from;
    bool m_from_isSet;
    bool m_from_isValid;

    QString m_invoice_payload;
    bool m_invoice_payload_isSet;
    bool m_invoice_payload_isValid;

    OAIShippingAddress m_shipping_address;
    bool m_shipping_address_isSet;
    bool m_shipping_address_isValid;
};

} // namespace tele_rest

Q_DECLARE_METATYPE(tele_rest::OAIShippingQuery)

#endif // OAIShippingQuery_H
